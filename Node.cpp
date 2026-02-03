

#include<iostream>
using namespace std;


class Node{
public:

    int val;
    Node* next;

    Node(int val){
        this->val = val;
        next = NULL;
    }
};

void insertAtTail(Node* &head, int val){

    if(!head) {
     Node* temp =  new Node(val);
     return;
    }


    Node* t = head;

    while(t->next != NULL){
        t = t->next;
    }

    Node* x = new Node(val);
    t->next = x;
    return;


}


int main(){

    Node* a = new Node(1);
    Node* b = new Node(2);
    Node* c = new Node(3);

    a->next = b;
    b->next = c;

    insertAtTail(a,10);

    Node* t = a;
    while(t){
        cout<<t->val<<" ";
        t = t->next;
    }
}