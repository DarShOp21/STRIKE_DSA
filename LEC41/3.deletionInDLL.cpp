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

Node* deletion(Node* head , int index , int currIndex){

  if(currIndex == index){
    if(index == 0){
      Node* temp = head;
      head = head -> next;
      head -> prev = NULL;
      delete(temp);
      // return head;
    }else if(!head -> next){
      head->prev->next = NULL;
      delete(head);
    }else{
    Node* temp = head;
    temp->prev->next = temp->next;
    temp->next->prev = temp->prev;
    delete(temp);
    }
    return head;
    // return head;
  }

  deletion(head->next, index, currIndex+1);

  return head;
}

Node* DeleteNode(Node* head , int index){
  return deletion(head,index,0);
}

int main(){
  int arr[5] = {10,20,30,40,50};
  
  Node* head = arrToDll(arr);

  int index = 4;

  head = DeleteNode(head, index);

  print(head);

  return 0;
}
