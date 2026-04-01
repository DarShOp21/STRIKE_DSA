#include<iostream>
#include<vector>

using namespace std;

int binarySearch(vector<int>& arr , int target , int start , int end){
  if(start > end)
    return -1;

  int mid = start + (end-start)/2;

  if(arr[mid] == target)
    return mid;
  else if(arr[mid] > target)
    return binarySearch(arr,target,start,mid-1);
  else
    return binarySearch(arr,target,mid+1,end);
}

int search(vector<int>& arr, int target){
  return binarySearch(arr,target,0,arr.size()-1);
}

int main(){
  vector<int> arr = {-1, 0, 3, 5, 9, 12};
  for(int i = 0 ; i < arr.size() ; i++)
    cout << arr[i] << " ";
  cout << endl;

  int target;
  cout << "Enter the value of the target : ";
  cin >> target;

  cout << search(arr,target);

  return 0;
}
