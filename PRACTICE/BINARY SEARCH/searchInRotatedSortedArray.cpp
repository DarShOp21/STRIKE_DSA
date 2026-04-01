// 24. Search in Rotated Sorted Array

// You are given a sorted array arr[] of distinct integers that has been rotated at some unknown pivot position, and a target key. Your task is to find and return the index of the target key if it exists in the array; otherwise, return -1.

// The array was originally sorted in ascending order but has been rotated. You need to efficiently search for the target element in this rotated sorted array.

// Example 1:
// Input: arr = [2, 3, 4, 5, 6, 7, 8, 1], key = 1
// Output: 7
// Explanation:
// The key 1 is at index 7 in the array.

#include<iostream>
#include<vector>

using namespace std;

int search(vector<int>& arr, int key) {
    int start = 0 , end = arr.size()-1;
    while(start <= end){
        int mid = start + (end - start)/2;

        if(arr[mid] == key){
            // cout << mid;
            return mid;
        }

        else if(arr[0]<=arr[mid]){
            if(arr[start] <= key && key <= arr[mid])
                end = mid-1 ;
            else 
                start = mid+1;
        }
        else{
            if(arr[mid] <= key && key <= arr[end])
                start = mid+1;
            else    
                end = mid-1;
        }                                           
    }

    return -1;
}

int main(){
    vector<int> arr= {3,1};
    int key = 1;

    cout << "Index : "<<search(arr,key);

    return 0;
}