#include<iostream>
#include<vector>
#include <algorithm>
using namespace std;


vector<vector<int>> transpose(vector<vector<int>>mat){
    int rows = mat.size();
    int cols = mat[0].size();
    if(rows != cols){
        cout << "Only square matrix can have transpose";
        return {{-1,-1,-1},{-1,-1,-1},{-1,-1,-1}};
    }

    for(int i = 0 ; i < rows ; i++){
        for(int j = 0 ; j < i ; j++){
            swap(mat[i][j] , mat[j][i]);
        }
    }

    return mat;
}

int main(){
    vector<vector<int>> mat = {{1,2,3},{4,5,6},{7,8,9}};
    vector<vector<int>> transposeMatrix = transpose(mat);

    for(int i = 0 ; i < mat.size() ; i++){
        for(int j = 0 ; j < mat.size() ; j++){
            cout << " "<< transposeMatrix[i][j] << " ";
        }
        cout << endl;
    }
}