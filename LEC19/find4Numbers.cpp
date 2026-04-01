#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

bool find4Numbers(vector<int>& arr , int target){
    sort(arr.begin() , arr.end());

    for(int i = 0 ; i < arr.size()-3 ; i++){
        for(int j = i+1 ; j < arr.size()-2 ; j++){
            int start = j+1 , end = arr.size()-1 , newTarget = target-arr[i]-arr[j];

            while(start < end ){
                int mid = start + (end - start)/2;

                if(arr[start] + arr[end] == newTarget)
                    return true;
                else if(arr[start] + arr[end] < newTarget)
                    start = mid + 1;
                else 
                    end = mid - 1;
            }
        }
    }


    return false;
}

int main(){
    vector<int> arr = {1,5,6,0};
    int target = 7;

    cout << find4Numbers(arr , target);

    return 0;
}
