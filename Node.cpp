

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


int main(){

    Node* a = new Node(1);
    Node* b = new Node(2);
    Node* c = new Node(3);

    a->next = b;
    b->next = c;
}