#include<vector>
#include<iostream>

using namespace std;

int main(){
    vector<int> arr = {7,3,9,5,2};

    for(int i = 0 ; i < arr.size(); i++)
        cout << arr[i] << " ";
    cout << endl;

    for(int i = 0 ; i < arr.size()-1 ; i++){
        int smallest_index = i;
        for(int j = i+1 ; j < arr.size() ; j++){
            if( arr[j] < arr[smallest_index])
                smallest_index = j;
        }
        swap(arr[i],arr[smallest_index]);
    }

    for(int i = 0 ; i < arr.size(); i++)
        cout << arr[i] << " ";
    return 0;
}