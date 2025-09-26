#include<iostream>
#include<queue>
#include<stack>
using namespace std;
void display(queue<int>& q){
    int n = q.size();
    for(int i = 1; i<=n; i++){
        int x = q.front();
        cout<<x<<" ";
        q.pop();
        q.push(x);
    }
    cout<<endl;
}
void rev(queue<int>& q){
    stack<int> val;
    while(q.size()!=0){
        val.push(q.front());
        q.pop();
    }
    while(val.size()!=0){
        q.push(val.top());
        val.pop();
    }
}
int main(){

    queue<int> q;
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    q.push(50);

    display(q);
    rev(q);
    display(q);
    return 0;
}