#include<iostream>
#include<stack>
using namespace std;
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
void reverse(stack<int>& st){
    if(st.size()==1)return;
    int x = st.top();
    st.pop();
    reverse(st);
    push_at_bottom(st,x);
}
void display(stack<int>& st){
    if(st.size()==0)return;
    int x = st.top();
    st.pop();
    display(st);
    st.push(x);
    cout<<st.top()<<" ";
}
int main(){
    stack <int> st;
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);  
    st.push(50);
    display(st);
    cout<<endl;
    reverse(st);
    display(st);
    return 0;
}