#include "StudentRecord.h"
#include <iostream>
#include <fstream>

namespace MZRTAD001
{

    std::vector<StudentRecord> add_student(std::vector<StudentRecord> database, StudentRecord student)
    {
        database.push_back(student);
        std::cout<< "Student Added to Database\n";
        std::cout<<database.size();
        return database;
    }

    void save_database(std::vector<StudentRecord> database)
    {
        //iterate through vector and write each item to text file
        //**only add element if it does not exist in database.
        //ofstream dataStream;

        if (database.empty())
        {
            std::cout<<"Database is up to date. No records have been added.";
        } 

        ofstream dataStream("DATABASE.txt");

        while(!database.empty())
        {
            MZRTAD001:StudentRecord record = database.back();
            
            if(!dataStream)
            {
                std::cout<< "Database File could not be opened.\n";
                return;
            }

            dataStream <<record.Name + " "<<record.Surname+" "<< record.StudentNumber+" "<<record.StudentNumber+"\n";
            
            database.pop_back();
        }
        dataStream.close();
        std::cout<< "Database saved.\n";
        
    }

    void display_student_data(std::vector<StudentRecord> database);

    void grade_student(std::vector<StudentRecord> database);

    void exit(std::vector<StudentRecord> database);
}