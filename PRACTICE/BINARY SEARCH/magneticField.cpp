#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

bool isAllocationPossible(int maxDistance , vector<int>& position, int m){
	int count = 1 , allocation = position[0];

	for(int i = 1 ; i < position.size() ; i++){
		if(position[i]-allocation >= maxDistance){
			count++;
			allocation = position[i];
		}
	}

	return count >= m;
}

int maxDistance(vector<int>& position, int m) {
    int minimum = position[0] , maximum = 0 ;
	for(int i = 0 ; i < position.size() ; i++){
		minimum = min(min , position[i]);
		maximum = max(max , position[i]);
	}

	int start = 1 , end = maximum-minimum , ans = -1;
	while(start <= end){
		int mid = start + (end - start)/2;

		if(isAllocationPossible(mid , position , m)){
			start = mid + 1;
			ans = mid;
		}else{
			end = mid - 1;
		}
	}

    return ans;
}