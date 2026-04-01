#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

bool isProduct(vector<int>& arr, long long target) {

    sort(arr.begin() , arr.end());
    for(int i = 0 ; i < arr.size() ; i++)
        cout << arr[i] << " ";

    cout << endl;
    int start = 0 , end = arr.size()-1;

	while(start <= end){
		long long product = arr[start] * arr[end];
        cout << arr[start] << " * " << arr[end] << " = " << product << endl;
		if(product == target)
			return true;
		else if(product < target)
			start++;
		else
			end--;
	}

	return false;
}

int main(){
    vector<int> arr = {-3, -5, 7, 11};
    int target =15;

    cout << isProduct(arr,target);

    return 0;
}