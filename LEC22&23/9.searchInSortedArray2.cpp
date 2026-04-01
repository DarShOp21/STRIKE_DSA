#include<iostream>
#include<vector>

using namespace std;

bool searchMatrix(vector<vector<int>>& matrix, int target) {
    int rows = matrix.size() , cols = matrix[0].size();
	int totalValues = rows*cols;

	int start = 0 , end = totalValues-1;
	while(start <= end){
		int mid = start + (end - start)/2;

		int rowIndex = mid%rows , colIndex = mid/rows;

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
    vector<vector<int>> mat = {{1,7,16,30} , {3,10,20,34},{5,11,23,60}};
    int target = 23;

    cout << searchMatrix(mat , target);

    return 0;
}