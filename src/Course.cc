#include "../include/Course.h"
Course::Course(int size){
  for (int i = 0; i < size; i++){
    students[i] = new Student();
  }
  teacher = new Teacher();
}

string Course::getName(){
  return name;
}

void Course::setName(string name){
    this->name = name;
}
