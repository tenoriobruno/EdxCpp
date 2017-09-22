#include "./include/Course.h"
#include <iostream>
int main(int argc, char const *argv[]) {

  Student *st1 = new Student("lastName1", "firstName1", 1, "SP", "111");
  Student *st2 = new Student("lastName2", "firstName2", 2, "SP", "111");
  Student *st3 = new Student("lastName3", "firstName3", 3, "SP", "111");

  Course *intermadiate_cc = new Course(3);

  intermadiate_cc->students[0] = st1;
  intermadiate_cc->students[1] = st2;
  intermadiate_cc->students[2] = st3;

  Teacher *t1 = new Teacher("firstNameT", "lastNameT", 50, "BH", "000");
  intermadiate_cc->teacher = t1;

  intermadiate_cc->setName("Intermadiate C++");

  cout << intermadiate_cc->teacher->getFirstName() << endl;
  cout << intermadiate_cc->teacher->getLastName() << endl;
  cout << intermadiate_cc->teacher->getAge() << endl;
  cout << intermadiate_cc->teacher->getCity() << endl;
  cout << intermadiate_cc->teacher->getPhone() << endl;

  cout << intermadiate_cc->getName() << endl;
  for (int i = 0; i < 3; i++){
      cout << intermadiate_cc->students[i]->getFirstName() << endl;
      cout << intermadiate_cc->students[i]->getLastName() << endl;
      cout << intermadiate_cc->students[i]->getAge() << endl;
      cout << intermadiate_cc->students[i]->getCity() << endl;
      cout << intermadiate_cc->students[i]->getPhone() << endl;
  }

  return 0;
}
