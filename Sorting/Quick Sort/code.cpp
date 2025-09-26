#include<iostream>
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
void quickSort(int arr[],int si, int ei){
    if(si>=ei)return;
    
    int pivotIdx = partition(arr,si,ei);

    quickSort(arr,si,pivotIdx-1);
    quickSort(arr,pivotIdx+1,ei);

}
int main(){
    int arr[] = {5,8,4,2,3,1,7,6};
    int n = sizeof(arr)/sizeof(arr[0]);
    int si = 0;
    int ei = n-1;
    quickSort(arr,si,ei);
    for(int i = 0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}