// Given an array arr[] and a positive integer k, find the first negative integer for each and every window (contiguous subarray) of size k.
//
// Note: If a window does not contain a negative integer, then return 0 for that window.
//
// Your Task:
//
// You don't need to read input or print anything. Your task is to complete the function firstNegativeWindow() which takes an array arr[] and an integer k as input and returns an array containing the first negative integer for each window of size k.
//
// Expected Time Complexity: O(n)
//
// Expected Auxiliary Space: O(k)
//
// Example 1:
// Input: arr = [12, -1, -7, 8, -15, 30, 16, 28], k = 3
// Output: [-1, -1, -7, -15, -15, 0]
// Example 2:
// Input: arr = [12, 1, 3, 5], k = 3
// Output: [0, 0]

#include <iostream>
#include <vector>
#include <queue>

using namespace std;

vector<int> firstNegativeWindow(vector<int>& arr, int k) {
    queue<int>q;
    vector<int>ans;

    for(int i = 0 ; i < k-1 ; i++)
        if(arr[i]<0)
            q.push(i);

    for(int i = k-1 ; i < arr.size() ; i++){
        if(!q.empty() && q.front() <= i-k){
            q.pop();
        }

        if(arr[i] < 0)
            q.push(i);

        if(!q.empty())
            ans.push_back(arr[q.front()]);
        else
            ans.push_back(0);
    }

    return ans;
}
