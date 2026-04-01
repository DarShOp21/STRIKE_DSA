#include<iostream>
#include<vector>

using namespace std;

vector<vector<int>> addTwoMatrix(vector<vector<int>>& mat1, vector<vector<int>>& mat2) {
	//no of rows and colums
	int rows1 = mat1.size() , cols1 = mat1[0].size();
	int rows2 = mat2.size() , cols2 = mat2[0].size();

    //check the dimensions of both matrix if not same than not possible
	if(rows1 != rows2 || cols1 != cols2)
		return {{-1}};
	
	vector<vector<int>> additionMatrix(rows1 , vector<int>(cols1));
    for(int i = 0 ; i < rows1 ; i++){
		for(int j = 0 ; j < cols1 ; j++)
			additionMatrix[i][j] = mat1[i][j] + mat2[i][j];
	}

	return additionMatrix;
}

int main(){
	vector<vector<int>> mat1 = {{1,2,3},{4,5,6},{7,8,9}};
	vector<vector<int>> mat2 = {{1,2,3},{4,5,6},{7,8,9}};

	vector<vector<int>> additionMatrix = addTwoMatrix(mat1,mat2);

	for(int i = 0 ; i < additionMatrix.size() ; i++){
        for(int j = 0 ; j < additionMatrix[0].size() ; j++){
            cout << " "<< additionMatrix[i][j] << " ";
        }
        cout << endl;
    }
}