#include<iostream>
#include<vector>
using namespace std;
void sort(vector <int> &v,int x){
    int zero=0;
    int one=0;
    for(int i = 0; i<x; i++){
        if(v[i]==0){
            zero++;
        }
        else{one++;}
    }
    while(zero>0){
        v.push_back(0);
        zero--;
    }
    while(one>0){
        v.push_back(1);
    }

}
int main(){
    vector <int> v;
    v.push_back(0);
    v.push_back(1);
    v.push_back(0);
    v.push_back(1);
    v.push_back(1);
    v.push_back(1);
    v.push_back(0);
    v.push_back(0);
    v.push_back(1);
    v.push_back(1);
    
    sort(v,v.size());

    for(int i = 0; i<v.size(); i++){
        cout<<v[i]<<" ";
    }
    return 0;
}