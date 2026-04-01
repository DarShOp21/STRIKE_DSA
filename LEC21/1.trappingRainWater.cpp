#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

// int trapWater(vector<int>& arr) {
//     vector<int>prefixMax(arr.size());
// 	vector<int>suffixMax(arr.size());

// 	prefixMax[0] = arr[0];
// 	for(int i = 1 ; i < arr.size() ; i++)
// 		prefixMax[i] = max(prefixMax[i-1] , arr[i]);

// 	suffixMax[arr.size()-1] = arr[arr.size()-1];
// 	for(int i = arr.size()-2 ; i >= 0 ; i--)
// 		suffixMax[i] = max(suffixMax[i+1] , arr[i]);

// 	int waterStored = 0 ;
// 	for(int i = 1 ; i < arr.size()-1 ; i++){
// 		int minLeftRight = min(prefixMax[i-1] , suffixMax[i+1]);
// 		if(minLeftRight > arr[i])
// 			waterStored += minLeftRight - arr[i];
// 	}

// 	return waterStored;
// }

// int trapWater(vector<int>& arr) {
//     // vector<int>prefixMax(arr.size());
// 	vector<int>suffixMax(arr.size());

// 	int prefixMax = arr[0];
// 	// for(int i = 1 ; i < arr.size() ; i++)
// 	// 	prefixMax[i] = max(prefixMax[i-1] , arr[i]);

// 	suffixMax[arr.size()-1] = arr[arr.size()-1];
// 	for(int i = arr.size()-2 ; i >= 0 ; i--)
// 		suffixMax[i] = max(suffixMax[i+1] , arr[i]);

// 	int waterStored = 0 ;
// 	for(int i = 1 ; i < arr.size()-1 ; i++){
// 		int minLeftRight = min(prefixMax , suffixMax[i+1]);
// 		if(minLeftRight > arr[i])
// 			waterStored += minLeftRight - arr[i];
		
// 		prefixMax = max(prefixMax , arr[i]);
// 	}

// 	return waterStored;
// }

int trapWater(vector<int>& arr){
    int left = 0 , right = arr.size()-1;
    int leftMax = 0 , rightMax = 0;

    int waterStored = 0;
    while(left < right){
        if(arr[left] < arr[right]){

            if(leftMax > arr[left])
                waterStored += leftMax - arr[left];
            else
                leftMax = arr[left];

            left++;
        }else{
            if(rightMax > arr[right])
                waterStored += rightMax - arr[right];
            else
                rightMax = arr[right];

            right--;
        }
    }

    return waterStored;
}

int main(){
    vector<int> arr = {2,4,2,0,4,1,0,5,3,0,4,2,3};
    cout << "Water Trapped : " << trapWater(arr);


    return 0;
}

