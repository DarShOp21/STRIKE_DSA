#include<iostream>

using namespace std;

int mySqrt(int x) {
    // Your code here
	int start = 1 , end = x/3;

    while(start <= end){
        int mid = start + (end-start)/2;

        if(mid*mid == x)    
            return mid;
        else if(mid*mid < x)
            start = mid + 1;
        else 
            end = mid - 1;
    }

    return end ;
}

int main(){
    cout << "Enter the value ";
    int x;
    cin >> x;

    cout << "The sqaureroot of " << x << " is " << mySqrt(x);

    return 0;
}