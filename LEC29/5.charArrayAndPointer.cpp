#include<iostream>

using namespace std;

int main(){
  char arr[5] = {'a','b','c','d','e'};

  char *ptr = arr;

  cout << ptr << endl; // this will print all the characters in the array
                // This is the fixed behaviour of char array in c++
                //

  //get the address of the arr
  cout << (void*)ptr;

  return  0;
}
