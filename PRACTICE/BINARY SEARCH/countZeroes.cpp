#include<iostream>
#include<vector>

using namespace std;

int countZeroes(vector<int>& arr) {
	//if last value is 1 return 0
	if(arr[arr.size()-1] == 1)	
        return 0; 

	//since 1st index value is 0 , the complete array will be of zero , return the size of the array
	if(arr[0]==0)
		return arr.size();

    int start = 0 , end = arr.size()-1;
    int index;

    while(start <= end){
        int mid = start + (end-start)/2;

		//save the index and search for small index value 
        if(arr[mid] == 0){	
            index = mid;
            end = mid - 1;
        }else{
            start = mid + 1;
        }
    }

	//difference btw index and las
    return arr.size()-index;
}  

int main(){
    vector<int> arr = {0,0,0};

    cout << "Number of 0's are " << countZeroes(arr);

    return 0;
}