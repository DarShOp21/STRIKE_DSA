#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

vector<int> factorial(int num){
    vector<int>ans(1,1);

    while(num > 1){
        int carry = 0;

        for(int i = 0 ; i < ans.size() ; i++){
            int sum = ans[i]*num + carry;
            ans[i] = sum%10;
            carry = sum/10;
        }

        while(carry){
            ans.push_back(carry%10);
            carry /= 10;
        }

        num--;
    }

    reverse(ans.begin() , ans.end());
    return ans;
}

int main(){
    vector<int> ans = factorial(3);
    for(int i = 0 ; i < ans.size() ; i++)
        cout << ans[i] << " ";
    return 0;
}