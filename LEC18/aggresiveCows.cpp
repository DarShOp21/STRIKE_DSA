// You are given an array stalls[] containing unique integers that represent positions of available spots. You are also given an integer k, representing the number of people to be placed while maintaining safe social distancing.z
// Your task is to allocate spots to all k people such that the minimum distance between any two of them is as large as possible, ensuring maximum safety.
// Return the largest possible minimum distance between any two people after optimal allocation.\

#include<iostream>
#include<vector>

using namespace std;

bool isAllocationPossible(int minDist , vector<int> &stalls , int k){
    int count = 1 , cowPosition = stalls[0];
    for(int i = 1 ; i < stalls.size() ; i++){
        if(stalls[i]-cowPosition >= minDist){
            count++;
            cowPosition = stalls[i];
        }
    }

    return count >= k;
}

int maxSafeDistance(vector<int> &stalls, int k) {
    sort(stalls.begin() , stalls.end());

    int start = stalls[0] , end = stalls[stalls.size()-1] , ans = 1;

    while(start <= end){
        int mid = start + (end - start)/2;

        if(isAllocationPossible(mid,stalls,k)){
            ans = mid;
            start = mid + 1;
        }else
            end = mid - 1;
    }

	return ans;
}