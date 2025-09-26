#include<iostream>
using namespace std;
class Node{
public:
    int val;
    Node* next;
    Node(int n){
        val = n;
        next = NULL;
    }
};
class Queue{
private:
    Node* head;
    Node* tail;
    int front;
    int rear;
public:
    Queue(){
        head = NULL;
        tail = NULL;
        front = 0; 
        rear = 0;
    }

    void push(int x){
        Node * N = new Node(x);
        if(rear-front==0){
            tail = head = N;
        }
        else{
            tail->next = N;
            tail = N;
        }
        rear++;
    }

    void pop(){
        if(rear-front==0){
            cout<<"Linked List is Empty!";
            return;
        }
        else{
            front++;
            head = head->next;
        }
    }

    int size(){
        if(rear-front==0){
            cout<<"Linked List is Empty!";
            return -1;
        }
        else{
            return rear-front;
        }
    }
    void display(){
        Node* temp = head;
        while(temp!=NULL){
            cout<<temp->val<<" ";
            temp = temp->next;
        }
        cout<<endl;
    }


};
int main(){

    Queue q;
    q.push(5);
    q.push(2);
    q.push(1);
    q.push(6);
    q.push(7);
    q.push(9);

    q.display();
    q.pop();
    q.display();


    return 0;
}