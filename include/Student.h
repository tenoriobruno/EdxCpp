#include <string>
using namespace std;
class Student{
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

  Student(string firstName, string lastName, int age, string city, string phone);
  Student();
  void sitInClass();
};
