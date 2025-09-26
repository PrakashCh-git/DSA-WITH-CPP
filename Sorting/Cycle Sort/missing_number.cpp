//Find the missing number using cycle sort algorithm.
//Given an array nums containing n distinct numbers in the range [0, n], return the only number in the range that is missing from the array.
#include<iostream>
using namespace std;
int main(){
    int arr[9] = {8,3,6,5,2,9,7,1,4};
    int i = 0;
    while(i<9){
        if(arr[i]==i)i++;
        if(arr[i]==9)i++;
        if(arr[i]!=i){
            int x = arr[i];
            int temp = arr[x];
            arr[x] = arr[i];
            arr[i] = temp; 
        }
    }

    for(int i = 0; i<9; i++){
        if(arr[i]==i)continue;
        else{
            cout<<"Missing number : "<<i;
        }
    }
    return 0;
}