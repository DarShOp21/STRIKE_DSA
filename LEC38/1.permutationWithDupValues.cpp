#include <iostream>
#include <vector>

using namespace std;

void permutation(vector<int>nums , int index , vector<vector<int>>& ans){

  if(index == nums.size()-1){
    ans.push_back(nums);
    return;
  }

  vector<bool>count(21,0);

  for(int i = index ; i < nums.size() ; i++){
    int countIndex = 21+nums[i]-11;
    if(!count[countIndex]){
      count[countIndex] = 1;
      swap(nums[i] , nums[index]);
      permutation(nums, index+1, ans);  
      swap(nums[i] , nums[index]);
    }
  }
}

vector<vector<int>> permuteUnique(vector<int>& nums) {
  vector<vector<int>> ans;  

  permutation(nums , 0 , ans); 
}
