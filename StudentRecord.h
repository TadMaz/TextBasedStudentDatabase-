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

    std::vector<StudentRecord> read_database(std::vector<StudentRecord> database);

    void save_database(std::vector<StudentRecord> database);

    void display_student_data(std::vector<StudentRecord> database);

    void grade_student(std::vector<StudentRecord> database);

    void exit(std::vector<StudentRecord> database);

    bool is_in_database(std::string studentID);

}
#endif