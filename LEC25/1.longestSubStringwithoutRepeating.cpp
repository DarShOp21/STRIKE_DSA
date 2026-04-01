#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

int maxUniqueSubstring(string& s){
    if(s.size() == 1)
        return 1;

    vector<int> lastIndex(256,-1);

    int start = 0 , longest = 0;
    
    for(int end = 0 ; end < s.size() ; end++){
        char c = s[end];

        if(lastIndex[c] >= start)
            start = lastIndex[c]+1;

        lastIndex[c] = end;
        longest = max(longest , end-start+1);
    }

    return longest;
}

int main(){
    string str = "abcabcbb";
    cout << maxUniqueSubstring(str);

    return 0;
}