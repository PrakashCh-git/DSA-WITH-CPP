#include<iostream>
using namespace std;
void name(int n){
    if(n==0)return;
    cout<<"PRAKASH"<<endl;
    name(n-1);
}
int main(){
    name(5);
    return 0;
}