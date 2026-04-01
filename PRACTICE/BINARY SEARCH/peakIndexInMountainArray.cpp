#include<vector>
#include<iostream>

using namespace std;

int peakIndexInMountainArray(vector<int> arr){
    int start = 0 , end = arr.size()-1;

    while(start <= end){
        int mid = start + (end-start)/2;

        if(mid == 0){
            mid = 1;
        }

        if(arr[mid-1]<arr[mid] && arr[mid]>arr[mid+1])
            return mid;

        else if(arr[mid]<arr[mid+1])
            start = mid + 1;

        else 
            end = mid -1 ;
    }

    return -1;
}

// int peakIndexInMountainArray(vector<int>& arr) {
//     int l = 0;
//     int r = arr.size() - 1;
//     while (l < r) {
//         int m = (l + r) / 2;
//         if (arr[m] >= arr[m + 1]) {
//             r = m;
//         } else {
//             l = m + 1;
//         }
//     }
//     return l;
// }

int main(){
    vector<int> arr = {23,20,19,15,11,9,6,4,3};

    cout << "The index of the array is " << peakIndexInMountainArray(arr);

    return 0;
}