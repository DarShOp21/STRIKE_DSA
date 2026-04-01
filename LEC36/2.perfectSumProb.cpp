#include<iostream>
#include<vector>

using namespace std;

void findSubsetSum(vector<int>&arr , int index , int sum , int target , int& count ){

  if(index == arr.size()){
    if(sum == target)
      count++;
    return;
  }

  findSubsetSum(arr,index+1,sum+arr[index],target,count);
  findSubsetSum(arr,index+1,sum,target,count);
}

int countSubsetsWithSum(vector<int>& arr , int target){
  int count = 0;
  // int *p = &count; 

  int index = 0 , sum = 0;
  findSubsetSum(arr, index , sum , target , count);

  return count;
}

int main(){
  vector<int> arr = {2,5,1,4,3};

  for(int i = 0 ; i < arr.size() ; i++)
    cout << arr[i] << " ";

  int target ;
  cout << endl << "Enter the target value : ";
  cin >> target;

  cout << countSubsetsWithSum(arr,target) << " subsets have the sum of " << target;

  return 0;
}
