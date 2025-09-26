#include<iostream>
using namespace std;
class Node{
public:
    int val;
    Node* prev;
    Node* next;

    Node(int val){
        this->val = val;
        this->prev = NULL;
        this->next = NULL;
    }
};
class DLinkedList{
public:
    Node* head;
    Node* tail;
    int size;
    
    DLinkedList(){
        head = tail = NULL;
        size = 0;
    }
    //Forward Display
    void display(){
        Node* temp = head;
        while(temp){
            cout<<temp->val<<" ";
            temp = temp->next;
        }
        cout<<endl;
    }
    //Reverse Display
    void revDisplay(){
        Node* temp = tail;
        while(temp){
            cout<<temp->val<<" ";
            temp = temp->prev;
        }
    }

    void Insert_At_Tail(int val){
        Node* t = new Node(val);
        if(size==0)head = tail = t;
        else{
            t->prev = tail;
            tail->next = t;
            t->next = NULL;
            tail = t;
        }
        size++;
    }

    void Insert_At_Head(int val){
        Node* t = new Node(val);
        if(size==0)head = tail = t;
        else{
            head->prev = t;
            t->next = head;
            t->prev = NULL;
            head = t;
        }
        size++;

    }
    void Insert_At_Idx(int idx, int val){
        if(idx<0 || idx>size){
            cout<<"Index is out of bound";
            return;
        }
        if(idx==0)Insert_At_Head(val);
        else if(idx==size)Insert_At_Tail(val);
        else{
            Node* t = new Node(val);
            Node* temp = head;
            for(int i = 1; i<idx; i++){
                temp = temp->next;
            }
            t->prev = temp;
            t->next = temp->next;
            temp->next->prev = t;
            temp->next = t;
        }
        size++;
    }
};
int main(){
    DLinkedList Arr;

    Arr.Insert_At_Tail(10);
    Arr.Insert_At_Tail(20);
    Arr.Insert_At_Tail(30);
    Arr.Insert_At_Tail(40);
    Arr.Insert_At_Tail(50);

    Arr.Insert_At_Head(90);

    
    Arr.Insert_At_Idx(2,70);
    
    Arr.display();
    


    return 0;
}