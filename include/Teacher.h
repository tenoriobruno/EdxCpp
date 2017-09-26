#include "../include/Person.h"

class Teacher: public Person{
public:
  Teacher(string firstName, string lastName, int age, string city, string phone);
  Teacher();
  void gradeStudent();
  virtual void sitInClass();
  virtual string whoAmI();
};
