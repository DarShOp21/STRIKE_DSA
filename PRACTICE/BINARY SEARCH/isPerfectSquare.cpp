#include<iostream>
#include<vector>

using namespace std;

bool isPerfectSquare(int num) {
    if(num == 0 || num == 1)
        return true;

    int start = 0 , end = num/2;
    while(start <= end){
        long long mid = start + (end - start)/2;

        if(mid*mid == num)
            return true;
        else if(mid*mid < num)
            start = mid + 1;
        else 
            end = mid - 1;
    }

    return false;
}

int main(){
    cout << "Enter the no to check whether its perfect square or not : ";
    int num ;
    cin >> num;
    
    if(isPerfectSquare(num))
        cout << num << " is perfect square";
    else 
        cout << num << " is not perfect square";

    return 0;
}