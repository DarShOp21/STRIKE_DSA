#include <iostream>
#include <stack>

using namespace std;

stack<char> getStack(string s){
    stack<char> st;
    for(int i = 0 ; i < s.size() ; i++){
        if(s[i] == '#'){
            if(!st.empty())
                st.pop();
        }else
            st.push(s[i]);
    }

    return st;
}

string stackToString(stack<char>st){
    string str;
    while(st.size()){
        str.push_back(st.top());
        st.pop();
    }

    return str;
}

bool backspaceCompare(string s, string t) {
    stack<char>st1 = getStack(s);
    stack<char>st2 = getStack(t);

    string s1 = stackToString(st1) , s2 = stackToString(st2);

    if(s1 == s2)
        return true;

    return false;
}
