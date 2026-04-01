#include<iostream>

using namespace std;

void printEven(int num){
  if(!num)
    return ;

  if(num%2 == 0)
    cout << num << " ";

  printEven(num-1);
}

int main(){
  cout << "Enter the count to print even : ";
  int num;
  cin >> num;

  printEven(num);

  return 0;
}


