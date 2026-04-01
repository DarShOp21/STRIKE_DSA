#include <iostream>

using namespace std;

void wishBirthday(int daysRemaining){
  if(!daysRemaining){
    cout << "Happy BirthDay" << endl;
    return;
  }
  cout << daysRemaining << " days remaining" << endl;
  daysRemaining--;
  wishBirthday(daysRemaining);
}

int main(){
  wishBirthday(30);

  return 0;
}
