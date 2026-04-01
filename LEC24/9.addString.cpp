#include<iostream>

using namespace std;

string reverseString(string &s) {
    //2 pointer approach

	int start = 0 , end = s.size()-1;

	while(start < end){
		//swap the start and end values 
		swap(s[start],s[end]);

		//increase the start pointer and decrease the end pointer
		start++ , end--;
	}

	return s;
}

string addStrings(string num1, string num2) {
    int carry = 0;
    string ans = "";

    while(!num1.empty() || !num2.empty()){
        int digit1 = 0 , digit2 = 0;
        // num1.pop_back();

        if(!num1.empty()){
            digit1 = num1.back()-'0';
            num1.pop_back();
        }

        if(!num2.empty()){
            digit2 = num2.back()-'0';
            num2.pop_back();
        }

        int addition = digit1+digit2+carry;
        carry = addition/10;

        ans.push_back((addition%10)+'0');
    }
    if(carry)
        ans.push_back(carry+'0');
    
    ans = reverseString(ans);
    return ans;
}

int main(){
    cout << addStrings("5","99");

    return 0;
}