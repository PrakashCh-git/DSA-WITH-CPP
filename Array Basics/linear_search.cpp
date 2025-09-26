#include<iostream>
using namespace std;
int main(){
    int x;
    cout<<"Enter the element which is to be searched : ";
    cin>>x;
    int arr[] = {1,8,5,3,6,7,9};

    for(int i = 0; i<7; i++){
        if(arr[i]==x){
            cout<<"Yes "<<x<<" is present";
            break;
        }
        if(i==6){
            cout<<"Element is not present";
        }
    }
    return 0;
}