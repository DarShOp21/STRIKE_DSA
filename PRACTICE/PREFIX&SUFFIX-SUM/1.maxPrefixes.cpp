#include<iostream>
#include<vector>
#include<climits>

using namespace std;
vector<int> maxPrefixes(vector<int>& arr, vector<int>& leftIndex, vector<int>& rightIndex) {
    vector<int> ans ;
    
    for(int i = 0 ; i < leftIndex.size() ; i++){
        int prefixSum = 0;
        int maxPrefixSum = INT_MIN;    
        for(int j = leftIndex[i] ; j <= rightIndex[i] ; j++){
            prefixSum += arr[j];
            if(prefixSum > maxPrefixSum)
                maxPrefixSum = prefixSum;
        }
        ans.push_back(maxPrefixSum);
    }
	
    return ans;
}

int main(){
    vector<int> ans ;
    

}