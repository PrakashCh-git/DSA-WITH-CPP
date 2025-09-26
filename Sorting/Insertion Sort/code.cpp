#include<iostream>
using namespace std;
int main(){
    int arr[] = {1,3,-4,5,0};
    int n = sizeof(arr)/sizeof(arr[0]);

    for(int i = 0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    //Insertion Sort Code
    for(int i = 1; i<n; i++){
        int j = i;
        while(j>0 && arr[j]<arr[j-1]){
            if(arr[j]<arr[j-1]){
                int temp = arr[j];
                arr[j] = arr[j-1];
                arr[j-1] = temp;
                j--;
            }
        }
    }

    for(int i = 0; i<n; i++){
        cout<<arr[i]<<" ";
    }

    


    return 0;
}