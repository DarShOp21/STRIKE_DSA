// You are given a sorted array arr of unique integers that has been rotated at some unknown pivot position. Your task is to find the smallest element in the array efficiently.

// The array was originally sorted in ascending order, but after rotation, it is shifted. You need to find the minimum element using an algorithm with optimal time complexity, ideally O(log n).

// Example 1:
// Input: arr = [5, 6, 1, 2, 3, 4]
// Output: 1
// Explanation:
// The array is rotated; the smallest element is 1, found using binary search at index 2.


#include<iostream>
#include<vector>
#include<climits>

using namespace std;

int findMin(vector<int>& arr) {
	int start = 0 , end = arr.size()-1;
    int min = arr[0];

    if(arr[start] < arr[end])
        return arr[start];

    while(start <= end){
        int mid = start + (end-start)/2;

        if(arr[mid] >= arr[0]){     //move right
            start = mid + 1;
        }else{                      //move left , storing the value of mid
            end = mid - 1;
            min = arr[mid];
        }
    }
    return min;
}

// int findMin(vector<int>& arr) {
//     int start = 0 , end = arr.size()-1;
//     int ans = arr[0];
//     if(arr[start] < arr[end])
//         return arr[start];

//         while(start <= end){
//             int mid = start + (end - start)/2;

//             if(mid == 0){
//                 mid = 1;
//             }
            
//             if(arr[mid] >= arr[0])   //shift right
//                 start = mid + 1;
//             else{   //shift left with storing the mid values
//                 ans = arr[mid];
//                 end = mid - 1;
//             } 
//         }

//         return ans; 
// }


int main(){
    // vector<int> arr = {5, 6, 1, 2, 3, 4};
    // vector<int> arr = {1, 2,3,4,5};
    // vector<int> arr = {3};
    // vector<int> arr = {3, 1};
    vector<int> arr = {8,9,10,5,6,7};

    cout << "smallest element in the array is " << findMin(arr);


    return 0;
}