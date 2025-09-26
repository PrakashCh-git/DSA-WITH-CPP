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
    //Filling the values in the nodes
    Node a(10);
    Node b(20);
    Node c(30);
    Node d(40);
    Node e(50);

    //Linking the Nodes
    a.next = &b;
    b.next = &c;
    c.next = &d;
    d.next = &e;

    //Accessing the value of b from a.
    //cout<<(*(a.next)).val; // *(a.next) = b;
    
    cout<<endl;

    //Accessing the value of d from a. // -> = *().
    //cout<<(((a.next)->next)->next)->val;


    //Using a loop to print the vlaues in the linked list
    Node temp = a;
    while(1){
        cout<<temp.val<<" ";
        if(temp.next==NULL)break;
        temp = *(temp.next);
    }


    
    return 0;
}