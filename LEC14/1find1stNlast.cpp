// Find First and Last Position of Element in Sorted Array

// Given an array of integers nums sorted in non-decreasing order, find the starting and ending position of a given target value.

// Return an array of two integers [start index, end index] representing the first and last occurrence of the target in the array. If the target is not found, return [-1, -1].


#include<iostream>
#include<vector>

using namespace std;

vector<int> firstAndLast(vector<int>& arr , int target){
    
    int start = 0 , end = arr.size()-1;
    
    //find 1st occurance
    int firstOccurence = -1;
    while(start <= end){
        int mid = start + (end-start)/2;

        if(arr[mid] == target){
            firstOccurence = mid;
            end = mid-1;
        }else if(arr[mid] < target){
            start = mid+1;
        }else{
            end = mid-1;
        }
    }

    if(firstOccurence == -1){
        vector<int> ans = {-1,-1};
        return(ans);    
    }
    //last occurance
    int lastOccurance = firstOccurence;
    start = firstOccurence , end = arr.size()-1;
    while(start <= end){
        int mid = start + (end-start)/2;

        if(arr[mid] == target){
            lastOccurance = mid;
            start = mid + 1;
        }else if(arr[mid] < target){
            start = mid+1;
        }else{
            end = mid-1;
        }
    }

    vector<int> ans = {firstOccurence , lastOccurance};

    return(ans);
}   

int main(){
    vector<int> arr = {1,2,5,6,7,7,8,10,12};

    cout << "Enter the target value : ";
    int target ;
    cin >> target;

    vector<int> ans = firstAndLast(arr,target);

    for(int i = 0 ; i < ans.size() ; i++)
        cout << ans[i] << "  ";

    return 0;
}