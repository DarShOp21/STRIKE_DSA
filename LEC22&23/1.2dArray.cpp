#include<iostream>;
using namespace std;

int main(){
    //printing a 2d matrix
    // int rows = 3 , cols = 4;
    // int value = 1;

    // for(int i = 0 ; i < rows ; i++){
    //     for(int j = 0 ; j < cols ; j++){
    //         cout << " " << value << " ";
    //         value++;
    //     }
    //     cout << endl;
    // }


    //accessing values of 2d matrix
    // int rows = 3 , cols = 4;
    // int arr[rows][cols] = {{1,2,3,4},{5,6,7,8},{9,10,11,12}};

    // for(int i = 0 ; i < rows ; i++){
    //     for(int j = 0 ; j < cols ; j++){
    //         cout << " "<<arr[i][j] << " ";
    //     }
    //     cout << endl;
    // }


    //getting index in the 2d array
    int rows = 3 , cols = 4;
    int arr[rows][cols] = {{1,2,3,4},{5,6,7,8},{9,10,11,12}};

    for(int i = 0 ; i < rows ; i++){
        for(int j = 0 ; j < cols ; j++){
            int index = i * cols + j;

            cout << "The index of " << arr[i][j] << " is " << index << endl;
        }
    }
    return 0;
}