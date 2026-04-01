#include<iostream>
#include<vector>

using namespace std;

vector<vector<int>> Rotate90degMatrix(vector<vector<int>>& mat){
    int matRows = mat.size() , matCols = mat[0].size();

    vector< vector <int>> rotatedMatrix(matCols , vector<int>(matRows));

    for(int i = 0 ; i < matCols ; i++){
        for(int j = 0 ; j < matRows ; j++){
            int rowIndex = matRows-1-j;
            rotatedMatrix[i][j] = mat[rowIndex][i];
        }
    }
    // for(int i = 0 ; i < matCols ; i++){
    //     for(int j = 0 ; j < matRows ; j++){
    //         int rowIndex = matRows-1-j;
    //         swap(mat[i][j],mat[rowIndex][i]);
    //         // rotatedMatrix[i][j] = mat[rowIndex][i];
    //     }
    // }

    return mat;
} 

void Rotate90degMatrix2(vector<vector<int>>& mat){
    int rows = mat.size() , cols = mat[0].size();

	for(int i = 0 ; i < rows ; i++){
        for(int j = 0 ; j < i ; j++){
            swap(mat[i][j] , mat[j][i]);
        }
    }

    int colStart = 0 , colEnd = mat[0].size()-1;
    while(colStart < colEnd){
        for(int i = 0 ; i < rows ; i++){
            swap(mat[i][colStart],mat[i][colEnd]);
        }
        colStart++;
        colEnd--;
    }
}

int main(){
    vector<vector<int>> mat = {{0,1,2},{3,4,5},{6,7,8}};
    cout << "Original Matrix : " << endl;
    for(int i = 0 ; i < mat.size() ; i++){
        for(int j = 0 ; j < mat[0].size() ; j++){
            cout << mat[i][j] << " ";
        }
        cout << endl;
    }

    // vector<vector<int>> rotatedMatrix = Rotate90degMatrix(mat);
    // cout << "Rotated Matrix : " << endl;

    // for(int i = 0 ; i < rotatedMatrix.size() ; i++){
    //     for(int j = 0 ; j < rotatedMatrix[0].size() ; j++){
    //         cout << rotatedMatrix[i][j] << " ";
    //     }
    //     cout << endl;
    // }

    Rotate90degMatrix2(mat);
    cout << "Rotated Matrix : " << endl;

    for(int i = 0 ; i < mat.size() ; i++){
        for(int j = 0 ; j < mat[0].size() ; j++){
            cout << mat[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}