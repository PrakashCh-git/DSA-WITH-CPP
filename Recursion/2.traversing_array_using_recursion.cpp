#include<iostream>
using namespace std;
void display(int arr[], int idx, int n) {
    if(idx == n) return;
    cout<<arr[idx]<<" ";
    display(arr,idx+1,n);
}
int main() {
    int arr[] = {2,7,3,9,43,12,10,11};
    int n = sizeof(arr)/4;
    display(arr,0,n);
    return 0;
}