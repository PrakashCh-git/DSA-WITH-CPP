#include<iostream>
using namespace std;
int main(){
    int arr[] = {1,4,7,8,2,9,12,3,5};
    int max = arr[0];
    for(int i = 0; i<9; i++){
        if(max<arr[i]) max = arr[i];
    }
    cout<<max;
    return 0;
}