#include<iostream>
#include<queue>
using namespace std;
int main(){
    int arr[] = {3, -4, -7, 30, 7, -9, 2, 1, 6, -1};
    int n = sizeof(arr)/sizeof(arr[0]);
    int k;
    cout<<"Enter the size of the window : ";
    cin>>k;
    queue<int> q;
    int ans[n-k+1];
    for(int i = 0; i<n; i++){
        if(arr[i]<0)q.push(i);
    }
    int i = 0;
    int j = k-1;
    while(j<=n-1){
        if(q.front()>=i && q.front()<=j)ans[i] = arr[q.front()];
        else ans[i] = 0;
        i++;
        j++;
        if(i>q.front())q.pop();
    }
    for(int i = 0; i<n-k+1; i++){
        cout<<ans[i]<<" ";
    }
    return 0;
}