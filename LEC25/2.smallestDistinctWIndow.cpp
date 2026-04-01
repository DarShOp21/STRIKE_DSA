#include<iostream>
#include<vector>

using namespace std;

//wrong but learned a lot from the below
// int findSubString(string str) {

//     vector<int>charCount(256,0);

//     for(int i = 0 ; i < str.size() ; i++)
//         charCount[str[i]]++;

//     int start = 0 , end = str.size()-1;

//     int smallestWindow = str.size();
//     while(start < end){
//         if(charCount[str[start]] > 1){
//             charCount[str[start]]--;
//             start++;
//             smallestWindow--;
//         }else if(charCount[str[end]] > 1){
//             charCount[str[end]]--;
//             end--;
//             smallestWindow--;
//         }else{
//             break;
//         }
//     }

//     return smallestWindow;
// }

int findSubString(string str) {

    vector<int>charCount(256,0);
    int uniqueChars = 0;
    for(int i = 0 ; i < str.size() ; i++){
        charCount[str[i]]++;
        if(charCount[str[i]]==1)
            uniqueChars++;
    }

    charCount.assign(256,0);
    int uniqueCharsFound = 1;
    int start = 0 , end = 1 , ans = str.size();

    charCount[str[start]]++;

    while(end < str.size()){
        charCount[str[end]]++;
        if(charCount[str[end]]==1)
            uniqueCharsFound++;

        while(uniqueCharsFound == uniqueChars){
            ans = min(ans,end-start+1);
            charCount[str[start]]--;
            if(charCount[str[start]] == 0)
                uniqueCharsFound--;
            start++;
        }

        end++;
    }   

    return ans;
}   


int main(){
    string str = "aabcbcdbca";

    cout << findSubString(str);

    return 0;

}