#include <iostream>

using namespace std;

class Stack{
  public:
    int arr[100];
    int index;

    Stack(){
      index = -1;
    }

    void push(int num){
      if(index == 99){
        cout << "Stack overflowed!! \n";
      }else {
        index++;
        arr[index] = num;
        cout << num << " pushed into stack!! \n";
      }
    }

    void pop(){
      if(index == -1)
        cout << "Stack underflowed!! \n";
      else{
        cout << "Poped!! \n";
        index--;
      }
    }

    //it should be called only when the stack is not empty
    int top(){
      return arr[index];
    }

    bool empty(){
      return index==-1; //if index == -1 true , else false
    }

    int size(){
      return index+1;
    }
};

int main(){
  Stack s;

  s.push(2);

  cout << "Size : " << s.size() << endl;

  s.push(5);

  cout << "Size : " << s.size() << endl;  
 
  s.pop();
  s.pop();

  cout << "Size : " << s.size() << endl; 

  s.pop();
  return 0;  
}
