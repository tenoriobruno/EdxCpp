#include <iostream>
#include "../include/Student.h"

string Student::getFirstName(){
  return firstName;
}
string Student::getLastName(){
  return lastName;
}
int Student::getAge(){
  return age;
}
string Student::getCity(){
  return city;
}
string Student::getPhone(){
  return phone;
}
Student::Student(string firstName, string lastName, int age, string city, string phone){
    this->firstName = firstName;
    this->lastName = lastName;
    this->age = age;
    this->city = city;
    this->phone = phone;
  }

Student::Student(){
}

void Student::sitInClass(){
  cout << "Student, sitting in main theater";
}

void Student::printAllinfos(){
  cout << getFirstName() << endl;
  cout << getLastName() << endl;
  cout << getAge() << endl;
  cout << getCity() << endl;
  cout << getPhone() << endl;
}
