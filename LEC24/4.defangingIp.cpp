#include<iostream>

using namespace std;

string defangIPaddr(string address) {
	string ans="";
	for(int i = 0 ; i < address.size() ; i++){
        if(address[i] == '.')
            ans += "[.]"; 
        else 
            ans += address[i];
    }
    return ans;
}

int main(){
    string ip = "192.0.2.1";
    cout << defangIPaddr(ip);

    return 0;
}