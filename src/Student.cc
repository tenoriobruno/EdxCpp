#include <iostream>
#include "../include/Student.h"

Student::Student(string firstName, string lastName, int age, string city, string phone):
  Person::Person(firstName, lastName, age, city, phone)
  {
  }

Student::Student(){
}

void Student::sitInClass(){
  cout << "Student, sitting in main theater" << endl;
}
