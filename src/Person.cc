#include "../include/Person.h"

string Person::getFirstName(){
  return firstName;
}
string Person::getLastName(){
  return lastName;
}
int Person::getAge(){
  return age;
}
string Person::getCity(){
  return city;
}
string Person::getPhone(){
  return phone;
}

void Person::printAllInfos(){
  cout << getFirstName() << endl;
  cout << getLastName() << endl;
  cout << getAge() << endl;
  cout << getCity() << endl;
  cout << getPhone() << endl;
  cout << whoAmI() << endl;
  cout << personMethod() << endl << endl;
}

Person::Person(string firstName, string lastName, int age, string city, string phone){
    this->firstName = firstName;
    this->lastName = lastName;
    this->age = age;
    this->city = city;
    this->phone = phone;
}

Person::Person(){
}

string Person::whoAmI(){
}

string Person::personMethod(){
  return "Person";
}
