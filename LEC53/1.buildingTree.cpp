#include <ios>
#include <iostream>
#include <ostream>
#include <queue>

using namespace std;

class Node{
  public:
    int data ;
    Node* left ;
    Node* right;

  Node(int data){
    this->data = data;
    this -> left = this -> right = NULL;
  }
};


// Node , Left , Right
void preOrderTraversal(Node* root){

  if(!root)
    return;

  cout << root->data << " ";
  preOrderTraversal(root->left);
  preOrderTraversal(root->right);
}

// Left Node Right
void inOrderTraversal(Node* root){
  if(!root)
    return;

  inOrderTraversal(root->left);
  cout << root -> data << " ";
  inOrderTraversal(root->right);
}

//Left Right Node
void postOrderTraversal(Node* root){
  if(!root)
    return;

  postOrderTraversal(root->left);
  postOrderTraversal(root->right);
  cout << root->data << " ";
} 

// Find level Order traversal
void levelOrderTraversal(Node* root){
  queue<Node*>q;

  q.push(root);
  while(!q.empty()){
    Node* temp = q.front();

    cout << temp->data << " ";
    if(temp->left)
      q.push(temp->left);
    if(temp->right)
      q.push(temp->right);
    q.pop();
  }
}

// Print tree: Node RIght Left
void nodeRightLeftTraversal(Node* root){
  if(!root)
    return;

  cout << root -> data << " ";
  nodeRightLeftTraversal(root->right);
  nodeRightLeftTraversal(root->left);
}

// Print tree: Right Node Left
void rightNodeLeftTraversal(Node* root){
  if(!root)
    return;

  rightNodeLeftTraversal(root->right);
  cout << root -> data << " ";
  rightNodeLeftTraversal(root->left);
}

// Print tree: Right Left Node
void rightLeftNodeTraversal(Node* root){
  if(!root)
    return;

  rightLeftNodeTraversal(root->right);
  rightLeftNodeTraversal(root->left);
  cout << root->data << " ";
}

int main(){

  int rootValue , left , right;

  queue<Node*>q;

  cout << "Enter the root value : ";
  cin >> rootValue;

  Node* root = new Node(rootValue);
  q.push(root);

  while(!q.empty()){
    Node* temp = q.front();

    //Left Node
    cout << "Enter the left node value for " << temp->data << " : ";
    cin >> left;
    if(left != -1){
      temp->left = new Node(left);
      q.push(temp->left);
    }

    //Right Node
    cout << "Enter the right node value for " << temp->data << " : ";
    cin >> right;
    if(right != -1){
      temp -> right = new Node(right);
      q.push(temp->right);
    }

    q.pop();
  }

  cout<<"Preorder Traversal: "<<" ";
  preOrderTraversal(root);
  cout<<endl;


  cout<<"inorder Traversal: "<<" ";
  inOrderTraversal(root);
  cout<<endl;
    
  cout<<"PostOrder Traversal: "<<" ";
  postOrderTraversal(root);
  cout << endl;

  cout <<"Level Order Traversal: "<<" ";
  levelOrderTraversal(root);
  cout << endl;

  cout <<"Node Right Left Traversal: "<<" ";
  nodeRightLeftTraversal(root);
  cout << endl;

  cout <<"Right Node Left Traversal: "<<" ";
  rightNodeLeftTraversal(root);
  cout << endl;

  cout <<"Right Left Node Traversal: "<<" ";
  rightLeftNodeTraversal(root);
  cout << endl;

  return 0;
}
