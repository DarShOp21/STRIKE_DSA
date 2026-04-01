// Given a string s, convert all uppercase characters to lowercase. Lowercase characters remain unchanged.

#include<iostream>

using namespace std;

string toLower(string &s) {
    for(int i = 0 ; i < s.size() ; i++){
		if(s[i] >= 'A' && s[i] <= 'Z' ){
			s[i] = 'a' + (s[i]-'A');
		}
	}

	return s;
}

int main(){
    string str = "DarShan";

    cout << str << " => " << toLower(str);
    
    return 0;
}