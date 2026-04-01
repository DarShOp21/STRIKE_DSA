#include<iostream>

using namespace std;

class Node {
  public:
    int data;
    Node *next;
    Node *random;
    Node(int x) : data(x), next(nullptr), random(nullptr) {}
};


void addSameNodeToNext(Node* head){
    if(!head)
        return;

    Node* curr = head;
    while(curr){
        Node* newNode = new Node(curr -> data);
        newNode -> next = curr -> next;
        curr -> next = newNode;
        
        curr = newNode -> next;
    }
}

void pointRandomNodes(Node* head){
    if(!head)
        return;

    Node* curr = head;
    while(curr){
        if(curr -> random)
            curr -> next -> random = curr -> random -> next;
        curr = curr -> next -> next;
    }
}

Node* removeOgNodes(Node* head){
    if(!head)
        return head;

    Node* newHead = head -> next;
    Node* curr = head;
    Node* temp = head->next;

    while(curr){    
        curr -> next = temp -> next;
        curr = temp -> next;

        if(curr){
            temp -> next = curr -> next;
            temp = curr -> next;
        }
    }

    return newHead;
}

Node* cloneLinkedList(Node* head) {

    if(!head)
        return head;

    addSameNodeToNext(head);

    pointRandomNodes(head);

    return removeOgNodes(head);
}
