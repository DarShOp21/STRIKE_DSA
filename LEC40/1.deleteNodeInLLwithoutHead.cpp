#include <iostream>

class ListNode{
  public:
    int val;
    ListNode* next;

    ListNode(int x){
      this->val = x;
      this->next = NULL;
    }
};

void deleteNode(ListNode *node){
  ListNode* nextNode = node -> next;

  node -> val = nextNode -> val;
  if(nextNode -> next)
    node -> next = nextNode -> next;

  delete node;
}

int main(){

}
