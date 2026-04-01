#include <iostream>
#include <vector>
using namespace std;

class Node{
  public:
  int data;
  Node *next;
      
  Node() : data(0), next(nullptr) {}
  Node(int x) : data(x), next(nullptr) {}
  Node(int x, Node *next) : data(x), next(next) {}
};

Node* sortedMerge(Node* head1, Node* head2) {
    Node* Head = new Node(0);
    Node* Tail = Head;

    while(head1 && head2){
        if(head1 -> data <= head2 -> data){
            Tail->next = head1 ;
            head1 = head1 -> next;
        }else{
            Tail->next = head2 ;
            head2 = head2 -> next;
        }
        Tail = Tail -> next;
        Tail -> next = NULL;
    }

    if(head1){
        Tail -> next = head1;
    }else{
        Tail -> next = head2;
    }

    Node* Temp = Head;
    Head = Head -> next;
    delete(Temp);

    return Head;
}
