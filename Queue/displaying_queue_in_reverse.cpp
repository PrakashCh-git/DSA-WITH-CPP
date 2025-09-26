#include<iostream>
#include<queue>
using namespace std;
void displayRev(queue<int> &q){
    if(q.size()==0)return;
    int x = q.front();
    q.pop();
    displayRev(q);
    cout<<x<<" ";
}
int main(){

    queue<int> q;
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    q.push(50);

    displayRev(q);

    return 0;
}