#include <iostream>
#include <queue>

using namespace std;


//USING 2 QUEUES
class MyStack {
public:
    queue<int>q1;
    queue<int>q2;

    MyStack() {
        
    }
    
    void push(int x) {
        //if q1 not empty push it to the q1
        if(!q1.empty()){
            q1.push(x);
        }
        //if q1 empty push to q2
        else{
            q2.push(x);
        }   
    }
    
    int pop() {
        if(q1.empty() && q2.empty())
            return -1;
        else if(!q1.empty()){
            while(!q1.empty()){
                int top = q1.front();
                q1.pop();
                if(q1.empty())
                    return top;
                q2.push(top);
            }
        }else{
            while(!q2.empty()){
                int top = q2.front();
                q2.pop();
                if(q2.empty())
                    return top;
                q1.push(top);
            }
        }
    }   
    
    int top() {
        if(q1.empty() && q2.empty())
            return -1;
        else if(!q1.empty()){
            return q1.back();
        }else{
            return q2.back();
        }
    }
    
    bool empty() {
        return q1.empty() && q2.empty();
    }
};
