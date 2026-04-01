#include<iostream>
#include<vector>

using namespace std;

int longestPalindrome(string s) {

	if(s.size()==1)
		return 1;

	//maintain the count of uppercase values
	vector<int>upperCount(26,0);
	//maintain the count of lowercase values
	vector<int>lowerCount(26,0);

	int longestSize = 0;
	//check if their any odd count of values
	bool isCentreOdd = false;

	//storing counts of the values
	for(int i = 0 ; i < s.size() ; i++){
		if(s[i] >= 'a' && s[i] <= 'z'){
			int index = s[i]-'a';
			lowerCount[index]++;
		}else{
			int index = s[i]-'A';
			upperCount[index]++;
		}
	}

	//get the longest size of the palindrome
	for(int i = 0 ; i < 26 ; i++){
		//if even add the count to the longestCount
		if(lowerCount[i]%2 == 0){
			longestSize += lowerCount[i];
		}else{
			//turns the flag for odd number
			isCentreOdd = true;
			//add count-1 to the longest
			longestSize += lowerCount[i]-1;
		}

		//similar for uppercase
		if(upperCount[i]%2 == 0){
			longestSize += upperCount[i];
		}else{
			isCentreOdd = true;
			longestSize += upperCount[i]-1;
		}
	}

	//if odd count then add one to longest palindrome
	if(isCentreOdd)
		return longestSize+1;

	return longestSize;
}

int main(){
    string str = "aaggdDsBGBB";

    cout << "The size of the longest palindrome is : " << longestPalindrome(str);

    return 0;
}