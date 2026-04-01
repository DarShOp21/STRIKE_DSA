#include<iostream>
#include<vector>
#include<climits>
#include<algorithm>

using namespace std;

vector<int> equalSum(vector<int> arr){
    int sum = 0;
    for(int i = 0 ; i < arr.size() ; i++)
        sum += arr[i];

    int leftSum = 0 , rightSum = 0;
    vector<int>ans(3); // 0 : Real Value , 1 : Index of Element , 2 : LeftSubarray(1) , rightSubArray(2)
    ans[0] = INT_MAX;
    for(int i = 0 ; i < arr.size()-1 ; i++){
        leftSum += arr[i];
        rightSum = sum - leftSum;

        if(abs(leftSum-rightSum > ans[0]))
            continue;

        if(rightSum > leftSum){
            ans[0] = rightSum - leftSum;
            ans[1] = i+2;
            ans[2] = 1;
        }else{
           ans[0] = leftSum - rightSum;
            ans[1] = i+2;
            ans[2] = 2;
        }
    }

    return ans;
}

int main(){
    vector<int> arr = {3, 2, 1, 5, 7, 8};

    vector<int> ans = equalSum(arr);

    for(int i = 0 ; i < ans.size() ; i++){
        cout << ans[i] << endl;
    }

    return 0;
}