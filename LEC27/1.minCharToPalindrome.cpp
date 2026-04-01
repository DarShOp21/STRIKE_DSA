#include <algorithm>
#include <iostream>
#include <string>
#include <vector>

using namespace std;

int minChar(string &str) {
  string temp = str;
  int n = str.size();

  reverse(temp.begin(), temp.end());

  if (str == temp)
    return 0;

  str += temp;

  int pref = 0, suff = 1;
  vector<int> LPS(str.size(), 0);

  while (suff < str.size()) {
    if (str[pref] == str[suff]) {
      LPS[suff] = pref + 1;
      pref++, suff++;
    } else {
      if (pref == 0)
        suff++;
      else
        pref = LPS[pref - 1];
    }
  }

  if (LPS[str.size() - 1])
    return n - LPS[str.size() - 1];

  return 0;
}

int main() {
  string str = "aaab";

  cout << minChar(str);

  return 0;
}
