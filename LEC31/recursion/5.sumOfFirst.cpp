#include<iostream>

using namespace std;

int sum(int num){
  if(!num)
    return 0;

  int ans = num + sum(num-1);

  return ans;
}

int main(){
  int num ;
  cout << "Enter the value of num : ";
  cin >> num;

  cout << sum(num);

  return 0;
}
