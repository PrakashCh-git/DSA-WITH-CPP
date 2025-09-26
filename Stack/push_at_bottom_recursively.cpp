#include<iostream>
#include<stack>
using namespace std;
void displayRev(stack<int>& s){
    if(s.size()==0){
        return;
    }
    int x = s.top();
    cout<<x<<" ";
    s.pop();
    displayRev(s);
    s.push(x);
}
void push_at_bottom(stack<int>& s, int val){
    if(s.size()==0){
        s.push(val);
        return;
    }
    int x = s.top();
    s.pop();
    push_at_bottom(s,val);
    s.push(x);
}
int main(){
    stack<int> st;
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    st.push(50);

    displayRev(st);
    cout<<endl;
    push_at_bottom(st,90);
    displayRev(st);

    return 0;
}