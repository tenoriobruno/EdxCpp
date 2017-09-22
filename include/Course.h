#include <vector>
#include "../include/Student.h"
#include "../include/Teacher.h"
#include <string>

using namespace std; //vector
class Course{

private: string name;

public:
  vector<Student*> *students;
  Teacher *teacher;
  string getName();
  void setName(string name);
  Course(int size);
};
