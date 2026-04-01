#include<iostream>
#include<stdio.h>
#include<vector>

using namespace std;

void segregate0and1(vector<int>& arr){
    int start = 0 , end = arr.size()-1;

    while(start < end){
		if(arr[start] == 0)
			start++;

		else `if(arr[end] == 1)
			end--;

		else{
			int temp = arr[start];
			arr[start] = arr[end];
			arr[end] = temp;
			start++;
			end--;
		}
	}
};

int main(){
    vector<int> arr = {0, 0, 1, 1, 0};
    
    segregate0and1(arr);

    for(int i = 0 ; i < arr.size() ; i++)
        cout << arr[i] << " ";
    
    return 0;
}