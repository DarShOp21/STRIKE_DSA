#include <iostream>
#include <ostream>

using namespace std;

class Node{
  public:
    int val;
    Node* prev;
    Node* next;

  Node(int num){
    this->val = num;
    this->next = this -> prev = NULL;
  }
};

class Deque{
  public:
    Node* front , *rear;
    int size;

  Deque(){
    this->size = 0;
    this->front = this -> rear = NULL;
  }

  bool isEmpty(){
    return size==0;
  }

  int length(){
    return size;
  }

  //pushBack
  void pushBack(int num){
    if(isEmpty()){
      front = rear = new Node(num);
      size++;
    }else{
      rear -> next = new Node(num);
      rear -> next -> prev = rear;
      rear = rear -> next;
      size++;
    }
  }
  
  //pushFront
  void pushFront(int num){
    if(isEmpty()){
      front = rear = new Node(num);
      size++;
    }else{
      front -> prev = new Node(num);
      front -> prev -> next = front;
      front = front -> prev;
      size++;
    }
  }

  //popFront
  void popFront(){
    if(isEmpty()){
      return;
    }else{
      if(front == rear){
        delete front;
        front = rear = NULL;
        size--;
        return;
      } 
      front = front -> next;
      delete front -> prev;
      front -> prev = NULL;
      size--;
    }
  }

  //popBack
  void popBack(){
    if(isEmpty()){
      return;
    }else{
      if(front == rear){
        delete front;
        front = rear = NULL;
        size--;
        return;
      }
      rear = rear -> prev;
      delete rear -> next;
      rear -> next = NULL;
      size--;
    }
  }

  void printQ(){
    if(isEmpty())
      return;
    Node* curr = front;
    while(curr){
      cout << curr->val << "  ";
      curr = curr->next;
    }
  }
};

int main(){
  Deque d;

  cout << d.length() << endl;

  d.popBack();

  d.pushFront(1);
  d.pushFront(2);
  d.pushBack(3);

  d.printQ();
  cout << endl;

  d.popBack();
  d.printQ();
  
}
