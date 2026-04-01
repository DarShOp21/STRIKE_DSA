#include<iostream>

using namespace std;

void printArray(int arr[] , int index , int n){
  if(index > n){
    return;
  }
  cout << arr[index] << " ";

  printArray(arr , index+1 , n);
}

int main(){
  int arr[10] = {1,2,3,4,5,6,7,8,9,10};
  int index , n;

  cout << "Enter the index to start : ";
  cin >> index;

  cout << "Enter the index to end : ";
  cin >> n;

  printArray(arr,index,n);

  return 0;
}
