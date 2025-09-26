//Deque is doubly linked list in which push and pop opereation can be done from both the ends.
// IMPLEMENT : addFront(), addRear(), getFront(), getRear(),deleteFront(), deleteRear(), size()
#include<iostream>
using namespace std;
class Node{
public:
    int val;
    Node* next;
    Node* prev;

    Node(int x){
        val = x;
        next = NULL;
        prev = NULL;
    }
};

class Deque{
private:
    Node* head;
    Node* tail;
    int size;
public:
    Deque(){
        head = NULL;
        tail = NULL;
        size =  0;
    }

    void addFront(int n){
        Node* temp = new Node(n);
        if(size==0){
            head = tail = temp;
        }
        else{
            temp->next = head;
            head->prev = temp;
            head = temp;
        }
        size++;
    }

    void addRear(int n){
        Node* temp = new Node(n);
        if(size==0){
            head = tail = temp;
        }
        else{
            temp->prev = tail;
            tail->next = temp;
            tail = temp;
        }
    }

    int getFront(){
        if(size==0){
            cout<<"Deque is empty!";
            return -1;
        }
        else return head->val;
    }

    int getRear(){
        if(size==0){
            cout<<"Deque is empty!";
            return -1;
        }
        else return tail->val;
    }

    void deleteFront(){
        if(size==0){
            cout<<"Deque is empty!";
            return;
        }
        else{
            Node * temp = head;
            head = head->next;
            head->prev = NULL;
            delete(temp);
        }
    }

    void deleteRear(){
        if(size==0){
            cout<<"Deque is empty!";
            return;
        }
        else{
            Node* temp = tail;
            tail = tail->prev;
            tail->next = NULL;
            delete(temp);
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
    Deque q;
    q.addFront(1);
    q.addRear(2);
    q.addRear(3);
    q.addRear(4);
    q.addRear(5);

    q.display();
    q.deleteFront();
    q.display();
    q.deleteRear();
    q.display();
    return 0;
}