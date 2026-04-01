#include <cstddef>
#include <iostream>

using namespace std;

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
  int arr[5] = {10,20,30,40,50};

  Node* Head = NULL;
  Node* Tail = NULL;
  
  for(int i = 0 ; i < 5 ; i++){
  if(!Head){
    Head = new Node(arr[i]);      // A new Node will be created with the value of the 0th index, this node will be pointed by the Head
    Tail = Head;                  // Initially we will have a same node for Tail and Head
  }else{
    Tail->next = new Node(arr[i]);// Here the nodes will be created for the further values of the array , in which the next value of Tail will be pointing to the new Node 
    Tail = Tail->next;            // The tail is shifted to thw latest node created by getting the Tail->next value
  }
  }

  Tail = Head;
  while (Tail != NULL) {
    cout << Tail->value << "  ";
    Tail = Tail->next;
  }

  return 0;
}
