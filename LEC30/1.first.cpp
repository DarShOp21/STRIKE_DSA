#include<iostream>

using  namespace std;

int main(){
  
  int *p = new int[5];    // creates a array of size 5 dynamically


  for(int i = 0 ; i < 5 ; i++)
    cin >> p[i];


  for(int i = 0 ; i < 5 ; i++)
    cout << p[i] << " ";

  delete[] p;             //free the memory pointed at the pointer p

  return 0;
}
