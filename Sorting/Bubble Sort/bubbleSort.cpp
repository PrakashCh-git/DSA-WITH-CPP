#include<iostream>
using namespace std;
int main(){
    int arr[] = {5, -4, 0, 3, 26, 1, 99, -80};

    int n = 8;
    for(int i = 0; i<8; i++){
        cout<<arr[i]<<" ";
    }
    
    //for(int i = 0; i<n-1; i++){
    //  for(int j = 0; j < n-1-i; j++){
    //       if(arr[j]>arr[j+1]){
    //           swap(arr[j],arr[j+1]);
    //       }
    //    }
    //}
    bool flag = true;
    //Bubble Sort Optimised
    for(int i = 0; i<n-1; i++){
        for(int j = 0; j < n-1-i; j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
                flag = false;
            }
        }
        if(flag==true)break;
    }
    cout<<endl;
    for(int i = 0; i<8; i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}