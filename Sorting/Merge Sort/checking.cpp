#include<iostream>
#include<vector>
using namespace std;
void mergeSort(vector<int>& v){
    //Division of the vectors.
    int n1 = v.size()/2;
    int n2 = v.size()-n1;
    
    //Creation of two new vectors.
    vector<int> a(n1);
    vector<int> b(n2);
    for(int i = 0; i<n1; i++){
        a[i]=v[i];
    }
    for(int j = 0; j<n2; j++){
        b[j]=v[n1+j];
    }
    
    for(int i=0; i<a.size(); i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
    for(int i=0; i<b.size(); i++){
        cout<<b[i]<<" ";
    }
}
int main(){
    vector<int> v(7);
    
    for(int i = 0; i<7; i++){
        cin>>v[i];
    }
    
    mergeSort(v);
    
    return 0;
}