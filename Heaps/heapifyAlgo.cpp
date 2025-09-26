#include<iostream>
using namespace std;

void heapify(int arr[], int i, int n) {
    while(true){
        int left = 2*i;
        int right = 2*i + 1;

        if(left >= n) break;
        if(right >= n) {
            if(arr[i] > arr[left]) {
                swap(arr[i], arr[left]);
                i = left;
            }
            break;
        }
        if(arr[left]<arr[right]){
            if(arr[i]>arr[left]){
                swap(arr[i], arr[left]);
                i = left;
            }else break;
        }else{
            if(arr[i]>arr[right]){
                swap(arr[i], arr[right]);
                i = right;
            }else break;
        }
    }
}

void print(int arr[], int n){
    for(int  i = 1; i < n; i++) {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int main() {
    int arr[] = {-1, 6, 7, 2, 17, 23, 9, 19};
    int n = sizeof(arr)/4;

    print(arr, n);
    
    for(int i = n/2; i >= 1; i--) {
        heapify(arr, i, n);
    }
    print(arr, n); 
}