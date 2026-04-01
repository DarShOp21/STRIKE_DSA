#include<iostream>
#include<vector>

using namespace std;

void findSubSetSum(vector<int>& arr , int index , int sum , vector<int>& ans){
  if(index == arr.size()){
    ans.push_back(sum);
    return;
  }

  findSubSetSum(arr , index+1 , sum + arr[index],ans);
  findSubSetSum(arr , index+1 , sum , ans);
}

vector<int> subSetSums(vector<int>& arr){
  int sum = 0 , index = 0;
  vector<int> ans;
  findSubSetSum(arr , index , sum , ans);

  return ans;
}
