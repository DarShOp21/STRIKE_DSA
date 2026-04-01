class Node {
      public:
     int data;
     Node* next;
     Node(int x) : data(x), next(nullptr) {}
};

Node* intersectPoint(Node* head1, Node* head2) {
    Node* LL1 = head1, *LL2 = head2 ;
    int len1 = 0 , len2 = 0;
    
    //length of first LL
    while(LL1){
        LL1 = LL1 -> next;
        len1++;
    }

    //length of second LL
    while(LL2){
        LL2 = LL2 -> next;
        len2++;
    }
    LL1 = head1 , LL2 = head2;
    if(len1 >= len2){
        int diff = len1 - len2;
        while(diff){
            LL1 = LL1 -> next;
            diff--;
        }
    }else{
        int diff = len2 - len1;
        while(diff){
            LL2 = LL2 -> next;
            diff--;
        }
    }

    while(LL1 != LL2){
        LL1 = LL1 -> next;
        LL2 = LL2 -> next;
    }

    return LL1;
}
