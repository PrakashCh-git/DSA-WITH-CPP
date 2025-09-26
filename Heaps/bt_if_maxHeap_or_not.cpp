#include<iostream>
#include<vector>
#include<queue>
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

int size(Node* root) {
    if(root == NULL) return 0;
    return 1 + size(root->left) + size(root->right);
}

bool isCBT(Node* root){
    int s = size(root);
    int count = 0;
    queue<Node*> q;
    q.push(root);
    while(count<s) {
        Node* temp = q.front();
        q.pop();
        count++;
        if(temp != NULL) {
            q.push(temp->left);
            q.push(temp->right);
        }
    }

    while(q.size()>0) {
        Node* temp = q.front();
        q.pop();
        if(temp != NULL) return false;
    }
    return true;
}

bool isMaxH(Node* root) {
    if(root == NULL) return true;
    if(root->left != NULL && root->left->val > root->val) return false;
    if(root->right != NULL && root->right->val > root->val) return false;
    return isMaxH(root->left) && isMaxH(root->right);
}
int main() {
    Node* a = new Node(20);
    Node* b = new Node(15);
    Node* c = new Node(10);
    Node* d = new Node(8);
    Node* e = new Node(11);
    Node* f = new Node(6);
    Node* g = NULL;

    a->left = b, a->right = c;
    b->left = d, b->right = e;
    c->left = f, c->right = g;

    cout<<isMaxH(a)<<endl;
    cout<<isCBT(a);

    vector<int> arr;
}