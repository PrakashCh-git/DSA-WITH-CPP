#include<iostream>
using namespace std;
int main(){
    int n = 11;
    int x = n;
    int temp = 0;
    while(x>0){
        temp = x;
        x = x & (x-1);
    }
    temp = temp*2 - 1;

    temp = temp^n;
    cout<<temp;
    
}