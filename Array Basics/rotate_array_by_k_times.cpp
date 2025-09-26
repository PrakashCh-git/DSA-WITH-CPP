#include<iostream>
#include<vector>
using namespace std;
void reverse(vector <int> &a){
    int i = 0;
    int j = a.size()-1;
    while(i<=j){
        int temp;
        temp = a[i];
        a[i] = a[j];
        a[j] = temp;
        i++;
        j--;
    }
}
void reversePart(vector <int> &a, int x, int y){
    int i = x;
    int j = y;
    while(i<=j){
        int temp;
        temp = a[i];
        a[i] = a[j];
        a[j] = temp;
        i++;
        j--;
    }

    
}
int main(){
    int n; 
    cout<<"Enter the number of steps : ";
    cin>>n;
    vector <int> v(7);
    for(int i = 0; i<7; i++){
        cin>>v[i];
    }
    if(n>7){
        n  = n%7;
    }
    reverse(v);
    reversePart(v,0,n-1);
    reversePart(v,n-1,6);
    for(int i = 0; i<7; i++){
        cout<<v[i]<<" ";
    }

    return 0;
}