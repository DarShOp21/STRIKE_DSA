#include<iostream>

using namespace std;

class Node {
  public:
    int data;
    Node *next;
    Node *random;
    Node(int x) : data(x), next(nullptr), random(nullptr) {}
};

Node* cloneNextList(Node* head){

     if(!head)
         return head;

     Node* clonedHead = new Node(head -> data);
     Node* clonedCurr = clonedHead;
     Node* curr = head->next;
     while(curr){
         clonedCurr -> next = new Node(curr -> data);
         curr = curr -> next;
         clonedCurr = clonedCurr -> next;
     }        
     return clonedHead;
 }

 Node* clonedRandomList(Node* head , Node* clonedHead ){
     Node* curr = head;
     Node* clonedCurr = clonedHead;

     while(curr){
         if(curr -> random == NULL)
             clonedCurr -> random = NULL;
         else{
             Node* temp = head;
             Node* tempClone = clonedHead;

             while(temp != curr->random){
                 temp = temp->next;
                 tempClone = tempClone->next;
             }
             clonedCurr->random = tempClone;
         }
         curr = curr -> next;
         clonedCurr = clonedCurr -> next;
     }

     return clonedHead;
 }
