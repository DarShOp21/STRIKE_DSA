#include <iostream>
#include <stack>

using namespace std;

class MyQueue {
public:
    stack<int> st1;
    stack<int> st2;

    void push(int x) {
        st1.push(x);
    }
    
    int pop() {
        if(st1.empty() && st2.empty())
            return -1;
        else if(st2.empty()){
            while(!st1.empty()){
                st2.push(st1.top());
                st1.pop();
            }
            int temp = st2.top();
            st2.pop();
            return temp;
        }else{
            int temp = st2.top();
            st2.pop();
            return temp;
        }
    }
    
    int peek() {
        if(st1.empty() && st2.empty())
            return -1;
        else if(st2.empty()){
            while(!st1.empty()){
                st2.push(st1.top());
                st1.pop();
            }
            int temp = st2.top();
            return temp;
        }else{
            int temp = st2.top();
            return temp;
        }
    }
    
    bool empty() {
        return st1.empty() && st2.empty();
    }
};
