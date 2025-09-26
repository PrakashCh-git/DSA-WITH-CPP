#include<iostream>
using namespace std;
void display(int arr[], int n){
    for(int i = 0; i<n; i++){
        cout<<arr[i];
    }
}
void change(int arr[],int n){
    arr[n-1] = 99;
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    

    return 0;
}