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
void preorder(Node* root){
    if(root==NULL)return;
    cout<<root->val<<" ";//Work
    preorder(root->left);//First Call
    preorder(root->right);//Second Call
}

void inorder(Node* root){
    if(root==NULL)return;
    preorder(root->left);//First Call
    cout<<root->val<<" ";//Work
    preorder(root->right);//Second Call
}

void postorder(Node* root){
    if(root==NULL)return;
    preorder(root->left);//First Call
    preorder(root->right);//Second Call
    cout<<root->val<<" ";//Work
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

    preorder(a);
    return 0;
}