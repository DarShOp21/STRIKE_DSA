	#include<iostream>
    #include<vector>

    using namespace std;
    
    bool isNextBigger(char a , char b){
		string roman = "IVXLCDM";
        if(a == b)
            return false;

		for(int i = 0 ; i < roman.size() ; i++){
			if( a == roman[i]){
				return true;
			}
			if( b == roman[i])
				return false;
		}
	}

	int getValue(char c){
		string roman = "IVXLCDM";
		vector<int> values = {1,5,10,50,100,500,1000};

		for(int i = 0 ; i < roman.size() ; i++)
			if( c == roman[i])
				return values[i];
	}

    int romanToInt(string s) {
        int index = 0 , answer = 0;

		while(index < s.size()){
			if(index != s.size()-1 && isNextBigger(s[index] , s[index+1])){
				answer -= getValue(s[index]);
			}else{
				answer += getValue(s[index]);
			}

			index++;
		}

        return answer;
    }

    int main(){
        string roman = "VII";

        cout << romanToInt(roman);

        return 0;
    }