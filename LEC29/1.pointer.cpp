#include<iostream>

using  namespace std;

int main(){
  int num = 10;
 
  // the pointer is stored with a initial symbol * , which denotes it as a pointer .
  // This is done because if we just store the value as int , diff 64 byte systems stores the address in 8byte and the int is of 4 byte
  // So the * denotes it as pointer , and then the system calculates the pointer size according to the 32BYTE / 64BYTE (something like this)
  int *ptr = &num; //ptr is a pointer pointing a int value of variable num
                   //ptr will store the address of num

  cout << num << endl << "Address of num : " << ptr << endl;

  //Accessing the values pointed by the pointer
  cout << "Value pointing by ptr : " << *ptr << endl;
  
  cout << "Address of ptr : " << &ptr << endl;

  return  0;
} 
