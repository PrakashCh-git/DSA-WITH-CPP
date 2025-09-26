//Write a program to copy the contents of one array into another in the reverse order
#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n;
    cout<<"Enter the size of the array :";
    cin>>n;
    vector <int> v(n);
    vector <int> a(n);
    for(int i = 0; i<n; i++){
        cin>>v[i];
    }
    for(int i = 0; i<n; i++){
        a[i]=v[n-i];
        cout<<a[i]<<" ";
    }
    



    return 0;
}