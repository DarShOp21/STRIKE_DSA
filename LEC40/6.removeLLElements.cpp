#include <iostream>

using namespace std;

class ListNode {
  public:
    int val;
    ListNode *next;

  ListNode() : val(0), next(nullptr) {}
  ListNode(int x) : val(x), next(nullptr) {}
  ListNode(int x, ListNode *next) : val(x), next(next) {}
};

ListNode* removeElements(ListNode* head, int val) {
    ListNode* dummy = new ListNode(-1,head);

    ListNode* curr = dummy;
    while(curr -> next){
        if(curr->next->val == val){
            ListNode* toDelete = curr -> next;
            curr->next = toDelete -> next;
            delete toDelete;
        }else{
            curr = curr -> next;
        }
    }

    return dummy->next;
}
