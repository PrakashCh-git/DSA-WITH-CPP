#include<iostream>
#include<vector>
using namespace std;
int target(vector <int> &v, int t){
    int n = v.size();
    int index = 0;
    for(int i = 0; i<n; i++){
        if(v[i]==t){
            index = i;
        }
    }
    cout<<index;
}

int main(){
    vector <int> r;
    cout<<"Enter the size of the vector : ";
    int n;
    cin>>n;
    cout<<"Enter elements in the vector : ";
    for(int i = 0; i<n; i++){
        int temp;
        cin>>temp;
        r.push_back(temp);
    }
    cout<<"Enter target element : ";
    int t;
    cin>>t;

    target(r,t);
}