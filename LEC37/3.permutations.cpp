#include<iostream>
#include <vector>

using namespace std;

void permutations(vector<int>& arr , int index , vector<vector<int>>& ans){
  
  if(index == arr.size()-1){
    ans.push_back(arr);
    return;
  }


  for(int i = index ; i < arr.size() ; i++){
    swap(arr[i],arr[index]);
    permutations(arr,index+1,ans);
    swap(arr[i],arr[index]);
  }
}

vector<vector<int>> permute(vector<int>& nums) {
  vector<vector<int>> ans ;

  permutations(nums,0,ans);

  return ans;
}
