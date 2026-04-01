#include <iostream>
#include <vector>
using namespace std;

class ListNode{
  public:
  int val;
  ListNode *next;
      
  ListNode() : val(0), next(nullptr) {}
  ListNode(int x) : val(x), next(nullptr) {}
  ListNode(int x, ListNode *next) : val(x), next(next) {}
};

ListNode* sortedMerge(ListNode* head1, ListNode* head2) {

    if(!head1)
        return head2;
    if(!head2)
        return head1;
        
    ListNode* Head = new ListNode(0);
    ListNode* Tail = Head;

    while(head1 && head2){
        if(head1 -> val <= head2 -> val){
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

    ListNode* Temp = Head;
    Head = Head -> next;
    delete(Temp);

    return Head;
}

ListNode* merge(vector<ListNode*>& lists , int start , int end){
    
    if(start == end)
        return lists[start];

    int mid = start + (end - start)/2;
    ListNode* head1 = merge(lists,start,mid);
    ListNode* head2 = merge(lists,mid+1,end);

    return sortedMerge(head1,head2);
}
ListNode* mergeKLists(vector<ListNode*>& lists) {

    if(!lists.size())
        return NULL;

    return merge(lists , 0 , lists.size()-1);
}
