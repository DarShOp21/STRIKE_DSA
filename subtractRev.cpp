#include<iostream>
using namespace std;

int mirrorDistance(int num){
    if(num < 10)
        return 0;

    int dub = num;
    int rev = 0;
    while(dub){
        rev = rev * 10 + (dub%10);
        dub /= 10;
    }

    if(num > rev)
        return num-rev;
    return rev-num;
}

int main(){
    
    int num = 7;
    
    cout << mirrorDistance(num);

    return 0;
}