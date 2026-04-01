#include <iostream>
#include <stack>
#include <vector>

using namespace std;

class Solution {
public:
    bool isBracket(char c){
        if(c == '(' || c == ')')
            return true;
        return false;
    }

    vector<int> bracketNumbers(string str) {

        vector<int>ans;

        int countOpen = 0;

        stack<int> st;
        for(int i = 0 ; i < str.size() ; i++){
            if(isBracket(str[i])){
                if(str[i] == '('){
                    countOpen++;
                    st.push(countOpen);
                    ans.push_back(st.top());
                }else{
                    ans.push_back(st.top());
                    st.pop();
                }   
            }
        }

        return ans;
    }
};
