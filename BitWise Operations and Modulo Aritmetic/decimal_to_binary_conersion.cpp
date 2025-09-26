#include<iostream>
#include<vector>
using namespace std;
vector <int> decimal_to_binary(int n){
    vector <int> v;
    while(n>0){
        int rem = n%2;
        v.push_back(rem);
        n = n/2;
    }
    int k = v.size();
    for(int i = k-1; i>=0; i--){
        cout<<v[i]<<" ";
    }
}
int main(){
    int n = 12;
    decimal_to_binary(n);

    return 0;
}