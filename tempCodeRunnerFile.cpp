#include<iostream>
#include<algorithm>
using namespace std;
void print(int arr[], int n) {
    for(int i = 1; i<n; i++) {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

void heapify(int arr[], int i, int n){
        int k = i;
        int left = i*2;
        int right = i*2+1;
        while(true){
            if(left >= n) break;
            if(right >= n) {
                if(arr[k] < arr[left]){
                    swap(arr[k], arr[left]);
                } 
                break;
            }
            if(arr[left] < arr[right]) {
                if(arr[k] > arr[left]){
                    swap(arr[k], arr[left]);
                    k = left;
                }
                else break; 
            }else {
                if(arr[k] > arr[right]){
                    swap(arr[k], arr[right]);
                    k = right;
                }
                else break; 
            }
        }
}
int main(){
    int arr[] = {-1,6,7,2,17,23,9,19};
    int n = sizeof(arr)/sizeof(arr[0]);

    print(arr,n);

    for(int i = n/2; i>=1; i--){
        heapify(arr,i,n);
    }

    print(arr,n);

    return 0;
}