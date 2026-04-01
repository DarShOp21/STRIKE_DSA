#include<iostream>
#include<vector>

using namespace std;

string sort(string s) {
    vector<int> count(26,0);

    for(int i = 0 ; i < s.size() ; i++){
        count[s[i]-'a']++;
        // cout << count[s[i]];
    }

    string sortedString = "";
    for(int i = 0 ; i < count.size() ; i++){
        while(count[i]){
            sortedString += i+'a';
            count[i]--;
        }
    }

    return sortedString;
}

int main(){
    string str = "badc";

    cout << sort(str);

    return 0;
}