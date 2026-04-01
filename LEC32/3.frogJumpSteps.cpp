#include<iostream>

using namespace std;

int countHops(int n) {
    // Your code here   

    if(n <= 2)
        return n;
    
    if(n == 3)
        return 4;

    return countHops(n-1)+countHops(n-2)+countHops(n-3);
}

int main(){
  int steps ;
  cout << "Enter the steps value : ";
  cin >> steps;

  cout << "Their are " << countHops(steps) << " ways to react " << steps << " steps";

  return 0;
}
