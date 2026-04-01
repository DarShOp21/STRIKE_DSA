// Given an array of negative and non-negative integers. You have to make the array beautiful. An array is beautiful if two adjacent integers, arr[i] and arr[i+1] are either negative or non-negative. And you can do the following operation any number of times until the array becomes beautiful.
//
// Operation: If two adjacent integers are different i.e. one of them is negative and other is non-negative, remove them.
//
// Return the beautiful array after performing the above operation.
//
// Note: An empty array is also a beautiful array. There can be many adjacent integers which are different as stated above. So remove different adjacent integers as described above from left to right.
//
//
// Example 1:
// Input: arr = [4,2,-2,1]
// Output: [4,1]
// Explanation:
// At indices 1 and 2, 2 and -2 have different sign, they are removed.
// The final array is [4,1].
//

#include <vector>
#include <iostream>
#include <stack>
#include <algorithm>

using namespace std;

vector<int> makeBeautiful(vector<int> arr) {
    stack<int> st;

    for(int i = 0 ; i < arr.size() ; i++){
        if(st.empty())
            st.push(arr[i]);
        else{
            if((st.top() >= 0 && arr[i] < 0) || (st.top() < 0 && arr[i] >= 0))
                st.pop();
            else
                st.push(arr[i]);
        }
    }

    vector<int> ans;
    while(!st.empty()){
        ans.push_back(st.top());
        st.pop();
    }

    reverse(ans.begin() , ans.end());

    return ans;
}
