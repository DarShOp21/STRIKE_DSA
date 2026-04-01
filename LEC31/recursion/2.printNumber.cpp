#include <iostream>

using namespace std;

void printNumber(int num){
  if(!num)
    return;

  cout << num << endl;
  printNumber(num-1);
}

int main(){
  cout << "Enter numbers to print : ";
  int num;
  cin >> num;

  printNumber(num);

  return 0;
}
