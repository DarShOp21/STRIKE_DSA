#include<vector>
#include<stdio.h>
#include<iostream>

using namespace std;

vector<int> insertionSort(vector<int>& arr){
    for(int i = 1 ; i < arr.size() ; i++){
        for(int j = i ; j > 0 ; j--){
            if(arr[j] < arr[j-1]){
                swap(arr[j],arr[j-1]);
            }else{
                break;
            }
        }
    }
    
    return arr;
}

int main(){
    vector<int> arr = {20,18,4,6,7,2};

    insertionSort(arr);

    for(int i = 0 ; i < arr.size() ; i++)
        cout << arr[i] << " ";

    return 0;
}