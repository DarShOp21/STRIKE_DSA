// Given a string str , convert all lowercase letters to uppercase and return the resulting string. Any other characters (such as digits or special characters) should remain unchanged.

#include<iostream>

using namespace std;

string toUpper(string &str){
    for(int i = 0 ; i < str.size() ; i++){
        if(str[i] >= 'a' && str[i] <= 'z')
            str[i] = str[i] + 'A' - 'a';
    }

    return str;
}

int main(){
    string str = "DarShan";

    cout << str << " => " << toUpper(str);
    
    return 0;
}