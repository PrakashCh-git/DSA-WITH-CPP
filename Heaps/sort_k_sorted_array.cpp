#include<iostream>
#include<vector>
#include<queue>
using namespace std;
int main() {
    int arr[] = {6, 5, 3, 2, 8, 10, 9};
    int k = 3;
    int n = sizeof(arr)/4;
    vector<int> v(n, 0);
    int j = 0; 
    priority_queue< int ,vector<int>, greater<int> > pq;
    for(int i = 0; i < n; i++) {
        pq.push(arr[i]);

        if(pq.size() > k) {
            v[j] = pq.top();
            pq.pop();
            j++;
        }
    }
    while(pq.size()>0) {
        v[j] = pq.top();
        pq.pop();
        j++;
    }

    for(int i = 0; i < n; i++) {
        cout<<v[i]<<" ";
    }
    return 0;

}