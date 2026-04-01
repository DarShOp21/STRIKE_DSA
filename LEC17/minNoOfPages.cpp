#include<iostream>
#include<vector>
// #include<limits>

using namespace std;

bool allocateBooks(int maxPages , vector<int>& arr , int k){

    //count - num of students , pagesAllocated - pages allocated to that particular student
    int count = 1 , pagesAllocated = arr[0];

    for(int i = 1 ; i < arr.size() ; i++){
        pagesAllocated += arr[i];
        if(pagesAllocated > maxPages){
            count++;
            pagesAllocated = arr[i];
        }
    }

    return count <= k;
}

int minNoOfPages(vector<int>& arr , int k){

    if(k > arr.size())
        return -1;

    //find max pages
    int maxPages = 0;
    for(int i = 0 ; i < arr.size() ; i++){
        if(arr[i] > maxPages)
            maxPages = arr[i];
    }

    while(maxPages){
        if(allocateBooks(maxPages , arr , k))
            return maxPages;

        maxPages++;
    }

    return 0;
}

int minNoOfPages2(vector<int>& arr , int k){

    if(k > arr.size())
        return -1;

    //find max pages
    int maxPages = 0 , totalPages = 0;
    for(int i = 0 ; i < arr.size() ; i++){
        totalPages += arr[i];
        if(arr[i] > maxPages)
            maxPages = arr[i];
    }

    // cout << maxPages << "  " << totalPages; 

    int start = maxPages , end = totalPages , ans=maxPages;

    while(start <= end){
        int mid = start + (end - start)/2;

        if(allocateBooks(mid , arr , k)){
            if(mid < ans)
                ans = mid;
            end = mid - 1;
        }
        else
            start = mid + 1 ;
    }

    return ans;
}

int main(){
    vector<int> arr = {12,34,67,90};
    cout << minNoOfPages2(arr,4);

    return 0;
}