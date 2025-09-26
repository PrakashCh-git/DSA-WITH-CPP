#include<iostream>
using namespace std;

class Node{
public:
    int val;
    Node* next;

    Node(int val){
        this->val = val;
        this->next = NULL;
    }
};
int main(){
    Node* a = new Node(1);
    Node* b = new Node(2);
    Node* c = new Node(3);
    Node* d = new Node(3);
    Node* e = new Node(2);
    Node* f = new Node(1);
    a->next = b;
    b->next = c;
    c->next = d;
    d->next = e;
    e->next = f;


    return 0;
}