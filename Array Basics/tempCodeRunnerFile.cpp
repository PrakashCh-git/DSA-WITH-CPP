#include<iostream>
using namespace std;
int stair(int x){
    if(x==0)return 1;
    if(x==1)return 1;
    return stair(x-1) + stair(x-2);
}
int main(){
    int n;
    cout<<"Enter number of stairs";
    cin>>n;
    int y = stair(n);
    cout<<y;
    return 0;
}