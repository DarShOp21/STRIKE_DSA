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

int main(){
    string str = "Darshan";

    cout << reverseString(str);

    return 0;111
}