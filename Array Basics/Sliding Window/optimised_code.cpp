#include<iostream>
#include<climits>
using namespace std;
int main(){
    int arr[] = {1,5,4,6,9,11,5,2,6,10,12};
    int n = sizeof(arr)/sizeof(arr[0]);
    int k;

    cout<<"Enter the value of window : ";
    cin>>k;
    int max = INT_MIN;
    int currentSum = 0;
    for(int i = 0; i<k; i++){
        currentSum += arr[i];
    }
    int j = k;
    int Idx;
    while(j<n){
        currentSum = currentSum - arr[j-k] + arr[j];
        if(max<currentSum){
            max = currentSum;
            Idx = j-k+1;
        }
        j++;
    }
    cout<<max<<endl<<Idx;


    return 0;
}