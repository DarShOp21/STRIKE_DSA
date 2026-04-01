#include<iostream>
#include<vector>

using namespace std;

string sortSentence(string s) {
    vector<string>strArr(10);
    int wordCount = 0;
    string word = "";

    for(int i = 0 ; i < s.size() ; i++){
        if(s[i] == ' ')
            continue;
        if(s[i]>='1' && s[i] <= '9'){
            int index = s[i]-'0';
            strArr[index] = word;
            word.clear();
            wordCount++;
        }else{
            word.push_back(s[i]);
        }
    }

    string ans = "";
    for(int i = 1 ; i <= wordCount ; i++){
        ans.append(strArr[i]+" ");
    }
    ans.pop_back();

    return ans;
}

int main(){
    string sent = "is2 sentence4 This1 a3";
    cout << "Sorted Sentence : "<< sortSentence(sent);

    return 0;
}