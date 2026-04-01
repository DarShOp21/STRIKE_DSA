// Recursion approach

#include<iostream>

using namespace std;

class ListNode {
  public:  
    int val;
    ListNode *next;
    
  ListNode() : val(0), next(nullptr) {}
  ListNode(int x) : val(x), next(nullptr) {}
  ListNode(int x, ListNode *next) : val(x), next(next) {}
};

ListNode* removeElements(ListNode* head, int val){
  if(!head)
    return head;

  head -> next = removeElements(head -> next, val);

  if(head -> val == val){
    ListNode* temp = head -> next;
    delete  head;
    return  temp;
  }

  return  head;
} 
