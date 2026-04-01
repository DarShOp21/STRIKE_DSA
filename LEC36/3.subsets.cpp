#include<iostream>
#include<vector>

using namespace  std;

void findSubset(vector<int>& arr , int index , vector<int>&temp , vector<vector<int>>&ans){
  
  if(index == arr.size()){
    ans.push_back(temp);
    return;
  }

  //dont insert the value
  findSubset(arr, index+1 , temp , ans);

  //insert the value
  temp.push_back(arr[index]);
  findSubset(arr,index+1,temp , ans);
  temp.pop_back();  //this is done so that the same temp array can be used
}


vector<vector<int>> subsets(vector<int>&arr){
  vector<vector<int>> ans;

  vector<int> temp;

  findSubset(arr,0,temp,ans);

  return ans;
}

int main(){
  vector<int> arr = {1,2,3,4};
  vector<vector<int>> subsetss = subsets(arr);

  return 0;
}
