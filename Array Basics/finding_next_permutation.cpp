#include<iostream>
#include<vector>
using namespace std;
void reverse(vector <int> & v, int x, int y){
    int temp; 
    while(x<=y){
        int temp = v[x];
        v[x] = v[y];
        v[y] = temp;
        x++;
        y--;
    }
}
void swap(vector <int> &v, int x, int y){
    int temp;
    temp = v[x];
    v[x] = v[y];
    v[y] = temp;
}
int main(){
    int n;
    cout<<"Enter the digits of the number : ";
    cin>>n;
    vector <int> v(n);
    
    cout<<"Enter the number : ";
    for(int i = 0; i<n; i++){
        cin>>v[i];
    }
    
    //Finding the pivot element
    int idx = -1;
    for(int i = n-2; i>=0; i--){
        if(v[i]<v[i+1]){
            idx = i; 
            break;
        }
    }

    if(idx == -1){
        reverse(v,0,n-1);
    }
    
    //Sorting in ascending order
    reverse(v,idx+1,n-1);

    //Finding the just greater number than the pivot number.
    int x;
    for(int i = idx + 1; i<n; i++){
        if(v[i]>v[idx]){
            x = i;
            break;
        }
    }
    
    //Swapping the pivot element with the number
    
    swap(v,idx,x);
    
    
    for(int i = 0; i<n; i++){
        cout<<v[i]<<" ";
    }
    
    return 0;
}