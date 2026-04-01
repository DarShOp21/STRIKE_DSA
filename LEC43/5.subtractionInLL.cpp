#include<iostream>

using namespace std;

class Node {
  public:
    int data;
    Node *next;
    Node *random;
    Node(int x) : data(x), next(nullptr), random(nullptr) {}
};

Node* removeStartingZero(Node* head){
    while(head && head -> data == 0){
        Node* temp = head;
        head = head -> next;

        delete temp;
    }

    return head;
}

int getNumber(Node* head){
    int num = 0;
    Node* curr = head;
    while(curr){
        num += curr -> data;
        num*=10;
        curr = curr -> next;
    }
    num /= 10;

    return num;
}

Node* reverse(Node *head){

	Node* curr = head, *prev = NULL, *future;

	while(curr){
		future = curr->next;
		curr->next = prev;
		prev = curr;
		curr = future;
	}

	return prev;
}

Node* subtractLinkedLists(Node* l1, Node* l2) {

    //Remove the starting 0s
    l1 = removeStartingZero(l1);
    l2 = removeStartingZero(l2);

    //Get the value of linked list => 6 -> 3 -> NULL = 63
    int num1 = getNumber(l1);
    int num2 = getNumber(l2);

    if(num1 == num2)
        return new Node(0);

    if(num2 > num1)
        swap(l1,l2);

    l1 = reverse(l1);
    l2 = reverse(l2);

    Node* result = NULL;
    bool borrow = false;

    while(l1){
        int val1 = l1->data;
		int val2 = l2 ? l2->data:0;

		int diff = val1-val2-borrow;

		if(diff<0){
			borrow = 1;
			diff+=10;
		}
		else{
			borrow = 0;
		}

        Node* temp = new Node(diff);
		temp->next = result;
		result = temp;

        l1 = l1->next;
		if(l2){
			l2 = l2->next;
		}
    }

    return removeStartingZero(result);
}
