// Given a string s, find the first non-repeating character in it and return its index. If it does not exist, return -1.

#include<iostream>
#include<vector>

using namespace std;

int firstUniqChar(string& s) {
    //array to maintain the count of the characters
    vector<int>count(26,0);
    
    //updates the count of the characters
    for(int i = 0 ; i < s.size() ; i++){
        int index = s[i]-'a';
        // cout << index;
        count[s[i]-'a']++;
    }

    for(int i = 0 ; i < s.size() ; i++){

        if(count[s[i]-'a'] == 1)
            return i;
    }
    return -1;
}

int main(){
    string str = "arshan";

    cout << firstUniqChar(str);

    return 0;
}