#include<iostream>
using namespace std;
class stack{
private:
    int* arr;
    int capacity;
    int idx;
public:
    stack(int size){
        arr = new int[size];
        capacity = size;
        idx = -1;
    }

    void push(int val){
        if(idx==capacity-1){
            cout<<"Stack is full";
            return;
        }
        idx++;
        arr[idx] = val;
    }

    void pop(){
        if(idx==-1){
            cout<<"Stack is empty!";
            return;
        }
        idx--;
    }

    int top(){
        if(idx==-1){
            cout<<"Stack is empty!";
            return -1;
        }
        return arr[idx];
    }

    int size(){
        if(idx==-1)return 0;
        else return idx+1;
    }

    void display(){
        for(int i = 0; i<=idx; i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }
};
int main(){
    stack st(5);
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);  
    st.push(50);

    int x = st.size();

    cout<<x;

    return 0;
}