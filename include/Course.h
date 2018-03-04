#include <vector>
#include <memory>
#include "../include/Student.h"
#include "../include/Teacher.h"

using namespace std; //vector

class Course{
  private: string name;
  public:
    vector<Student*> *students;
		unique_ptr<Teacher> teacher;
    string getName();
    void setName(string name);
    Course();
  };
