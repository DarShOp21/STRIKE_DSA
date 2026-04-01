#include<iostream>
#include<vector>

using namespace std;

// void spiralMatrix(vector<vector <int>> mat){
//     int left = 0 , right = mat[0].size()-1 , top = 0 , bottom = mat.size()-1;

//     while(left <= right && top <= bottom){
//         //left => right
//         for(int i = left ; i <= right ; i++){
//             cout << mat[top][i] << " ";
            
//         }
//         top++;
//         //top => bottom
//         for(int i = top ; i <= bottom ; i++){
//             cout << mat[i][right] << " ";
            
//         }
//         right--;
//         //right => left
//         for(int i = right ; i >= left ; i--){
//             cout << mat[bottom][i] << " ";
            
//         }
//         bottom--;
//         //bottom => top
//         for(int i = bottom ; i >= top ; i--){
//             cout << mat[i][left] << " ";
            
//         }
//         left++;
//     }
// }

vector<int> spiralOrder(vector<vector<int>>& mat) {
    vector<int> ans = {};

    int left = 0 , right = mat[0].size()-1 , top = 0 , bottom = mat.size()-1;

    while(top <= bottom && left <= right){
        // left => right
        for(int i = left ; i <= right ; i++ )
            ans.push_back(mat[top][i]);
        top++;
        if(top > bottom)
            break;

        //top => bottom
        for(int i = top ; i <= bottom ; i++)
            ans.push_back(mat[i][ri1ght]);
        right--;
        if(left > right)
            break;

        //right => left
        for(int i = right ; i >= left ; i--)
            ans.push_back(mat[bottom][i]);
        bottom--;
        if(top > bottom)
            break;

        //bottom => top
        for(int i = bottom ; i >= top ; i--)
            ans.push_back(mat[i][left]);
        left++;
        if(left > right)
            break;
    }

    return ans;
}

int main(){
    // vector <vector<int>> mat= {{1,2,3,4} , {5,6,7,8} , {9,10,11,12} , {13,14,15,16}};
    // vector <vector<int>> mat= {{1,2,3,4} , {5,6,7,8} , {9,10,11,12} };
    vector <vector<int>> mat = {{10,20,30},{40,50,60}};

    vector<int> spiral = spiralOrder(mat);

    for(int i = 0 ; i < spiral.size() ; i++)
        cout << spiral[i] << " ";

    return 0;
}