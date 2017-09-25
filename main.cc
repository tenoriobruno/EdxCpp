#include "./include/Course.h"
#include <iostream>
int main(int argc, char const *argv[]) {

  Student *st1 = new Student("lastName1", "firstName1", 1, "SP", "111");
  Student *st2 = new Student("lastName2", "firstName2", 2, "SP", "111");
  Student *st3 = new Student("lastName3", "firstName3", 3, "SP", "111");

  Course *intermadiate_cc = new Course(3);
  intermadiate_cc->setName("Intermadiate C++");
  cout << intermadiate_cc->getName() << endl << endl;

  intermadiate_cc->students->push_back(st1);
  intermadiate_cc->students->push_back(st2);
  intermadiate_cc->students->push_back(st3);

  Teacher *t1 = new Teacher("firstNameT", "lastNameT", 50, "BH", "000");
  intermadiate_cc->teacher = t1;
  intermadiate_cc->teacher->sitInClass();
  intermadiate_cc->teacher->gradeStudent();
  intermadiate_cc->teacher->printAllInfos();



  for (int i = 0; i < 3; i++){
      Student *s = intermadiate_cc->students->at(i);
      s->sitInClass();
      s->printAllInfos();
  }
  return 0;
}
