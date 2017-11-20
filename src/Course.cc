#include "../include/Course.h"

Course::Course(){
  students = new vector<Student*>;
  teacher = new Teacher();
}

string Course::getName(){
  return name;
}

void Course::setName(string name){
    this->name = name;
}
