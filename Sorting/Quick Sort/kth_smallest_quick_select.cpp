#include<iostream>
#include<algorithm>
using namespace std;
int partition(int arr[],int si,int ei){
    //Finding the pivot index (randomise)
    int pi = (si+ei)/2;
    int count = 0;
    for(int i = si; i<=ei; i++){
        if(arr[i]==arr[pi])continue;
        else if(arr[i]<arr[pi])count++;
    }
    pi = count + si;

    int temp = arr[pi];
    arr[pi] = arr[(si+ei)/2];
    arr[(si+ei)/2] = temp;

    //Swapping the elements arcoss the pivot element   
    while(si<pi && ei>pi){
        if(arr[si]<arr[pi])si++;
        if(arr[ei]>arr[pi])ei--;
        if(arr[si]>arr[pi] && arr[ei]<arr[pi]){
            int temp = arr[si];
            arr[si] = arr[ei];
            arr[ei] = temp;
            si++; 
            ei--;
        }
    }
    return pi;
    
}
int KthElement(int arr[], int si, int ei, int k){
    int pi = partition(arr,si,ei);
    if(pi+1 == k)return arr[pi];
    else if(pi+1 > k)return KthElement(arr,si,pi-1,k);
    else return KthElement(arr,pi+1,ei,k);
}
int main(){
    int arr[] = {-8,5,1,9,56,32,2,4};
    
    int n = sizeof(arr)/sizeof(arr[0]);

    int si = 0;
    int ei = n-1;
    int k;
    cout<<"Enter the value of K : ";
    cin>>k;

    cout<<KthElement(arr,si,ei,k);

    
    return 0;
}