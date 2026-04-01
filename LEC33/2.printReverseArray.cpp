#include<iostream>
#include <ostream>

using namespace std;

void reverseArray(int arr[] , int start , int end){

  if(start == end)
    return;
  
  reverseArray(arr , start+1 , end);

  cout << arr[start] << " ";
}

void reverseArray2(int arr[] , int start , int end){

  if(end < start)
    return;

  cout << arr[end-1] << " ";

  reverseArray(arr, start, end-1);
}

// In this the reverse will go from end to 0 index
// void reverseArray3(int arr[] , int end){
//   if(end == 0)
//     return;
//
//   reverseArray3(arr,end-1);
//
//   cout << arr[end-1] << " ";
// }

int main(){
  int array[10] = {1,2,3,4,5,6,7,8,9,10};

  int start , end;
  cout << "Enter the value of start range : ";
  cin >> start;

  cout << "Enter the value of end range : ";
  cin >> end;

  reverseArray(array,start,end);
  cout << endl;

  reverseArray2(array,start,end);
  cout << endl;


  // reverseArray3(array , end);

  return 0;

}
