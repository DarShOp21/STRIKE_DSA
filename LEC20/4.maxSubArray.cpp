#include<iostream>
#include<vector>
#include<climits>
#include<algorithm>

using namespace std;

int maxSubArraySum(vector<int> &arr){
    int size = arr.size() , maxSum = INT_MIN , subSum = 0;

    for(int i = 0 ; i < size ; i++){
        if(subSum < 0)
            subSum = arr[i];
        else
            subSum += arr[i];

        maxSum = max(maxSum , subSum);
    } 

    return maxSum;
}

int main(){
    vector<int> arr = {2, 3, -8, 7, -1, 2, 3};

    cout << maxSubArraySum(arr);

    return 0;
}