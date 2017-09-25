#include "../include/Course.h"

Course::Course(int size){
  students = new vector<Student*>;
  teacher = new Teacher();
}

string Course::getName(){
  return name;
}

void Course::setName(string name){
    this->name = name;
}
