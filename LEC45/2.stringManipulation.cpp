// Tom is a string freak. He has got sequences of words arr[] to manipulate. If in a sequence, two same words come together then Tom destroys each other.
//
// Find the number of words left in the sequence after this pairwise destruction continues until no such pairs exist.
//
// Example 1:
// Input: ["ab", "aa", "aa", "bcd", "ab"]
// Output: 3
// Example 2:
// Input: ["tom", "jerry", "jerry", "tom"]
// Output: 0



#include <vector>
#include <iostream>
#include <stack>

using namespace std;

int countLeft(vector<string> &arr) {


    stack<string> st;

    for(int i = 0 ; i < arr.size() ; i++){
        if(st.empty()){
            st.push(arr[i]);
        }
        else{
            if(st.top() == arr[i]){
                st.pop();
           } else{
                st.push(arr[i]);
            }
        }
    }

    return st.size();
}
