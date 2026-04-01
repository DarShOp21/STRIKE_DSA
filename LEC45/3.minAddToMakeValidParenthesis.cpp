#include <iostream>
#include <stack>
using namespace std;

// left = '(' & right = ')'

int minAddToMakeValid(string s) {
    int left = 0 , right = 0;
    for(int i = 0 ; i < s.size() ; i++){
        if(s[i] == '('){
            left++;
        }else{
            if(left)
                left--;
            else
                right++;
        }
    }

    return left+right;
}


int minAddToMakeValid2(string s){
  stack<char>st;

    for(int i = 0 ; i < s.size() ; i++){
        if(s[i] == '('){
            st.push(s[i]);
        }else{
            if(st.top() == '(')
                st.pop();
            else
                st.push(s[i]);
        }
    }

    return st.size();
}

int main(){
  string s = ")(())";
  cout << minAddToMakeValid(s);
  cout << minAddToMakeValid2(s);

  return 0;
}
