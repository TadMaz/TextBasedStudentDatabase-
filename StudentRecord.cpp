#include "StudentRecord.h"
#include <iostream>
namespace MZRTAD001
{

    void add_student(std::vector<StudentRecord> database, StudentRecord student)
    {
        database.push_back(student);
        std::cout<< "Student Added to Database/n";
    }

    void save_database(std::vector<StudentRecord> database);

    void display_student_data(std::vector<StudentRecord> database);

    void grade_student(std::vector<StudentRecord> database);

    void exit(std::vector<StudentRecord> database);
}