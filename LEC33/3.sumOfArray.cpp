#include<iostream>

using namespace std;

int sum(int arr[] , int start , int end){
  if(start == end-1)
    return arr[start];

  return arr[start]+sum(arr,start+1,end);

}

int main(){
  int arr[] = {1,2,3,4,5};

  cout << "Enter the numbers to add / end value : ";
  int end ;
  cin >> end;

  cout << sum(arr,0,end);

  return 0;
}
