// Given an array nums of size n, return the majority element. The majority element is the element that appears more than ⌊n / 2⌋ times in the array. You may assume that the majority element always exists in the array.

// Example 1:
// Input: nums = [2,2,1,1,1,2,2]
// Output: 2
// Explanation:
// Here the number that occur the maximum time is 2

#include<iostream>
#include<stdio.h>
#include<vector>

using namespace std;

// int majorityElement(vector<int>& arr) {
    
//     int size = arr.size();
//     int count = 0;
//     int start = count , end = (size/2);

//     int candidate = arr[start];
//     while(start <= end){
//         if(start == end && arr[start] == candidate){
//             return(arr[start]);
//         }

//         int candidate = arr[start];

//         //check the start and end values
//         if(arr[start] == arr[end] == candidate){
//             start++;
//             end--;
//             continue;
//         }else{
//             //find for the matching value of arr[start]
//             bool found = false;
//             for(int i = start+(size/2)+1 ; i < size ; i++){
//                 //if found swap the values
//                 if(arr[i] == arr[start]){
//                     int temp = arr[end];
//                     arr[end] = arr[i];
//                     arr[i] = temp;
//                     found = true;
//                     break;
//                 }
//             }
//             if(found)
//                 continue;
//         }

//         count++;
//         start = count;
//         end = start+(size/2);
//         if (end >= size) break;
//     }

//     return arr[start];
// }

int majorityElement(vector<int>& arr) {
    int size = arr.size();

    int candidate , count = 0;
    for(int i = 0 ; i < size ; i++){
        candidate = arr[i];
        for(int j = 0 ; j < size ; j++){
            if(arr[j] == candidate){
                count++;
            }
            if(count > size/2)
                return candidate;
        }
        count = 0;
    }

    return -1;
}

int main(){
    vector<int> arr = {8,9,8,9,8};

    cout << majorityElement(arr);//return the majority element
}