#include <iostream>
#include <string>
#include <StudentRecord.h>
// Function Defintions

void DisplayMenu(void);

using namespace std;


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
    std::vector<StudentRecord> database; 

    std::string option_selected;
    
    MZRTAD001::DisplayMenu();
    
    std::getline(std::cin, option_selected);

    for(;;)
    {
      
        if( option_selected =="0")
        {
            std::cout<<"function AddStudent() called\n";

            std::string student_name;
            std::cout<<"Enter the Student's Name";
            std::getline(std::cin, student_name);
            std::cout<<"Student's Name: "<<student_name;

            // std::cout<<"function AddStudent() called\n";

            // std::cout<<"function AddStudent() called\n";

            // std::cout<<"function AddStudent() called\n";

            // std::cout<<"function AddStudent() called\n";

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
    
    return 0;
}


