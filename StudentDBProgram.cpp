#include <iostream>
#include <string>

// Function Defintions

void DisplayMenu(void);


namespace MZRTAD001
{
     void DisplayMenu(void)
    {
        std::cout<<"0: Add student\n";
        std::cout<<"1: Read database\n";
        std::cout<<"2: Save database\n";
        std::cout<<"3: Display given student data\n";
        std::cout<<"4: Grade student\n";
     
    }

}

int main (void)
{
    //create database object 
    
    std::string option_selected;
    
    MZRTAD001::DisplayMenu();
    
    std::getline(std::cin, option_selected ,'\n');

    for(;;)
    {
       
        switch(option_selected)
        {
            case "0": std::cout<<"function AddStudent() called";

            case "1": std::cout<<"function ReadDatase() called";

            case "2": std::cout<<"function SaveDatabase() called";

            case "3": std::cout<<"function DisplayStudent() called";

            case "4": std::cout<<"function GradeStudent() called";

            case "q": std::cout<<"function Exit() called";

        }
    }
    
    return 0;
}


