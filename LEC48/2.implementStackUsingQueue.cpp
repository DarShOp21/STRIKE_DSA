#include <iostream>
#include <queue>

using namespace std;


//USING 1 QUEUE
class MyStack {
public:
    queue<int>q;

    MyStack() {
        
    }
    
    void push(int x) {
        q.push(x);
    }
    
    int pop() {
        if(q.empty())
            return -1;
        int size = q.size();
        for(int i = 0 ; i < size ; i++){
            int temp = q.front();
            q.pop();
            if(i == size-1){
                return temp;
            }
            q.push(temp);
        }
    }   
    
    int top() {
        if(q.empty())
            return -1;
        return q.back();
    }
    
    bool empty() {
        return q.empty();
    }
};
