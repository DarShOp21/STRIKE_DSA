// 3. Multiply Others

// You are given an integer array nums. Your task is to return an array answer where each element answer[i] represents the product of all elements in nums except nums[i].

// You must solve this problem without using the division operation, and your algorithm must run in O(n) time complexity.

// Example 1:
// Input: nums = [2,3,4,5]
// Output: [60,40,30,24]
// Explanation:
// answer[0] = 3 × 4 × 5 = 60
// answer[1] = 2 × 4 × 5 = 40
// answer[2] = 2 × 3 × 5 = 30
// answer[3] = 2 × 3 × 4 = 24
#include<iostream>
#include<stdio.h>
#include<vector>

using namespace std;

vector<int> productExceptSelf(vector<int>& arr) {

    int product1 = 1;
    int product2 = 1;

    for(int i = 0 ; i < arr.size() ; i++){
        product1 *= arr[i];
        if(arr[i] == 0)
        continue;
        product2 *= arr[i];
    }

    for(int i = 0 ; i < arr.size() ; i++){
        if(arr[i] == 0){
            arr[i] = product2;
            continue;
        }
        arr[i] = product1/arr[i];
    }
    return arr;
}

void psp(vector<int>& arr){
    int size = arr.size();

    int sp=1 , pp = size-2;
    vector<int> s(size,1) , p(size,1);
    for(int i = 1 ; i < size ; i++){
        s[i] = s[i-1]*arr[i-1];
        p[size-i-1] = p[size-i]*arr[size-i];
    }

}

vector<int> productExceptSelf2(vector<int>& arr){
    int size = arr.size();

    int sp=1 , pp = size-2;
    vector<int> s(size,1) , p(size,1);
    for(int i = 1 ; i < size ; i++){
        s[i] = s[i-1]*arr[i-1];
        p[size-i-1] = p[size-i]*arr[size-i];
    }

    for(int i = 0 ; i < size ; i++)
        arr[i] = s[i]*p[i];

    return arr;

}


int main(){
    vector<int> arr = {1,2,3,4};

    productExceptSelf2(arr);

    for(int i = 0 ; i < arr.size() ; i++)
        cout << arr[i] << " ";

    return 0;
}

