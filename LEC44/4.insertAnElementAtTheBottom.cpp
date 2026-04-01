#include <iostream>
#include <stack>

using namespace std;

void insertAtBottom(stack<int>& st, int x){
    
    //insert all the data to another stack and keep on clearing the og stack
    stack<int> temp ;
    while(!st.empty()){
        temp.push(st.top());
        st.pop();
    }

    //push the `x` value in the og stack
    st.push(x);

    //insert all the data from another stack to the og stack while clearing the another stack
    while(!temp.empty()){
        st.push(temp.top());
        temp.pop();
    }
}
