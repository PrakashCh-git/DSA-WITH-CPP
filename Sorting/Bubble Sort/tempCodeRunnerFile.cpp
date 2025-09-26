//Push the zeroes to the end while maintaining the relative order of the other elements.
#include<iostream>
using namespace std;
int main(){
    int arr[] = {5,0,1,2,0,0,4,0,3};

    for(int i = 0; i<9; i++){
        cout<<arr[i]<<" ";
    }
    bool flag = true;
    for(int i = 0; i<8; i++){
        for(int j = 0; j<8-i; j++){
            if(arr[j]==0&&arr[j+1]!=0){
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1]= temp;
                flag = false;
            }
        }
        if(flag == true)break;
    }
    cout<<endl;
    for(int i = 0; i<9; i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}
