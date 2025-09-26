#include<iostream>
using namespace std;
int main(){
    int arr[] = {1,2,3,4,5,10,5};
    int n = sizeof(arr)/sizeof(arr[0]);
    
    for(int i = 1; i<n; i++){
        arr[i] += arr[i-1];
    }
    bool flag = false;
    int x=0;
    for(int i = 0; i<n; i++){
        if(2*arr[i]==arr[n-1]){
            flag = true;
            x = i;
        }
    }

    if(flag==true)cout<<"It can be partitioned : "<<"index"<<" "<<x;
    else cout<<"It cannot be partitioned";

    return 0;
}