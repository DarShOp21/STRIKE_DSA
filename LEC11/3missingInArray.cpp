#include<iostream>
#include<vector>

using namespace std;

//Approach 1 
int missingNum1(vector<int>& arr) {
    int size = arr.size();

    //find factorial of size+1
    long fact = (long)(size + 1) * (size + 2) / 2;
    
    //find sum of array
    int sum = 0;
    for(int i = 0 ; i < size ; i++){
        sum += arr[i];
    }
    
    //get missing by - factorial - sum
    return fact-sum;
}

//Approach 2
int missingNum2(vector<int>& arr){
    int size = arr.size() , ans = 0;

    for(int i = 0 ; i < size ; i++)
        ans ^= arr[i];

    for(int i = 1 ; i <= size+1 ; i++)
        ans ^= i;

    return ans;
}


int main(){
    vector<int> arr = {1,2,3,5};

    cout << "Missing number is ->> " << missingNum2(arr) << endl;
    cout << "Missing number is ->> " << missingNum1(arr) << endl;

    return 0;
}