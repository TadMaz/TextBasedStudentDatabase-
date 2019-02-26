#include "StudentRecord.h"
#include <iostream>
#include <fstream>
#include <sstream>

namespace MZRTAD001
{

    std::vector<StudentRecord> add_student(std::vector<StudentRecord> database, StudentRecord student)
    {
        database.push_back(student);
        std::cout<< "Student Added to Database\n";
    
        return database;
    }

    std::vector<StudentRecord> read_database(std::vector<StudentRecord> database)
    {
        ifstream datastream("DATABASE.txt");

        StudentRecord student;

        if(!datastream)
        {
            std::cout<<"Database file could not be opened.";
            return database;
        }

        std::string entry;
        std::string line = entry, name, surname, student_no, class_record,value;

        while (std::getline(datastream, entry))
        {
            istringstream iss(entry);

            while (!iss.eof())
            {
                iss>>name;
                iss>>surname;
                iss>>student_no;
                class_record = "";

                while(!iss.eof()){

                    iss>>value;
                    class_record += value+" ";     
                }

                iss>>class_record;
            }

            student = {name, surname, student_no, class_record};
            database.push_back(student);
        }
        return database;

    }

    void save_database(std::vector<StudentRecord> database)
    {
        //iterate through vector and write each item to text file
        //**only add element if it does not exist in database.
        //append to exiting file.

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

            dataStream <<record.Name + " "<<record.Surname+" "<< record.StudentNumber+" "<<record.ClassRecord+"\n";
            
            database.pop_back();
        }
        dataStream.close();
        std::cout<< "Database saved.\n";
        
    }

    void display_student_data(std::vector<StudentRecord> database)
    {
        //open file for reading 
        string filename = "DATABASE.txt";

    }

    void grade_student(std::vector<StudentRecord> database);

    void exit(std::vector<StudentRecord> database);
}