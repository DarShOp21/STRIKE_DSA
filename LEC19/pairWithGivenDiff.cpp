#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int pairWithGivenDifference(vector<int>& arr, int diff) {
    sort(arr.begin() , arr.end());

    int start = 0 , end = 0;
    while(start<=end && end < arr.size()){
        if(arr[end]-arr[start] == diff)
            return 1;
        else if(arr[end] - arr[start] < diff)
            end++;
        else
            start++;
    }

    return 0;
}

int main(){
    // vector<int> arr = {5, 10, 3, 2, 50, 80};
    // int diff = 78;

    vector<int> arr = {-10, 20};
    int diff = 30;

    cout << pairWithGivenDifference(arr,diff);

    return 0;
}