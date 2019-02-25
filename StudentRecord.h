#ifndef DATABASE_H;
#define DATABASE_H;

#include <string>
#include <vector>

namespace MZRTAD001{

    struct StudentRecord
    {
        Name;
        string Surname; 
        string StudentNumber;
        string ClassRecord;
    };

    void add_student(std::vector<StudentRecord> database);

    void save_database(std::vector<StudentRecord> database);

    void display_student_data(std::vector<StudentRecord> database);

    void grade_student(std::vector<StudentRecord> database);

    void exit(std::vector<StudentRecord> database);

}