#include<iostream>
#include <vector>

using namespace std;

void findWays(vector<int> arr , int sum , int target , long long& count){
    
  if(sum == target){
    count++;
    return;
  }

  if(sum > target)
    return;

  for(int i = 0 ; i < arr.size() ; i++)
    findWays(arr,sum+arr[i],target,count);
}

long long countWays(vector<int>&arr, int target) {
    long long count = 0;

    findWays(arr,0,target,count);

    return count;
}
