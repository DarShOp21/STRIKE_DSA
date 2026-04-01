#include <iostream>
#include <ostream>
#include <string>

using namespace std;

class Student{
  public:
  string name;
  int roll_no , age ;
  char div;
};

int main(){
  Student s1;
  s1.name = "Darshan";

  cout << "s1 address - " << &s1 << endl;

  Student s2 = s1;
  cout << "s2 address - " << &s2 << endl;

  if(&s2 == &s1){
    cout << "s2 == s1 points same object of s1";
  }
  
  cout<< s1.name << endl;

  return 0;
}
