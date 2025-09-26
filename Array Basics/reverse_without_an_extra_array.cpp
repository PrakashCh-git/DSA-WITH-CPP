#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector <int> v;
    int n;
    cout<<"Enter the size of the array : ";
    cin>>n;
    for(int i = 0; i<n; i++){
        int x;
        cin>>x;
        v.push_back(x);
    }
    int i=0;
    int j = v.size()-1;
    while(i<j){
        int temp;
        temp = v[i];
        v[i] = v[j];
        v[j] = temp;
        i++;
        j--;
    }

    for(int i = 0; i<n; i++){
        cout<<v[i]<<" ";
    }
    return 0;
}