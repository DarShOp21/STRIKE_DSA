#include<iostream>
#include<vector>
#include<climits>
#include<algorithm>

using namespace std;

int maxDiff(vector<int> &arr) {
	int size = arr.size();
	vector<int>suffixMax(size);

	suffixMax[size-1] = arr[size-1];

	for(int i = size-2 ; i >= 0 ; i--)
		suffixMax[i] = max(arr[i] , suffixMax[i+1]);

	int ans = -1;

	for(int i = 0 ; i < size-1 ; i++){
		if(suffixMax[i+1] > arr[i]){
			ans = max(ans , suffixMax[i+1]-arr[i]);
		}
	}

	return ans; 
}