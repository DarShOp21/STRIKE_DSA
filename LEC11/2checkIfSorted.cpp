#include<iostream>
#include<vector>

using namespace std;

bool isSorted(vector<int>& arr){
    for(int i = 1 ; i < arr.size(); i++){
        if(arr[i-1] > arr[i])
            return false;
    }

    return true;
}

int main(){
    vector<int> arr = {10,20,20,30,20};

    cout << isSorted(arr);
}