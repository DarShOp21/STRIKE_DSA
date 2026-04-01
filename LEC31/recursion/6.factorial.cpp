#include<iostream>

using namespace std;

int factorial(int num){
  if(num == 0 || num == 1)
    return 1;

  int fact = num * factorial(num-1);

  return fact;
}

int main(){
  cout << "Enter the value of num : ";
  int num;
  cin >> num;

  cout << factorial(num);

  return 0;
}
