#include<iostream>
#include<stack>
using namespace std;
void display(stack<int>& st){
    if(st.size()==0)return;
    int x = st.top();
    st.pop();
    display(st);
    st.push(x);
    cout<<st.top()<<" ";
}
void push_at_idx(stack<int>& st, int idx, int val){
    if(idx>=st.size()){
        cout<<"Index out of bound"<<" ";
        return;
    }
    stack<int> temp;
    while(st.size()!=idx){
        int x = st.top();
        st.pop();
        temp.push(x);
    }
    st.push(val);
    while(temp.size()!=0){
        int x = temp.top();
        temp.pop();
        st.push(x);
    }

}
void push_at_bottom(stack<int>& st, int val){
    stack<int> temp;
    while(st.size()!=0){
        int x = st.top();
        st.pop();
        temp.push(x);
    }
    st.push(val);
    while(temp.size()!=0){
        int x = temp.top();
        temp.pop();
        st.push(x);
    }
}
int main(){
    stack <int> st;
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);  
    st.push(50);
    push_at_idx(st,2,-10);
    display(st);
    return 0;
}