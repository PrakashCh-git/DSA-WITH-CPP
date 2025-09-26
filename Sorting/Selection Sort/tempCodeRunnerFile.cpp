#include<iostream>
#include<vector>
#include<climits>
using namespace std;
int main(){
    int arr[] = {1,44,3,4,2,5,7,9};
    int count = 0;
    for(int i = 0; i<8; i++){
        cout<<arr[i]<<" ";
    }
    //Replacement
    for(int i = 0; i<8; i++){
        int min = INT_MAX;
        int mindx;
        for(int j = 0; j<8; j++){
            if(arr[j]<=0)continue;
            if(min>arr[j]){
                min = arr[j];
                mindx = j;
            }    
        }
        arr[mindx] = -(count);
        count++;
    }
    cout<<endl;
    for(int i = 0; i<8; i++){
        arr[i] = arr[i]*-1;
        cout<<arr[i]<<" ";
    }
    return 0;
}