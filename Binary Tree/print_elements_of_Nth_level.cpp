#include<iostream>
using namespace std;
class Node{
public:
    Node* left;
    Node* right;
    int val;

    Node(int val){
        this->val = val;
        this->left = NULL;
        this->right = NULL;
    }

};
void printNthlevel(Node* root, int level, int curr){
    if(root==NULL)return;
    if(curr==level)cout<<root->val<<" ";
    printNthlevel(root->left, level, curr+1);
    printNthlevel(root->right, level, curr+1);
}
int main(){
    Node* a = new Node(10);
    Node* b = new Node(20);
    Node* c = new Node(30);
    Node* d = new Node(40);
    Node* e = new Node(50);
    Node* f = new Node(60);
    Node* g = new Node(70);

    a->left = b;
    a->right = c;
    b->left = d;
    b->right = e;
    c->left = f;
    c->right = g;


    printNthlevel(a,3,1);

    return 0;
}