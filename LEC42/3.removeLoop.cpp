#include <iostream>
#include <vector>
using namespace std;

class Node{
  public:
  int data;
  Node *next;
      
  Node() : data(0), next(nullptr) {}
};

void removeLoop(Node* head) {

  if(!head || !head -> next)
    return;

  Node* slow = head , *fast = head , *prev = NULL;

  while(fast && fast -> next){
    prev = slow;
    slow = slow -> next;
    fast = fast -> next -> next;
    if(slow == fast)
      break;
  }

  if(slow != fast)
    return;

  if(fast == head){
    prev -> next = NULL;
    return;
  }

  slow = head;
  while(slow->next!=fast->next){
    slow = slow -> next;
    fast = fast -> next;
  }

  fast -> next = NULL;

  return;
}
