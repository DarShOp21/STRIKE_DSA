#include <iostream>
#include <string>

using namespace std;

class Customer{
  public:
    string name ;
    int age , balance;

  Customer(string name , int age , int balance){
    this->name = name;
    this->age = age;
    this->balance = balance;
  }
};

int main(){

  Customer c1("Darshan",21,2000); //This will create the object / instance in the stack

  Customer *c2 = new Customer("Avani",22,5000); //This will create the object / instance in the heap
  
  cout << c1.name << endl;

  cout << c2->name << endl;
  cout << (*c2).name << endl;

  return 0;
}
