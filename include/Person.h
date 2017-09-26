#pragma once
#include <string>
#include <iostream>

using namespace std;

class Person{
  public:
    string firstName;
    string lastName;
    int age;
    string city;
    string phone;
    Person(string firstName, string lastName, int age, string city, string phone);
    Person();
    string getFirstName();
    string getLastName();
    int getAge();
    string getCity();
    string getPhone();
    void printAllInfos();
    virtual void sitInClass() = 0;
};
