#include<iostream>

using namespace std;

bool isClockwiseRotated(string &word1 , string &word2){
    for(int i = 0 ; i < word1.size() ; i++){
        if( word1[i] != word2[(i+2)%word1.size()])
            return false;
    }

    return true;
}

bool isAntiClockwiseRotated(string &word1 , string &word2){
    for(int i = 0 ; i < word1.size() ; i++)
        if(word1[i] != word2[(word1.size()-2+i)%word1.size()])
            return false;

    return true;
}

bool isRotated(string &word1 , string &word2){
    if(word1.size() != word2.size())
        return false;

    if(isClockwiseRotated(word1,word2) || isAntiClockwiseRotated(word1,word2))
        return true;

    return false;
}

int main(){
    string word1 = "dubbmaiq";
    string word2 = "bbmaiqdu";

    cout << isRotated(word1,word2);

    return 0;
}