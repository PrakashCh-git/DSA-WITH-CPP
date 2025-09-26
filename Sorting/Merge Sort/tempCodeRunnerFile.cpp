#include<iostream>
#include<vector>
using namespace std;
int count = 0;
void merge(vector <int> &a , vector <int> &b , vector <int> &v){
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
int CoInversion(vector<int> a, vector<int> b){
    int c = 0; 
    int i = 0;
    int j = 0;
    while(i<a.size() && j<b.size()){
        if(a[i]>b[j]){
            c += a.size()-i;
            j++;
        }
        else i++;
    }
    return c;
}
void mergeSort(vector <int> &v, int n){
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

    //Counting Inversions 
    count += CoInversion(a,b);

    //Merge the sorted a and b
    merge(a,b,v);
    
    //Deleting the extra space
    a.clear();
    b.clear();
  
  

}
int main(){
    int arr[] = {5,1,3,0,4,2,6};
    int n = sizeof(arr)/sizeof(arr[0]);
    vector<int> v(arr,arr+n);

    mergeSort(v,n);
    
    cout<<count;
    return 0;
}