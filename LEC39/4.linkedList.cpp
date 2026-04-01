#include<iostream>

using namespace std;

class Node{
  public:
    int value;
    Node* next;

  Node(int value , Node* next){
    this->value = value;
    this->next = next;
  }
};

int main(){
  Node *temp = new Node(20,NULL);
  new Node(30 , temp);

  return 0;
}
