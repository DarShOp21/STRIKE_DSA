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

ListNode* reverseList(ListNode* head) {
    ListNode* prev = NULL , *curr = head , *future = NULL;
    while(curr){
        future = curr -> next;
        curr -> next = prev;
        prev = curr;
        curr = future;
    }
    return prev;
}

bool isPalindrome(ListNode* head) {

    if(head == NULL || head -> next == NULL)
        return true;

    ListNode* slow = head;
    ListNode* fast = head;

    while(fast->next && fast -> next -> next){
        slow = slow -> next;
        fast = fast -> next -> next;
    }

    ListNode* newHead = reverseList(slow->next);

    ListNode *first = head , *second = newHead;

    while(second){
        if(first->val != second->val){
            reverseList(newHead);
            return false;
        }

        first = first -> next;
        second = second -> next;
    }

    reverseList(newHead);
    return true;    
}
