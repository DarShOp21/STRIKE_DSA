#include <iostream>
#include<vector>
using namespace std;
void findSubset(vector<int>& candidates , int index , int target , vector<int>tempSubset , vector<vector<int>> ans){

    if(index == candidates.size()){
        int sum = 0;
        for(int i = 0 ; i < tempSubset.size() ; i++)
            sum+=tempSubset[i]; 
        if(sum == target)
            ans.push_back(tempSubset);
        return;
    }

    //insert the value
    tempSubset.push_back(candidates[index]);
    findSubset(candidates , index+1 , target , tempSubset , ans);
    tempSubset.pop_back();

    //dont insert the value
    findSubset(candidates , index+1 , target , tempSubset , ans);
}

vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
    vector<vector<int>> ans ;
    vector<int> tempSubset;

    findSubset(candidates , 0 , target , tempSubset , ans);

    return ans;
}
