#include <iostream>
#include <vector>

using namespace std;

// 1st taught
// int longestPrefSuff(string str){
//     int longest = 0;
//     for(int i = 0 ; i < str.size() ; i++){

//         //prefix
//         string prefix = "";
//         for(int j = 0 ; j <= i ; j++){
//             prefix.push_back(str[j]);
//         }

//         //suffix
//         string suffix = "";
//         for(int j = str.size()-i-1 ; j < str.size() ; j++){
//             suffix.push_back(str[j]);
//         }

//         if(prefix == suffix && prefix.size() != str.size())
//             longest = i+1;
//     }

//    return longest;
// }

int longestPrefSuff(string str) {
  vector<int> longestCount(str.size(), 0);

  int pref = 0, suff = 1;
  while (suff < str.size()) {
    if (str[pref] == str[suff]) {
      longestCount[suff] = pref + 1;
      pref++, suff++;
    } else {
      if (pref == 0) {
        longestCount[suff] = 0;
        suff++;
      } else {
        pref = longestCount[pref - 1];
      }
    }
  }

  return longestCount[str.size() - 1];
}

int main() {
  string str = "abcabb";

  cout << "Longest Prefix and Suffix size is : " << longestPrefSuff(str);

  return 0;
}
