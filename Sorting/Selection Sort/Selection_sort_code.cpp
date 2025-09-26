#include<iostream>
#include<climits>
using namespace std;
int min(int arr[],int i,int n){
    int m = INT_MAX;
    int idx;
    for(int k = i; k<n; k++){
        if(arr[k]<m){
            m = arr[k];
            idx = k;
        }
    }
    return idx;
}
int main(){
    int arr[] = {5,3,1,4,2};

    for(int i = 0; i<5; i++){
        int x = min(arr,i,5);

            int temp = arr[i];
            arr[i] = arr[x];
            arr[x] = temp; 
    }
    for(int i= 0; i<5; i++){
        cout<<arr[i]<<" ";
    }
    
    return 0;
}