#include "../include/MiniDBMS.hpp"
int main()
{
    MiniDBMS dbms;
    dbms.createtable("students"); // Create the table first
    dbms.insertinto("students", 1, "Vinay"); // Now insert data
    dbms.showtable("students"); // Display data in the table
    
    return 0;

}
