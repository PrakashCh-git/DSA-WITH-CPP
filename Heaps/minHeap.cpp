#include<iostream>
#include<queue>
using namespace std;
int main() {
    priority_queue< int ,vector<int>, greater<int> > pq;

    pq.push(12);
    pq.push(-5);
    pq.push(87);
    pq.push(-6);
    pq.push(2);

    cout<<pq.top();
    
    return 0;

}