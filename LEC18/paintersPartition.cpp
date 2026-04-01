#include<iostream>
#include<vector>

using namespace std;

bool isDistributionPossible(int maxTime , vector<int> &arr , int k){
    int count = 1 , distributed = arr[0];
    for(int i = 1 ; i < arr.size() ; i++){
        distributed += arr[i];
        if(distributed > maxTime){
            count++;
            distributed = arr[i];
        }
    }

    return count <= k;
}

int minTime(vector<int> &arr, int k) {
    int maxTime = 0 , totalTime = 0;

    for(int i = 0 ; i < arr.size() ; i++){
        totalTime += arr[i];
        maxTime = max(maxTime , arr[i]);
    }

    if(k > arr.size())
        return maxTime;

    int start = maxTime , end = totalTime , ans = maxTime;
    while(start <= end){
        int mid = start + (end - start)/2;

        if(isDistributionPossible(mid , arr , k)){
            ans = mid;
            end = mid - 1;
        }else
            start = mid + 1;
    }

    return ans;
}