#include<iostream>
#include<vector>

using namespace std;

bool isEatingBananasPossible(int maxTime , vector<int>& piles , int h){
    int totalTime = 0;

    for(int i = 0 ; i < piles.size() ; i++){
        totalTime += piles[i]/maxTime;
        if(piles[i]%maxTime)
            totalTime++;
    }

    return totalTime <= h;
}

int minEatingSpeed(vector<int>& piles, int h) {
    int maxBananas = 0 ;
    for(int i = 0 ; i < piles.size() ; i++)
        maxBananas = max(maxBananas , piles[i]);

    int start = 1 , end = maxBananas , ans = 0 ;
    while(start <= end){
        int mid = start + (end - start)/2;

        if(isEatingBananasPossible(mid , piles , h)){
            ans = mid;
            end = mid - 1 ;
        }else
            start = mid + 1;
    }

    return ans;
}

int main(){
    vector<int> piles = {30,11,23,4,20};
    int h = 5;

    cout << minEatingSpeed(piles , h);

    return 0;
}