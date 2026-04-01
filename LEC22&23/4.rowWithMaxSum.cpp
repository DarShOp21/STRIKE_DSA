#include<iostream>
#include<vector>
#include<climits>

using namespace std;

int rowWithMaxSum(vector<vector<int>>& mat) {

	if(mat[0].size() == 0)
		return -1;

    int maxSum = INT_MIN;
	int index = 0;
	for(int i = 0 ; i < mat.size() ; i++){
		int rowSum = 0;
		for(int j = 0 ; j < mat[0].size() ; j++){
			rowSum += mat[i][j];
		}
		if(rowSum = maxSum){
			maxSum = rowSum;
			index = i;
		}
	}

	return index;
}

int main(){
    vector<vector<int>> mat = {{1,2},{3,4}};

    cout << rowWithMaxSum(mat);

    return 0;
}