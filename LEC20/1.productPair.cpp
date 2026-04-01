#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

bool isProduct(vector<int>& arr, long long target) {

	sort(arr.begin() , arr.end());
    int mid = -1 ;
	for(int i = 0 ; i < arr.size() ; i++){
		if(arr[i] < 0)
			mid = i;
		else
			break;
	}

	if(target >= 0){
		//both in negative
		int start = 0 , end = mid;
		while(start <= end){
			if(arr[start]*arr[end] == target)
				return true;
			else if(arr[start]*arr[end] < target)
				end--;
			else 
				start++;
		}
		//both in positive
		start = mid + 1 , end = arr.size()-1;
		while(start <= end){
			if(arr[start]*arr[end] == target)
				return true;
			else if(arr[start]*arr[end] < target)
				start++;
			else 
				end--;
		}
	} else {
		int start = 0 ,end = mid+1;
		while(start <= end && end < arr.size()){
			if(arr[start]*arr[end] == target)
				return true;
			else if(arr[start]*arr[end] < target)
				start++;
			else	
				end++;
		}
	}
	return false;
}

int main(){
    vector<int> arr = {-3,-4,-2 , 10 , 23 , 21 , 0 , 9};
    long long target = -41;

    cout << isProduct(arr , target);

    return 0;
}