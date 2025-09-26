#include<iostream>
#include<queue>
using namespace std;

int main() {
    int arr[] = {1, 7, -6, 2, 6, 81, 144, 67, 32, 9};
    int k = 3;
    priority_queue< int, vector<int>, greater<int> > pq; // maxHeap

    for(int i = 0; i < 10; i++) {
        pq.push(arr[i]);
        if(pq.size()>k) pq.pop();
    }
    
    cout<<pq.top();
}