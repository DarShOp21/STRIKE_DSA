#include <iostream>
#include <iterator>
#include <mutex>

using namespace std;

class Node {
      public:
     int data;
     Node* next;
     Node(int x) : data(x), next(nullptr) {}
};

class Stack{
  public:
    int index;
    int limit;
    Node* head;

    Stack(){
      this->index = -1;
      this->limit = 100;
      this->head = NULL;
    }

    Node* push(int num){
      if(index == -1){
        this->head = new Node(num);
        index++;
        return head;
      }else if(index == limit-1){
        cout << "Stack Overflowed !!\n";
        return head;
      }else{
        Node* newNode = new Node(num);
        newNode->next = head;
        head = newNode;
        index++;
          return head;
      }
    }

    Node* pop(){
      if(index == 0){
        delete head;
        head = NULL;
        index--;
        return head;
      }else if(index == -1){
        cout << "Stack underflowed !!\n";
        return head;
      }else{
        Node* temp = head;
        head = head -> next;
        delete temp;
        index--;
        return head;
      }
    }

     //it should be called only when the stack is not empty
    int top(){
      return head->data;
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
  cout << s.top() << endl;

  s.push(5);

  cout << "Size : " << s.size() << endl; 

  cout << s.top() << endl;

 
  s.pop();
  s.pop();

  cout << "Size : " << s.size() << endl; 

  s.pop();
  return 0;  
}
