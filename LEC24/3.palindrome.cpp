// You are given a string s. Your task is to determine if the string is a palindrome. A string is considered a palindrome if it reads the same forwards and backGiven a string s, determine if it is a valid palindrome. A string is a valid palindrome when:

// Return true if s is a valid palindrome, or false otherwisewards.

#include<iostream>

using namespace std;

bool isPalindrome(string& s) {
    int start = 0 , end = s.size()-1;

	while(start < end){
		if(s[start] != s[end])
			return false;
		start++;
		end--;
	}

	return true;
}

int main(){
    string str = "darsa";

    if(isPalindrome(str))
        cout << "Palindrome";
    else    
        cout << "Not Palindrome";

    return 0;
}