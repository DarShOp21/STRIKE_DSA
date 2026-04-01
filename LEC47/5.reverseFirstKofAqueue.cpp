#include<iostream>
#include<stack>
#include<queue>

using namespace std;

    queue<int> modifyQueue(queue<int> q, int k) {
        int size = q.size();

        stack<int>st;

        if(k > size)
            return q;

        for(int i = 0 ; i < k ; i++){
            if(q.empty())
                break;
            st.push(q.front());
            q.pop();
        }

        while(!st.empty()){
            q.push(st.top());
            st.pop();
        }

        for(int i = 0 ; i < size-k ; i++){
            int temp = q.front();
            q.pop();
            q.push(temp);
        }

        return q;
    }
