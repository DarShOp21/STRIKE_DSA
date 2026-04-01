#include <vector>
#include <stdio.h>
#include <iostream>

using namespace std;

vector<int> moveNegBack(vector<int>& arr){
    int start = 0, end = arr.size()-1;

    // {42, -42, 0, 42, -42}
    // -17, 23, -31, 47, -53, 61, -71, 83
    while(start < end){
        //increment when value at start is positive
        if(arr[start] >= 0)
            start++;

        //decrement when value at start is negative
        if(arr[end] < 0)
            end--;

        //swap
        else{
            int temp = arr[start];
            arr[start] = arr[end];
            arr[end] = temp;
            start++;
            end--;
        }
    }

    for(int i = 0 ; i < arr.size() ; i ++){
        cout << arr[i] << " ";
    }

    return arr;
}

vector<int> moveNegBackMaintainingOrder(vector<int>& arr){
    vector<int> arr2(arr.size());
    int index = 0;

    int i = 0;
    while(i < arr.size()){
        if(arr[i] >= 0){
            arr2[index] = arr[i];
            index++;
        }
        i++;
    };

    i = 0;

    while(i < arr.size()){
        if(arr[i] < 0){
            arr2[index] = arr[i];
            index++;
        }
        i++;
    };

    for(int i = 0 ; i < arr2.size() ; i ++){
        cout << arr2[i] << " ";
    }

    return arr2;
}

int main(){
    vector<int> v = {42, -42, 0, 42, -42};
    // moveNegBack(v);
    moveNegBackMaintainingOrder(v);

    return 0;
}

