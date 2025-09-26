//Brute
#include<iostream>
#include<climits>
using namespace std;
int main(){
    int arr[] = {1,5,4,6,9,11,5,2,6,10,12};
    int n = sizeof(arr)/sizeof(arr[0]);
    int k = 3;
    int max = INT_MIN;
    for(int i = 0; i<n-k; i++){
        int sum = 0;
        for(int j = i; j<i+k; j++){
            sum += arr[j];
        }
        if(max<sum)max = sum;
    }

    cout<<max;
    return 0;
}