#include "../include/Person.h"

class Teacher: public Person{
public:
  Teacher(string firstName, string lastName, int age, string city, string phone);
  Teacher();
  void gradeStudent();
  void sitInClass();
};
