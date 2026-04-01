#include <iostream>
#include <stack>

using namespace std;

bool isValidOpeningAndClosing(char first , char second){
    if((first == '(' && second == ')') || (first == '{' && second == '}') || (first == '[' && second == ']'))
        return true;
    return false;
}

bool isOpening(char c){
    if(c == '{' || c == '(' || c == '[')
        return true;
    return false;
}

bool isValid(string& s) {
    stack<char>st;

    for(int i = 0 ; i < s.size() ; i++){
        if(isOpening(s[i]))
            st.push(s[i]);
        else{
            if(!st.empty() &&isValidOpeningAndClosing(st.top(),s[i]))
                st.pop();
            else
                st.push(s[i]);
        }
    }

    if(st.size())
        return false;
    else 
        return true;
}
