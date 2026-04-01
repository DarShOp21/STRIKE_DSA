#include <iostream>
#include <string>
#include <vector>

using namespace std;

vector<int> search(string &pat, string &txt) {
  // code here
  vector<int> ans;

  string str = pat + txt;

  vector<int> LPS(str.size(), 0);

  int first = 0, second = 1;
  while (second < str.size()) {
    if (str[first] == str[second]) {
      LPS[second] = first + 1;
      if (LPS[second] == pat.size())
        ans.push_back(second - (pat.size() - 1) - pat.size());
      second++, first++;
    } else {
      if (first == 0)
        second++;
      else
        first = LPS[first - 1];
    }
  }

  return ans;
}

int main() {
  string pat = "aaba", txt = "aabaacaadaabaaba";

  vector<int> ans = search(pat, txt);

  for (int i = 0; i < ans.size(); i++)
    cout << ans[i] << "  ";

  return 0;
}
