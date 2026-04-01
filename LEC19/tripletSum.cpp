#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

bool hasTripletSum1(vector<int> &arr , int target){

    sort(arr.begin() , arr.end());

    for(int i = 0 ; i < arr.size()-2 ; i++){
        int start = i+1 , end = arr.size()-1;
        while(start <= end){
            int mid = start + (end-start)/2;
            if(arr[i] + arr[start] + arr[end] == target)
                return true;
            else if(arr[i] + arr[start] + arr[end] < target)
                start = mid + 1;
            else
                end = mid - 1;
        }
    }

    return false;
}

bool hasTripletSum2(vector<int> &arr , int target){
    for(int i = 0 ; i < arr.size()-2 ; i++){
        for(int j = i+1 ; j < arr.size()-1 ; j++){
            int start = j+1 , end = arr.size()-1;
            while(start <= end){
                int mid = start + (end-start)/2;

                if(arr[i]+arr[j]+arr[mid] == target)
                    return true;
                else if(arr[i]+arr[j]+arr[mid] < target)
                    start = mid + 1;
                else 
                    end = mid - 1;
            }
        }
    }

    return false;
}

int main(){
    vector<int> arr = {1,4,45,6,10,8};
    int target = 12;
    cout << hasTripletSum1(arr , target);
    cout << hasTripletSum2(arr , target);

    return 0;
}