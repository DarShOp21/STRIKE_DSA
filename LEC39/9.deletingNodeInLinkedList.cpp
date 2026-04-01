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

  //creating the linkedlist from the array
  Node* Head = NULL;
  Node* Tail = NULL;

  for(int i = 0 ; i < 5 ; i++){
    if(!Head){
      Head = new Node(arr[i]);
      Tail = Head;
    }else{
       Tail->next = new Node(arr[i]);
       Tail = Tail->next;
    }
  }

  int valueInNode;
  cout << "Enter the value present in the Linked List so that we can add a number after the value , if you wanto stop enter -1 :  ";
  cin >> valueInNode;
  if(valueInNode == -1)
    return 0;

  Tail = Head;
  Node* Prev = NULL;
  // Node *NewNode = NULL;
  while(Tail){
    if(Tail->value == valueInNode){
      // NewNode = Tail;
      break;
    }
    Prev = Tail;
    Tail = Tail->next;
  }
  if(!Tail){
    cout << "Cannot find the value in the linked list , try another value !!!" << endl;
    main();
  }

  if(!Prev){
    Head = Head->next;
  }
  else{
    Prev->next = Tail->next;
  }

  delete Tail;

  while(Head){
    cout << Head->value << " -> ";
    Head = Head->next;
  }

  return 0;
}
