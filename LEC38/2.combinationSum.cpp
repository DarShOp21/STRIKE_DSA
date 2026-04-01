#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

void combination(vector<int>& candidates, int index ,int target , vector<int>& path , int sum , vector<vector<int>>& ans){

  if(sum == target){
    ans.push_back(path);
    return;
  }

  if(sum > target || index == candidates.size())
    return;

  vector<bool>used(51,0);

  for(int i = index ; i < candidates.size() ; i++){
    if(!used[candidates[i]]){
      used[candidates[i]] = true;
      path.push_back(candidates[i]);
      combination(candidates, i+1, target, path, sum+candidates[i], ans);
      path.pop_back();
    }
  }
}

vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
    vector<vector<int>> ans ;
    vector<int>path;

    sort(candidates.begin() , candidates.end());
    combination(candidates , 0 , target , path , 0 , ans);

    return ans;
}
