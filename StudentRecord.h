#ifndef DATABASE_H 

#define DATABASE_H 

#include <string>
#include <vector>
using namespace std;

namespace MZRTAD001{

    struct StudentRecord
    {
        string Name;
        string Surname; 
        string StudentNumber;
        string ClassRecord;
    };

    std::vector<StudentRecord> add_student(std::vector<StudentRecord> database, StudentRecord student);

    std::vector<StudentRecord> read_database();

    void save_database(std::vector<StudentRecord> database);

    void display_student_data(std::string student_no);

    void grade_student(std::string student_no);

    void exit();

}
#endif