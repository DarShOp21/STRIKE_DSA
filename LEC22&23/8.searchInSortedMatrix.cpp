// You are given an m x n integer matrix with the following two properties:

// Each row is sorted in non-decreasing order
// The first integer of each row is greater than the last integer of the previous row
// Given an integer target, return true if target is in matrix or false otherwise.


#include<iostream>
#include<vector>

using namespace std;

bool searchMatrix(vector<vector<int>>& matrix, int target) {
    int rows = matrix.size() , cols = matrix[0].size();
	int totalValues = rows*cols;

	int start = 0 , end = totalValues-1;
	while(start <= end){
		int mid = start + (end - start)/2;

		int rowIndex = mid/cols , colIndex = mid%cols;

		if(matrix[rowIndex][colIndex] == target)
			return true;
		else if(matrix[rowIndex][colIndex] < target)
			start = mid + 1;
		else 
			end = mid - 1;
	}

	return false;
}

int main(){
    vector<vector<int>> mat = {{1,3,5,7} , {10,11,16,20},{23,30,34,60}};
    int target = 28;

    cout << searchMatrix(mat , target);

    return 0;
}