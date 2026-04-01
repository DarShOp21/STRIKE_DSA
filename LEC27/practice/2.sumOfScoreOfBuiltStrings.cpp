#include <exception>
#include <iostream>
#include <string>
#include <vector>

using namespace std;

int sumScore(string s) {
  string str = "";
  int score = 0;
  for (int i = 1; i <= s.size(); i++) {
    str = s[s.size() - i] + str;

    vector<int> LSP(s.size(), 0);

    int first = 0, second = 0;

    while (first < s.size()) {
      if (s[first] == str[second]) {
        LSP[first] = first + 1;
        first++, second++;
        if (second == str.size()) {
          cout << "Score added for " << str << endl;
          score += i;
          break;
        }
      } else {
        second = 0;
        first++;
      }
    }
  }

  return score;
}

int main() {
  string s = "babab";

  cout << sumScore(s);

  return 0;
}
