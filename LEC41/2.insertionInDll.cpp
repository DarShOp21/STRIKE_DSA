#include <iostream>

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


void insertion(Node* head, int p, int x , int index){

    if(!head)
        return;

    if(index == p){
        Node* newNode = new Node(x);
        newNode -> next = head -> next;
        newNode -> prev = head;
        head -> next = newNode;
        newNode -> next -> prev = newNode;
        return;
    }

    insertion(head->next , p , x , index+1 );
}

Node* addNode(Node* head, int p, int x) {
    Node* temp = head;
    insertion(temp , p , x , 0);

    return head;
}

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
