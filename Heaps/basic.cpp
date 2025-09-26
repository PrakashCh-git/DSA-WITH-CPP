#include<iostream>
#include<queue>
using namespace std;
int main(){
    priority_queue<int> pq; //By default MAX HEAP

    pq.push(14);
    pq.push(4);
    pq.push(-2);
    pq.push(67);
    pq.push(45);
    pq.push(81);

    cout<<pq.top();
    return 0;
}