#include "../include/Person.h"

class Student: public Person{
  public:
    Student(string firstName, string lastName, int age, string city, string phone);
    Student();
    virtual void sitInClass();
    virtual string whoAmI();
};
