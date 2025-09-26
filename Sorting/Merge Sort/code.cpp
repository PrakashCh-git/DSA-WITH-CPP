#include<iostream>
#include<vector>
using namespace std;

void merge(vector<int>& a, vector<int>& b, vector<int>& v){
    int i = 0;
    int j = 0;
    int k = 0; 
    while(i<a.size() && j<b.size()){
        if(a[i]<b[j]){
            v[k] = a[i];
            i++;
            k++;
        }
        else{
            v[k] = b[j];
            j++;
            k++;
        }
    }
    if(i==a.size()){
        while(j<b.size()){
            v[k] = b[j];
            j++;
            k++;
        }
    }
    else if(j==b.size()){
        while(i<a.size()){
            v[k] = a[i];
            i++;
            k++;
        }
    }
}

void mergeSort(vector<int>& v, int n){
    //Basecase
    if(n==1)return;

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

    //Recursive magic
    mergeSort(a,n1);
    mergeSort(b,n2);

    //Merge the sorted a and b
    merge(a,b,v);
    
    //Deleting the extra space
    a.clear();
    b.clear();
    
}
int main(){
    vector <int> v(7);
    cout<<"Enter the eleements in the array";
    for(int i = 0;  i<7; i++){
        cin>>v[i];
    }

    mergeSort(v,7);

    for(int i = 0; i<7; i++){
        cout<<v[i]<<" ";
    }

}
