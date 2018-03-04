#include "./include/Course.h"
#include <iostream>
#include <memory>

int main(int argc, char const *argv[]) {

  auto st1 = make_unique<Student>("lastName1", "firstName1", 1, "SP", "111");
  auto st2 = make_unique<Student>("lastName2", "firstName2", 2, "SP", "111");
  auto st3 = make_unique<Student>("lastName3", "firstName3", 3, "SP", "111");

  auto intermadiate_cc = make_unique<Course>();
  intermadiate_cc->setName("Intermadiate C++");
  cout << intermadiate_cc->getName() << endl << endl;

  intermadiate_cc->students->push_back(st1.get());
  intermadiate_cc->students->push_back(st2.get());
  intermadiate_cc->students->push_back(st3.get());

  auto t1 = make_unique<Teacher>("firstNameT", "lastNameT", 50, "BH", "000");
  intermadiate_cc->teacher = move(t1);
  intermadiate_cc->teacher->sitInClass();
  intermadiate_cc->teacher->gradeStudent();
  intermadiate_cc->teacher->printAllInfos();

  for (int i = 0; i < 3; i++){
      auto s = intermadiate_cc->students->at(i);
      s->sitInClass();
      s->printAllInfos();
  }

  using TeacherAliasPtr = Teacher(*);
  TeacherAliasPtr teacher_p = new Teacher("firstNameAlias", "lastNameAlias", 50, "BH", "000");
  teacher_p->printAllInfos();

  return 0;

}
