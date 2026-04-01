#include <cstddef>
#include<iostream>
#include <vector>

using namespace std;

class Node{
  public:
    Node* prev;
    int val;
    Node* next;

  Node(int x){
    this->val = x;
    this->next = this->prev = NULL;
  }
};

Node* arrToDll(int arr[]){
  Node* head = NULL , *tail = NULL;
  for(int i = 0 ; i < 5 ; i++){
    if(!head){
      head = new Node(arr[i]);
      tail = head;
    }else{
      Node* temp = new Node(arr[i]);
      tail -> next = temp;
      temp->prev = tail;
      tail = temp;
    }
  }

  return head;
}

void print(Node* head){
  Node* tail = head;
  while(tail){
    cout << tail->val << " ";
    tail = tail->next;
  }
}

int main(){
  int arr[5] = {10,20,30,40,50};
  
  Node* head = arrToDll(arr);

  print(head);

  return 0;
}
