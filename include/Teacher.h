#include <string>
using namespace std;
class Teacher{
private:
  string firstName;
  string lastName;
  int age;
  string city;
  string phone;

public:
  string getFirstName();
  string getLastName();
  int getAge();
  string getCity();
  string getPhone();

  Teacher(string firstName, string lastName, int age, string city, string phone);
  Teacher();
  void gradeStudent();
  void sitInClass();
};
