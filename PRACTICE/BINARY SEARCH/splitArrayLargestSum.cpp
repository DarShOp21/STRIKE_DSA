#include<iostream>
#include<vector>

using namespace std;

bool isSplitPossible(int maxValue , vector<int> &arr, int k){
    int count = 1 , valueAllocated = arr[0];
    for(int i = 1 ; i < arr.size() ; i++){
        valueAllocated += arr[i];
        if(valueAllocated > maxValue){
            count++;
            valueAllocated = arr[i];
        }
    }

    return count <= k;
}

int splitArray(vector<int> &arr, int k) {
    int maxValue = 0 , total = 0;
    for(int i = 0 ; i < arr.size() ; i++){
        maxValue = max(maxValue , arr[i]);
        total += arr[i];
    }

    int start = maxValue , end = total , ans = -1;
    while(start <= end){
        int mid = start + (end - start)/2;

        if(isSplitPossible(mid , arr , k)){
            ans = mid;
            end = mid - 1;
        }else
            start = mid + 1;
    }

    return ans;
}

int main(){
    // vector<int> arr = {1, 2, 3, 4};
    // int k = 3;

    vector<int> arr = {100, 200, 300, 400, 500};
    int k = 3;
    
    cout << splitArray(arr,k);

    return 0;
}