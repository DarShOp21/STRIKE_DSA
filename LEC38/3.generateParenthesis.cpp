#include <iostream>
// #include <string>
#include <vector>

using  namespace std;

void parenth(int open , int close , string& temp , vector<string>& ans){
  if ( open > close || open == -1)
    return;

  if(open == 0 && close == 0){
    ans.push_back(temp);
    return;
  }


  //add '(' open parenthesis
  temp.push_back('(');
  parenth(open-1, close, temp, ans);
  temp.pop_back();

  //add ')' close parenthesis
  temp.push_back(')');
  parenth(open, close-1, temp, ans);
  temp.pop_back();
}

vector<string> generateParenthesis(int n) {
    string temp;
    vector<string>ans;

    parenth(n,n,temp,ans);

    return ans;
}
