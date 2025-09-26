#include<iostream>
#include<stack>
#include<queue>
using namespace std;
void display(queue<int> &q){
    int n = q.size();
    for(int i = 1; i<=n; i++){
        int x = q.front();
        cout<<q.front()<<" ";
        q.pop();
        q.push(x);
    }
    cout<<endl;
}
int main(){
    int k;
    cout<<"Enter the value of k";
    cin>>k;

    queue<int> q;
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    q.push(5);
    q.push(6);
    q.push(7);
    display(q);
    stack<int> st;
    
    for(int i=1; i<=k; i++){
        int x = q.front();
        q.pop();
        st.push(x);
    }
    while(st.size()!=0){
        int x = st.top();
        q.push(x);
        st.pop();
    }
    display(q);
    for(int i = 0; i<q.size()-k; i++){
        int x = q.front();
        q.pop();
        q.push(x);
    }
    display(q);
}