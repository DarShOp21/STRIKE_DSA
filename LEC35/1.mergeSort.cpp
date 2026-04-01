#include<iostream>
#include <vector>

using namespace std;

  void merge(vector<int>&arr , int start , int end , int mid){
    vector<int>temp(arr.size());

    int left = start , right = mid+1 , index = 0;

    while(left <= mid && right <= end){
        if(arr[left] <= arr[right])
            temp[index++] = arr[left++];
        else
            temp[index++] = arr[right++];
    }

    while(left <= mid){
        temp[index++] = arr[left++];
    }

    while(right <= end)
        temp[index++] = arr[right++];

    index = 0;
    for(int i = start ; i <= end ; i++)
        arr[i] = temp[index++];
  }

  void sort(vector<int>&arr, int start , int end){
    if(start == end)
        return;
    
    int mid = start + (end-start)/2;

    sort(arr,start,mid);
    sort(arr,mid+1,end);
    merge(arr,start,end,mid);
  }

  void mergeSort(vector<int>& arr) {
    sort(arr,0,arr.size()-1);
  }

