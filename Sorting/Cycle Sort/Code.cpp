#include<iostream>
using namespace std;
int main(){
    int arr[] = {3,2,6,4,5,1};
    int n = sizeof(arr)/sizeof(arr[0]);

    //Cycle Sort
    int i = 0;
    while(i<n){
        if(i+1==arr[i])i++;
        else{
            int x = arr[i]-1;
            int temp = arr[x];
            arr[x] = arr[i];
            arr[i] = temp;
        }
    }

    for(int i = 0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}