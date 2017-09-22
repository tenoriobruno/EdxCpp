#include "../include/Teacher.h"
#include <iostream>

string Teacher::getFirstName(){
  return firstName;
}
string Teacher::getLastName(){
  return lastName;
}
int Teacher::getAge(){
  return age;
}
string Teacher::getCity(){
  return city;
}
string Teacher::getPhone(){
  return phone;
}

Teacher::Teacher(string firstName, string lastName, int age, string city, string phone){
  this->firstName = firstName;
  this->lastName = lastName;
  this->age = age;
  this->city = city;
  this->phone = phone;
}

Teacher::Teacher(){}

void gradeStudent(){
  cout << "Student graded";
}

void Teacher::sitInClass(){
  cout << "Teacher, sitting at front of class";
}
