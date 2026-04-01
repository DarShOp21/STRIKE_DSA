// You are given an array arr[] of length n. Your task is to reverse the array in place, such that the first element becomes the last, the second element becomes the second last, and so on.

// You must modify the original array directly without using extra space for another array.

// Example 1:
// Input: arr = [926,995,589,512,67]
// Output: [67,512,589,995,926]
// Explanation:
// The array is reversed such that first element 926 becomes last, and last element 67 becomes first.

#include<iostream>
#include<vector>
#include<stdio.h>

using namespace std;

//Approach 1 -> using for loop
void reverseArrayA1(vector<int>& arr){

    //loop will executed for size/2 times
    for(int i = 0 ; i < arr.size()/2 ; i++){
        //swap the start and last value
        int temp = arr[i];
        arr[i] = arr[arr.size()-1-i];
        arr[arr.size()-1-i] = temp;
    }

}

//Approch 2 -> using 2 pointers
void reverseArrayA2(vector<int>& arr){
    int start = 0 , end = arr.size()-1;

    while(start < end){
        swap(arr[start++],arr[end--]);
    }
}

int main(){
    vector<int> arr = {926,995,589,512,67};

    // reverseArrayA1(arr);
    reverseArrayA2(arr);

    for(int i = 0 ; i < arr.size() ; i++){
        cout << arr[i] <<  " "; 
    }

    return 0;
}
