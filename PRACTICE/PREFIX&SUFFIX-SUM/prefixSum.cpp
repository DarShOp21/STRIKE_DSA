#include<iostream>
#include<vector>

using namespace std;

int main(){
    vector<int> arr = { -1, 2, 3 , 7, 2, 3, -8};

    for(int i = 0 ; i < arr.size() ; i++)
        cout << arr[i] << "  ";

    cout << endl;

    int prefixSum = 0;
    for(int i = 0 ; i < arr.size() ; i++){
        prefixSum += arr[i];
        cout << prefixSum << "  " ;
    }
    cout << endl;

    int suffixSum = 0;
    vector<int> suffixArray(arr.size());
    for(int i = arr.size()-1 ; i >= 0 ; i--){
        suffixSum += arr[i];
        suffixArray[i] = suffixSum;
    }
    for(int i = 0 ; i < arr.size() ; i++){
        cout << suffixArray[i] << "  ";
    }

    return 0;
}