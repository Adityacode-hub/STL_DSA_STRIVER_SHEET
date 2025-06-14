#include "../include/MiniDBMS.hpp"
int main()
{
    // MiniDBMS dbms;
    // dbms.createtable("students"); // Create the table first
    // dbms.insertinto("students", 1, "Vinay"); // Now insert data
    // dbms.showtable("students"); // Display data in the table
    
    MiniDBMS db;
    db.query("CREATE TABLE students");
    db.query("INSERT INTO students VALUES 1 John");
    db.query("INSERT INTO students VALUES 2 Alice");
    db.query("SELECT TABLE students");
    db.query("UPDATE TABLE students 1 Johnny");
    db.query("SELECT TABLE students");
    // db.query("DELETE TABLE students 2");
    db.query("SELECT TABLE students");
    db.loadtable("students", "data.txt");
    db.dumptable("students", "data.txt");

    return 0;

}
