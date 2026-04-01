#include<iostream>
#include <ostream>

using namespace std;

int add(int *ptr , int size){
  int sum = 0;
  cout << ptr << endl;

  for(int i = 0 ; i < size ; i++)
    sum += ptr[i];

  return sum;
}

int main(){
  int arr[10] = {1,2,3,4,5,6,7,8,9,10};

  cout << &arr << endl;

  cout << add(arr,10) << endl;

  return 0;
}
