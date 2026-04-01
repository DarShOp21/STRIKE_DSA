#include<iostream>

using namespace std;

void printNum(int num , int limit){
  if(num == limit+1)
    return;

  cout << num << " ";
  printNum(num+1 , limit);
}

int main(){
  int start , end ;

  cout << "Enter the start value : ";
  cin >> start;

  cout << "Enter the end value : ";
  cin >> end;

  printNum(start,end);

  return 0;
}
