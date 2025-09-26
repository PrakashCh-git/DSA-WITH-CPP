#include<iostream>
#include<vector>
using namespace std;
class Node{
    public:
    int val;
    Node* left;
    Node* right;
    Node(int val){
        this->left = NULL;
        this->right = NULL;
        this->val = val;
    }
};

void preorder(Node* root, vector<int>& arr, int i){


}

void inorder(Node* root, vector<int>& arr){
    if(root==NULL) return;

    inorder(root->right, arr);
    arr.push_back(root->val);
    inorder(root->left, arr);
}

int main() {
    Node* a = new Node(10);
    Node* b = new Node(5);
    Node* c = new Node(16);
    Node* d = new Node(1);
    Node* e = new Node(8);
    Node* f = new Node(12);
    Node* g = new Node(20);

    a->left = b, a->right = c;
    b->left = d, b->right = e;
    c->left = f, c->right = g;

    vector<int> arr;

    inorder(a, arr);

    for(int i = 0; i < arr.size(); i++) {
        cout<<arr[i]<<" ";
    }
    preorder(a, arr, 0);
}