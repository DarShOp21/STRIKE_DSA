#include <iostream>
#include <vector>
using namespace std;

// first thought principle
// int stringMatching(string str1 , string str2){
//     for(int i = 0 ; i <= str1.size()-str2.size() ; i++){
//         int first = i , second = 0;
//         while(second < str2.size()){
//             if(str1[first] != str2[second])
//                 break;
//             else{
//                 first++ , second++;
//             }
//         }

//         if(second == str2.size())
//             return first-second;
//     }

//     return -1;
// }

void lpsFind(vector<int> &lps, string str) {
  int pre = 0, suf = 1;

  while (suf < str.size()) {
    if (str[pre] == str[suf]) {
      lps[suf] = pre + 1;
      suf++, pre++;
    } else {
      if (pre == 0) {
        lps[suf] = 0;
        suf++;
      } else {
        pre = lps[pre - 1];
      }
    }
  }
}

int stringMatching(string str1, string str2) {
  vector<int> str2LPS(str2.size(), 0);
  lpsFind(str2LPS, str2);

  int first = 0, second = 0;

  while (first < str1.size() && second < str2.size()) {
    // if matches
    if (str1[first] == str2[second]) {
      first++, second++;
    } else {
      if (second == 0)
        first++;
      else {
        second = str2LPS[second - 1];
      }
    }

    if (second == str2.size())
      return first - second;
  }
  return -1;
}

int main() {
  string str1 = "abacdabad";
  string str2 = "aba";

  cout << stringMatching(str1, str2);

  return 0;
}
