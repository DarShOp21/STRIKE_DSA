// Given a 2D square matrix mat[][]of size n x n, rotate it by 180 degrees without using extra space
// You must rotate the matrix in-place and modify the input matrix directly
// Note: Rotating 180° clockwise or anticlockwise gives the same result.

// Example 1:
// Input: matrix = [[1,2],[3,4]]
// Output: [[4,3],[2,1]]
// Explanation:
// The output matrix is the input matrix rotated by 180 degrees

#include<iostream>
#include<vector>

using namespace std;

void rotateMatrix(vector<vector<int>>& mat) {
	int rows = mat.size() , cols = mat[0].size();

    //rotate horizontally
	int colStart = 0 , colEnd = cols-1;
	while(colStart < colEnd){
		for(int i = 0 ; i < rows ; i++){
			swap(mat[i][colStart],mat[i][colEnd]);
		}
		colStart++;
		colEnd--;
	}

	//rotate vertically
	int rowStart = 0 , rowEnd = rows-1;
	while(rowStart < rowEnd){
		for(int i = 0 ; i < cols ; i++){
			swap(mat[rowStart][i] , mat[rowEnd][i]);
		}
		rowStart++;
		rowEnd--;
	}
}

int main(){
    vector<vector<int>> mat = {{1,2,3},{4,5,6},{7,8,9}};

    cout << "Original Matrix : " << endl;
    for(int i = 0 ; i < mat.size() ; i++){
        for(int j = 0 ; j < mat[0].size() ; j++){
            cout << mat[i][j] << " ";
        }
        cout << endl;
    }

    rotateMatrix(mat);
    cout << "Rotated Matrix : " << endl;

    for(int i = 0 ; i < mat.size() ; i++){
        for(int j = 0 ; j < mat[0].size() ; j++){
            cout << mat[i][j] << " ";
        }
        cout << endl;
    }
}