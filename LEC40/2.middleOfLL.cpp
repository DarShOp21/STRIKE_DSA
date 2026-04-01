#include<iostream>

class ListNode {
    public: 
      int val;
      ListNode *next;
    
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

ListNode* middleNode(ListNode* head) {
    ListNode* slow = head , *fast = head;

    while(fast->next){
        fast = fast -> next -> next;
        slow = slow -> next;
    }

    return slow;
}
