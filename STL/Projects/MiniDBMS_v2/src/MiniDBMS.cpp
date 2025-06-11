#include "../include/MiniDBMS.hpp"
#include <iostream>
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


MiniDBMS::~MiniDBMS() {
    for (auto& pair : tables) {
        delete pair.second;
    }
}