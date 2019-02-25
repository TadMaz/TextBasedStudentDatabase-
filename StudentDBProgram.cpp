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
    std::string optionSelected;

    MZRTAD001::DisplayMenu();

    std::getline(std::cin, optionSelected ,'\n');

    for(;;)
    {
        if(optionSelected == "q" )
        {
            break;
        }
    }
    
    return 0;
}
