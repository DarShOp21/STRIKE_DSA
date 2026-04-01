#include<iostream> 
using namespace std;

int sum(int start , int end){
  if(start == end)
    return start;

  int ans = start + sum(start+1 , end);

  return ans;
}

int main(){
  int start , end;
  cout << "Enter the value of start number : ";
  cin >> start;
  cout << "Enter the value of end number : ";
  cin >> end;

  cout << sum(start,end);

  return 0;
}
