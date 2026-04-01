#include<iostream>
#include <ostream>

using namespace std;

int main(){
  int arr[5] = {1,2,3,4,5};

  cout << &arr[0] << endl;  //0x7ffc6ad79b40
  cout << &arr[1] << endl;  //0x7ffc6ad79b4s
  cout << endl << endl;

  //Addresss of all values in array
  for(int i = 0 ; i < 5 ; i++)
    cout << arr+i << endl;


  cout << endl << endl ;


  //Values of the array
  for(int i = 0 ; i < 5 ; i++)
    cout << *(arr+i) << endl;

  cout << endl << endl;

  //pointer for the array
  int *ptr = arr;

  //values at the array
  for(int i = 0 ; i < 5 ; i++)
    cout << ptr[i] << endl;


  cout << endl << endl;

  //Address of the values
  for(int i = 0 ; i < 5 ; i++)
    cout << ptr+i << endl;
  return 0;
}
