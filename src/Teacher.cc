#include "../include/Teacher.h"
#include <iostream>

Teacher::Teacher(string firstName, string lastName, int age, string city, string phone):
  Person::Person(firstName, lastName, age, city, phone){
}

Teacher::Teacher(){}

void Teacher::gradeStudent(){
  cout << "Student graded" << endl;
}

void Teacher::sitInClass(){
  cout << "Teacher, sitting at front of class" << endl;
}

string Teacher::whoAmI(){
  return "Teacher";
}
