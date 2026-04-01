#include<iostream>

using namespace std;

string reverse(string str , int index){
  if(index >= str.size()/2)
    return str;

  swap(str[index],str[str.size()-index-1]);

  // reverse(str , index+1);
  return reverse(str , index+1) ;
}

string reverseString(string &s){
  return reverse(s,0);
}

int main(){
  string str;
  cout << "Enter the string value : ";
  
  getline(cin,str);

  cout << reverseString(str);

  return 0;
}
