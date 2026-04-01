#include <iostream>
#include <ostream>
#include <string>

using namespace std;

class Student{
  public:
  string name;
  int roll_no , age ;
  char div;
  
  //constructor
  // It'a a function which is called when the object of the class is created 
  // It is mostly used to initialize the values of the object
  Student(string name , int roll , int age , char div){
    this->name = name;
    this->roll_no = roll;
    this->age = age;
    this->div = div;
  }
};

int main(){
  Student s1("Darshan Ayare" , 03 , 21 , 'E');

  cout << "++++++++++++++++++++++++++" << endl;
  cout << "++ Name : " << s1.name << " ++" << endl;
  cout << "++ Div : " << s1.div << "              ++" << endl;
  cout << "++++++++++++++++++++++++++" << endl; 
  return 0;
}
