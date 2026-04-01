#include<vector>
#include<iostream>

using namespace std;

//approach 1 - n
// int kthMissingNumber(vector<int>& arr , int k){
//     int missing = k;

//     for(int i = 0 ; i < arr.size() ; i++){
//         if(arr[i] <= missing){
//             missing++;
//         }else{
//             return missing;
//         }
//     }

//     return missing;
// }

//approach 2 - n
// int kthMissingNumber(vector<int>& arr , int k){
//     int index = 0;
//     for(int i = 0 ; i < arr.size();i++){
//         int missingNumbs = arr[i]-(i+1);        //no of missing num till index i
//         if(missingNumbs < k){
//             index = i+1;                        //no of numbs present till i
//         }else{
//             break;
//         }
//     }

//     return k+index;
// }

//approch 3 - logn
int kthMissingNumber(vector<int>& arr , int k){
    int start = 0 , end = arr.size()-1;
    int index=0;
    while(start <= end){
        int mid = start + (end-start)/2;
        int missingNumbs = arr[mid]-(mid+1);

        if(missingNumbs < k){
            index = mid+1;
            start = mid + 1;
        }else{
            end = mid - 1;
        }
    }

    return k+index;
}

int main(){
    vector<int> arr = {2,4,9,10,12,15,20};

    for(int i = 0 ; i < arr.size() ; i++){
        cout << arr[i] << "  ";
    }


    int k;
    cout << endl<<"Enter the k value : "<<endl;
    cin >> k;

    cout << endl << k <<"th missing number is " << kthMissingNumber(arr,k);

    return 0;
}