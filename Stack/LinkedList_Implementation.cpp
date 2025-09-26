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
class stack{
public:
    Node* head;
    int size;

    stack(){
        head = NULL;
        size = 0;
    }

    void push(int val){
        Node* temp = new Node(val);
        temp->next = head;
        head = temp;
        size++;
    }

    void pop(){
        if(size==0){
            cout<<"LL is empty";
            return;
        }
        else{
            head = head->next;
            size--;
        }
        
    }

    int top(){
        if(size==0){
            cout<<"LL is empty";
            return -1;
        }
        else return head->val;   
    }
    void print(Node* temp){
        if(temp==NULL) return;
        print(temp->next);
        cout<<temp->val<<" ";
    }
    void display(){
        print(head);
        cout<<endl;
    }

};
int main(){
    stack st;
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);  
    st.push(50);

    st.display();
    return 0;
}