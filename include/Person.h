#pragma once
#include <string>
#include <iostream>

using namespace std;

//If a class contains only pure virtual functions so we call it a PURE virtual class or
//interface for Java developer
//Person is a virtual class (or an abstract class) by virtue of the fact that it
// has one or more pure virtual functions, but Person is not a PURE virtual class
//There isn't actually an abstract keyword in C++
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
    //sub-classes are forced to implement the pure virtual method ( = 0 )
    //This is like Java abstract method
    virtual void sitInClass() = 0;
    //sub-classes aren't forced to implement the virtual method
    //this method was implemented in sub-classes
    virtual string whoAmI();
    //this method was not implemented in sub-classes
    virtual string personMethod();
};
