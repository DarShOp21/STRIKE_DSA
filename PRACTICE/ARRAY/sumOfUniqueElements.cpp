#include<vector>
#include<iostream>

using namespace std;

int sumOfUnique(vector<int>& arr) {
    //iterate over each elements
	int sum = 0;
	for(int i = 0 ; i < arr.size() ; i++){
		bool found = false;
		//iterate over next elements
		for(int j = 0 ; j < arr.size() ; j++){
			//if found and the elements are not at the same index then break 
			if(arr[i] == arr[j] && i != j){
				found = true;
				break;
			}
		}
		if(found == false)
			sum += arr[i];
	}
	return sum;
}

int main(){
    vector<int> arr = {1, 2, 3, 2};

    cout << sumOfUnique(arr);

    return 0;
}