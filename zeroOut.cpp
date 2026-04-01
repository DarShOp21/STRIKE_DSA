#include<iostream>
#include<vector>

using namespace std;

void setZero(vector<vector<int>>& mat){
    int rows = mat.size();
    vector<int> zeroRows;

    for(int i = 0; i < rows; i++){
        for(int j = 0; j < mat[i].size(); j++){
            if(mat[i][j] == 0){
                zeroRows.push_back(i);
                break;  // no need to scan rest of row
            }
        }
    }

    for(int r : zeroRows){
        fill(mat[r].begin(), mat[r].end(), 0);
    }
}


int main(){
    vector<vector<int>> mat = {{1,3,4},{1,5,0}};
    int row = mat.size();
    int col = mat[0].size();

    // cout << row << " " << col << endl;

    setZero(mat);

    // fill(mat[0].begin() , mat[0].end() , 0);

    for(int i = 0 ; i < row ; i++){
        for(int j = 0 ; j < col ; j++){
            cout << mat[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}