#include <iostream>
#include <vector>
using namespace std;

bool isVowel(char c){
	if(c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' ||c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U' )
		return true;

	return false;
}

string sortVowels(string &s) {
    vector<int>count(256,0);

	for(int i = 0 ; i < s.size() ; i++){
		if(isVowel(s[i]))
			count[s[i]]++;
	}

	for(int i = 0 ; i < s.size() ; i++){
		if(isVowel(s[i])){
			for(int j = 0 ; j < 256 ; j++){
				if(count[j]){
					s[i] = j;
					count[j]--;
					break;
				}
			}
		}
	}

	return s;		
}

int main(){
    string str = "IlaAYAPk";
    cout << sortVowels(str);

    return 0;
}