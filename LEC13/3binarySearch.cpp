#include<iostream>
#include<vector>

using namespace std;

int binarySearch(vector<int>sortedArray , int target){
    int start = 0 , end = sortedArray.size()-1;

    while(start <= end){
        int mid = start+(end-start)/2;

        if(sortedArray[mid]==target)
            return mid;

        else if(sortedArray[mid] > target)
            end = mid-1;
        else
            start = mid+1;
    }

    return -1;
}

int main(){

    vector<int> sortedArray = {4,7,8,10,24,30};    
    int target = 24;

    if(binarySearch(sortedArray , target) == -1){
        cout << "Target not found";
        return 0;
    }

    cout << "Target found at index " << binarySearch(sortedArray,target);

    return 0;
}