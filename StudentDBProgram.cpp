#include <iostream>
#include <string>
#include "StudentRecord.h"
// Function Defintions

void DisplayMenu(void);

using namespace std;

//TODO might want to move this to more suitable location.
namespace MZRTAD001
{
     void DisplayMenu(void)
    {
        std::cout<<"0: Add student\n";
        std::cout<<"1: Read database\n";
        std::cout<<"2: Save database\n";
        std::cout<<"3: Display given student data\n";
        std::cout<<"4: Grade student\n";
        std::cout<<"Enter a number (or q to quit) and press return...\n";
     
    }

}

int main (void)
{
    //create database object 
    std::vector<MZRTAD001::StudentRecord> database; 

    for(;;)
    {
        std::string option_selected;
    
        MZRTAD001::DisplayMenu();
    
        std::getline(std::cin, option_selected);

        std::cout<<"Staged records "<<database.size();

        for(;;)
        {
      
            if( option_selected =="0")
            {
                std::cout<<"function AddStudent() called\n";

                std::string student_name;
                std::cout<<"Enter the Student's Name: ";
                std::getline(std::cin, student_name);

                std::string student_surname;
                std::cout<<"Enter the Student's Surame: ";
                std::getline(std::cin, student_surname);

                std::string student_number;
                std::cout<<"Enter their Student Number: ";
                std::getline(std::cin, student_number);

                std::string class_record;
                std::cout<<"Enter the Student's mark (s) seperated by spaces ";
                std::getline(std::cin, class_record);

                MZRTAD001::StudentRecord studentRecord = { student_name, 
                                                        student_surname,
                                                        student_number,
                                                        class_record }; 

                database = MZRTAD001::add_student(database,studentRecord);
                break;
            }
            else if (option_selected =="1")
            {
                std::cout<<"function ReadDatase() called\n";
                break;
            }
            else if (option_selected =="2")
            {   
                std::cout<<"function SaveDatabase() called\n";
                MZRTAD001::save_database(database);
                break;
            } 
            else if( option_selected =="3")
            {
                std::cout<<"function DisplayStudent() called\n";
                break;
            }
            else if(option_selected =="4")

            {
                std::cout<<"function GradeStudent() called\n";
                break;
            }
            else if(option_selected =="q")
            {
                std::cout<<"function Exit() called\n";
                break;
            }

        }

        
    }
    
    return 0;
}


