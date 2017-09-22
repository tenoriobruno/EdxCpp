//#include <vector>
#include "../include/Student.h"
#include "../include/Teacher.h"
#include <string>

#define MAX_STUDENTS 40

using namespace std; //vector
class Course{

private: string name;

public:
  //vector<*Student> students;
  Student *students[MAX_STUDENTS];
  Teacher *teacher;
  string getName();
  void setName(string name);
  Course(int size);
};
