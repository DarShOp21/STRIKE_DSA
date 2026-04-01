#include<iostream>
#include<vector>

using namespace std;

//approach1
vector<int> twoSum(vector<int>& nums, int target) {

    int start = 0 , end = nums.size()-1;
    while(start < end){
        if(nums[start]+nums[end] == target)
            return {start+1 , end+1};
        else if(nums[start]+nums[end] < target)
            start++;
        else
            end--;
    }

    return {-1,-1};
}

//approach2
vector<int> twoSum(vector<int>& nums, int target){
    
}

int main(){
    vector<int> nums = {9, 19, 26, 32, 37, 39};
    int target = 48;

    vector<int> ans = twoSum(nums , target);

    for(int x : ans)
        cout << x << " ";

    return 0;
}
