#include<iostream>
#include<stack>
using namespace std;
void print(stack<int> v){
    while(v.size()>0){
        cout<<v.top()<<" ";
        v.pop();
    }
    cout<<endl;
}
int main(){
    stack <int> st;
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    st.push(50);

    print(st);
    
    stack<int> gt;
    stack<int> rt;

    while(st.size()>0){
        int x = st.top();
        st.pop();
        gt.push(x);
    }
    while(gt.size()>0){
        int x = gt.top();
        gt.pop();
        rt.push(x);
    }
    while(rt.size()>0){
        int x = rt.top();
        rt.pop();
        st.push(x);
    }
    print(st);

    return 0;
}