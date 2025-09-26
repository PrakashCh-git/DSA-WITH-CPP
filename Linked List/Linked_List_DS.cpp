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
class LinkedList{
public:
    Node* head;
    Node* tail;
    int size;
    LinkedList(){
        head = tail = NULL;
        size = 0;
    }
    //Display function
    void display(){
        Node* temp = head;
        while(temp!=NULL){
            cout<<temp->val<<" ";
            temp = temp->next;
        }
        cout<<endl;
    }
    //Insertion at end Method
    void Insert_at_end(int val){
        Node* temp = new Node(val);
        if(size==0)head = tail = temp;
        else{
            tail->next = temp;
            tail = temp;
        }
        size++;
    }

    //Insertion at the Begining Method
    void Insert_at_begining(int val){
        Node* temp = new Node(val);
        if(size==0)head = tail = temp;
        else{
            temp->next = head;
            head = temp;
        }
        size++;
    }
    //Insertion at any IDX
    void Inset_at_idx(int idx, int val){
        if(idx==0)Insert_at_begining(val);
        else if(idx==size)Insert_at_end(val);
        else if(idx<0 || idx>size)cout<<"Invalid idx";
        else{
            Node* temp = head;
            Node* N = new Node(val);

            for(int i = 1; i <= idx-1; i++){
                temp = temp->next; 
            }
            N->next = temp->next;
            temp->next = N;
        }
        size++;
    }

    //Creating get function
    int get(int idx){
        Node* temp = head;

        for(int i = 1; i<=idx; i++){
            temp = temp->next;  
        }
        return temp->val;
    }

    // Delete at head
    void deleteHead(){
        if(size==0){
            cout<<"List is Empty!";
        }
        else if(size==1){
            head = tail = NULL;
            size--;
        }
        else{
            head = head->next;
            size--;
        }
    }
    //Delete at Tail
    void deleteTail(){
        if(size==0){
            cout<<"List is Empty!";
            return;
        }
        else if(size==1){
            head = tail = NULL;
            size--;
        }
        else{
            Node* temp = head;
            while(temp->next != tail){
                temp = temp->next;
            }
            temp->next = NULL;
            tail = temp;
            size--;
        }
    }
    //Delete at Index
    void deleteIdx(int idx){
        if(size==0)cout<<"List is Empty!";
        else if(idx<0 || idx>size)cout<<"Invalid Index";
        else if(idx==0)deleteHead();
        else if(idx==size-1)deleteTail();
        else{
           Node* temp = head;
           for(int i = 1; i<=idx-1; i++){
            temp = temp->next;
           }
           temp->next = (temp->next)->next;
           size--;
        }
    }

};
int main(){

    LinkedList Arr;

    Arr.Insert_at_begining(1);
    Arr.Insert_at_begining(2);
    Arr.Insert_at_begining(3);
    Arr.Insert_at_begining(4);
    Arr.Insert_at_begining(5);
    

    Arr.display();
    cout<<Arr.get(3);
    Arr.deleteIdx(3);
    Arr.display();
    


    return 0;
} 