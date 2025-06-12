#include "../include/MiniDBMS.hpp"
#include <iostream>
#include<sstream>
using namespace std;
void MiniDBMS::createtable(string tablename)
{
    if(tables.find(tablename)!=tables.end())
    {
           cout<<"table already exists.\n";
           return;
    }
    tables[tablename]=new DeleteRecord(0," ");
    cout<< " Table " << tablename <<" created succcessfully.\n ";

}
void MiniDBMS::insertinto(string tablename,int id,string name)
{
    if(tables.find(tablename)!=tables.end())
    {
        tables[tablename]->insertdata(id,name);
    }
    else{
        cout<<"table not found.\n";
    }
}

void MiniDBMS::findfrom(string tablename,int id)
{
    if(tables.find(tablename)!=tables.end())
    {
        tables[tablename]->finddata(id);
    }
    else{
        cout<<"table not found";
    }
}

void MiniDBMS::updatein(string tablename,int id,string newname )
{
    if(tables.find(tablename)!=tables.end())
    {
        tables[tablename]->updatedata(id,newname);
    }
    else 
    {
        cout<<"table not found";
    }
}
void MiniDBMS::deletefrom(string tablename,int id)
{
    if(tables.find(tablename)!=tables.end())
    {
        tables[tablename]->deleterecord(id," ");
    }
    else
    {
        cout<<"table not found.\n";
    }
}
void MiniDBMS::showtable(string tableName) {
    if (tables.find(tableName) != tables.end()) {
        tables[tableName]->showallRecord();
    } else {
        cout << "Table not found.\n";
    }
}
void MiniDBMS::loadtable(string tablename, string filename) {
    // Find the table in your tables container (map or whatever)
    auto it = tables.find(tablename);
    if (it == tables.end()) {
        cout << "Table " << tablename << " not found." << endl;
        return;
    }

    // Assuming each table object has a loadFromFile method like DeleteRecord's loadFromFile
    it->second->loadFromFile(filename);

    cout << "Data loaded into table " << tablename << " from " << filename << endl;
}
// MiniDBMS.cpp

void MiniDBMS::dumptable(std::string tablename, std::string filename) {
    auto it = tables.find(tablename);
    if (it == tables.end()) {
        std::cout << "Table " << tablename << " not found.\n";
        return;
    }
    // Assuming your table class has dumpToFile method
    it->second->dumpToFile(filename);
}

void MiniDBMS::query(const string& sql)
{
    string command=getcommandType(sql);
    if(command=="INSERT")
    {
        handleInsert(sql);
    }
   else if(command=="CREATE")
    {
        handleCreate(sql);
    }
   else if(command=="UPDATE")
    {
             handleUpdate(sql);
    }
    else if(command=="DELETE")
    {
        handleDelete(sql);
    }
    else if(command=="SELECT")
    {
          handleSelect(sql);
    }
    else
    {
        cout<<"INVALID QUERY \n";
    }
}

void MiniDBMS::handleInsert(const string& sql) {
    string command, intoKeyword, table, valuesKeyword, name;
    int id;
    stringstream ss(sql);
    ss >> command >> intoKeyword >> table >> valuesKeyword >> id >> name;
    
    if (command == "INSERT" && intoKeyword == "INTO" && valuesKeyword == "VALUES") {
        insertinto(table, id, name);
    } else {
        cout << "Invalid INSERT query format.\n";
    }
}

void MiniDBMS::handleCreate(const string& sql)
{
    string command,tableKeyword,tablename;
    stringstream ss(sql);
    ss>>command>>tableKeyword>>tablename;
    if(command=="CREATE"&& tableKeyword=="TABLE")
    {
        createtable(tablename);
    }
    else{
        cout<<"invalid CREATE TABLE query format.\n";
    }
}
void MiniDBMS::handleUpdate(const string& sql)
{
    string command,tableKeyword,tablename,newname;
    int id;
    stringstream ss(sql);
    ss>>command>>tableKeyword>>tablename>>id>>newname;
    if(command=="UPDATE"&& tableKeyword=="TABLE")
    {
        updatein(tablename,id,newname);
    }
    else{
        cout<<"Invalid UPDATE query format.\n";
    }
}
void MiniDBMS::handleDelete(const string& sql)
{
    string command,tableKeyword,tablename;
    int id;
    stringstream ss(sql);
    ss>>command>>tableKeyword>>tablename>>id;
    if(command=="DELETE"&& tableKeyword=="TABLE")
    {
        deletefrom(tablename,id);
    } 
}
void MiniDBMS::handleSelect(const string& sql)
{
    string command,tableKeyword,tablename;
    stringstream ss(sql);
    ss>>command>>tableKeyword>>tablename;
    if(command=="SELECT" && tableKeyword=="TABLE")
    {
        showtable(tablename);

    }
}
std::string MiniDBMS::getcommandType(const std::string& sql) {
    std::stringstream ss(sql);
    std::string command;
    ss >> command;
    return command;
}

MiniDBMS::~MiniDBMS() {
    for (auto& pair : tables) {
        delete pair.second;
    }
}