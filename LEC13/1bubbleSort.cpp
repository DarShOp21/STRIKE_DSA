#include<vector>
#include<stdio.h>
#include<iostream>

using namespace std;

void bubbleSort(vector<int>& arr){
    bool swaped = false;

    for(int i = 0 ; i < arr.size()-1 ; i++){
        for(int j = 0 ; j < arr.size()-i-1 ; j++){
            if(arr[j] > arr[j+1]){
                swap(arr[j],arr[j+1]);
                swaped = true;
            }
        }
        if(!swaped){
            cout << "Already sorted";
            return;
        }
    }
}

int main(){
    // vector<int> arr = {10,5,18,4,2};
    vector<int> arr = {1,2,3,4,5};

    for(int i = 0 ; i < arr.size() ; i++)
        cout << arr[i] << " ";


    bubbleSort(arr);

    for(int i = 0 ; i < arr.size() ; i++)
        cout << arr[i] << " ";

    return 0;

}