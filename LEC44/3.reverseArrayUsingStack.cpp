#include <iostream>
#include <stack>
#include <vector>

using namespace std;

void reverseArray(vector<int>& arr) {
	stack<int>s;

    //insert all the values from array to stack
    for(int i = 0 ; i < arr.size() ; i++)
        s.push(arr[i]);


    //insert all the values of the stack to the array
    //here we will get the top and then pop
    for(int i = 0 ; !s.empty() ; i++){
        arr[i] = s.top();
        s.pop();
    }
}
