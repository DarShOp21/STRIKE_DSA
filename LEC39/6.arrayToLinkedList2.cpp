#include<iostream>

using namespace std;

// array - 10 , 20 , 30 , 40 , 50
// linked list -  50 -> 40 -> 30 -> 20 -> 10

class Node{
  public:
    int value ;
    Node* next;

  Node(int value ){
    this->value = value;
    this->next = NULL;
  }
};

int main(){

  int arr[5] = {10 , 20 , 30 , 40 , 50};

  Node* Head = NULL;
  
  for(int i = 0 ; i < 5 ; i++){
    if(!Head){
      Head = new Node(arr[i]);
    }else{
      Node* temp = new Node(arr[i]);
      temp -> next = Head;
      Head = temp;
    }
  }
  
  while (Head) {
    cout << Head->value << "  ";
    Head = Head->next;
  }

  return 0;
  
}
