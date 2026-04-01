#include<iostream>

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

  while(Tail){
    if(Tail->value == valueInNode){
      // NewNode = Tail;
      break;
    }
    Prev = Tail;
    cout << Prev->value << " ";
    Tail = Tail->next;
  }
  if(!Tail){
    cout << "Cannot find the value in the linked list , try another value !!!" << endl;
    main();
  }

  int newValue;
  cout << "Enter the value to add : ";
  cin >> newValue;

  Node* newNode = new Node(newValue);
  newNode->next = Tail;
  if(Prev){
    Prev->next = newNode;
  }else{
    Head = newNode;
  }

  Tail = Head;
  while(Tail){
    cout << Tail->value << " -> ";
    Tail = Tail->next;
  }

  return 0;

}
