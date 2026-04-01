#include<iostream>
#include<vector>
using namespace std;


int searchInsert(vector<int>& arr, int target) {
    int start = 0 , end = arr.size()-1;
    
    while(start <= end){
        int mid = start + (end-start)/2;


        if(arr[mid] == target)
            return mid;
        else if(arr[mid] > target)
            end = mid - 1;
        else 
            start = mid + 1;
    }

    return start;
}

int main(){
    vector<int> arr = {4,7,8,10,24,30};
    int target ;

    cout << "Enter the target value";
    cin >> target;

    cout << "The target is or should be present at index " << searchInsert(arr,target);
    
    return 0;
}