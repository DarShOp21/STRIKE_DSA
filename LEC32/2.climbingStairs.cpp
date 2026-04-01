#include<iostream>

using namespace std;

int climbStairs(int n) {
    if(n <= 2)
        return n;

    return climbStairs(n-1)+climbStairs(n-2);
}

int main(){
  int stairs;
  cout << "Enter stairs count : ";
  cin >> stairs;

  cout << "No of ways to climb stairs is/are : " << climbStairs(stairs);

  return 0;
}
