#include<iostream>

using namespace std;

class Node{
  public:
    int val;
    Node* next;

  Node(int num){
    this->val = num;
    this->next = NULL;
  }
};

class Queue{
  public:
    int size , capacity;
    Node* head , *curr;

  Queue(int capacity){
    this->size = 0;
    this->capacity = capacity;
    this->head = this -> curr = NULL;
  }

  bool isEmpty(){
    return !size;
  }

  bool isFull(){
    return size==capacity;
  }

  void push(int num){
    if(isEmpty()){
      head = curr = new Node(num);
      cout << num << " PUSHED TO THE QUEUE \n";
      size++;
    }else if(isFull()){
      cout << "QUEUE FULL \n";
      return;
    }else{
      curr -> next = new Node(num);
      cout << num << " PUSHED TO THE QUEUE \n";
      curr = curr -> next;
      size++;
    }
  } 

  void pop(){
    if(isEmpty()){
      cout << "QUEUE EMPTY NOTHING TO POP \n";
      return;
    }else{
      Node* temp = head;
      head = head -> next;
      size--;
      delete temp;
    }
  }

  int front(){
    if(isEmpty()){
      cout << "QUEUE IS EMPTY , NO FRONT \n";
      return -1;
    }
    return head->val;
  }

  int length(){
    return size;
  } 
};

int main(){
  Queue q(5);

  cout << q.length() << endl;

  q.push(2);  //2
  q.push(5);  //2 5

  q.pop();    //5

  q.push(3);  //5 3
  q.push(6);  //5 3 6
  q.push(8);  //5 3 6 8
  q.push(0);  //5 3 6 8 0

  q.pop();    //3 6 8 0
  q.push(11); //3 6 8 0 11

  cout << "FRONT : " << q.front() << endl;

  q.push(10);   //will not get push bcoz queue becomes full

  return 0;

}
