#include<iostream>
#include<algorithm>
using namespace std;

class MinHeap{
private:
    int idx;
    int* arr;
    int capacity;

public: 
    MinHeap(int size){
        this->idx = 1;
        this->arr = new int[size];
        this->capacity = size;
    }

    int top() {
        if(idx == 1) {
            cout<<"Heap is empty";
            return -1;
        }
        return arr[idx-1];
    }

    int size(){
        if(idx == 1) return 0;
        else return idx-1;
    }

    void push(int val) {
       if(idx-1 == capacity) {
           cout<<"Heap is full"; 
       }
       else{
           arr[idx] = val;
           idx++;
           int i = idx-1;
           
           while(i != 1){
               int parent = i/2; 
               if(arr[i]<arr[parent]){
                   swap(arr[i], arr[parent]);    
               }
               else break;  
               i = i/2;  
           }
       }
    }

    void pop(){
        if(idx == 1){
            cout<<"Heap is empty";
            return;
        }
        else{
            arr[1] = arr[idx-1];
            idx--;

            while(true) {
                int i = 1; 
                int left = 2*i ,right = 2*i+1;

                if(left>idx-1) break;
                if(right>idx-1) {
                    if(arr[i]>arr[left]){
                        swap(arr[i], arr[left]);
                    }
                    break;
                }

                if(arr[left]<arr[right]) {
                    if(arr[i]>arr[left]){
                        swap(arr[i], arr[left]);
                        i = left;
                    }
                    else break;
                }else {
                    if(arr[i]>arr[right]){
                        swap(arr[i], arr[right]);
                        i = right;
                    }
                    else break;
                }

            }

        }

    }

    void display() {
        for(int i = 1; i < idx; i++) {
            cout<<arr[i]<<" ";
        }
    }
};

int main() {

    MinHeap pq(50);

    pq.push(32);
    pq.push(2);
    pq.push(23);
    // pq.pop();
    pq.push(1);
    // pq.pop();
    
    pq.push(12);
    pq.push(5);
    pq.push(6);

    pq.display();


}