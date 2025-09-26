//Given an array containg n+1 elements with elements belong to [1,n]. Find the duplicate number.
#include<iostream>
using namespace std;
int findDuplicate(int arr[], int n){
    int i = 0;
    while(i<n){
        int correctIdX = arr[i];
        if(arr[i]==arr[correctIdX])return arr[i];
        else{
            int temp = arr[i];
            arr[i] = arr[correctIdX];
            arr[correctIdX] = arr[i];
        }
    }
    return 100;
}
int main(){
    int arr[5] = {1,3,2,4,2};
    int i = 0;
    int  x = findDuplicate(arr,5);
    cout<<x;
    return 0;
}