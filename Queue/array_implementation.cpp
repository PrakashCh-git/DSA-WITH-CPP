//IMPLEMENTING : PUSH, POP, FRONT, BACK, SIZE, EMPTY, DISPLAY
#include<iostream>
using namespace std;
class Queue{
private:
    int f,r;
    int* arr;
    int capacity;
public:
    Queue(int n){
        arr = new int[n];
        f = 0;
        r = 0;
        capacity = n;
    }
    void push(int x){
        if(r-f==capacity){
            cout<<"Queue is full!";
            return;
        }
        else arr[r] = x;
        r++;
    }

    void pop(){
        if(r-f==0){
            cout<<"Queue is empty!";
            return;
        }
        else f++;
    }

    int front(){
        if(r-f==0){
            cout<<"Queue is empty!";
            return -1;
        }
        else return arr[f];
    }
    
    int rear(){
        if(r-f==0){
            cout<<"Queue is empty!";
            return -1;
        }
        else return arr[r-1];
    }

    int size(){
        if(r-f==0){
            cout<<"Queue is empty!";
            return -1;
        }
        else return r-f;
    }

    void display(){
        for(int i = 0; i<r-f; i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }

};
int main(){

    Queue q(5);
    q.push(7);
    q.push(2);
    q.push(5);
    q.push(1);
    q.push(9);
    cout<<q.size();
    cout<<endl;
    q.display();
    return 0;
}