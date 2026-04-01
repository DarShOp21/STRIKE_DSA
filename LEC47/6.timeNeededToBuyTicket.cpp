#include <iostream>
#include <vector>


using namespace std;
int timeRequiredToBuy(vector<int>& tickets, int k) {

    if(k > tickets.size())
        return -1;

    int time = 0;
    for(int i = 0 ; i <= k ; i++)
        time += min(tickets[i],tickets[k]);

    for(int i = k+1 ; i < tickets.size() ; i++)
        time += min(tickets[i],tickets[k]-1);

    return time;
}
