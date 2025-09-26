#include<iostream>
using namespace std;
int main(){
    int n = 18;
    int temp = 0;
    while(n>0){
        temp = n;
        n = n & n-1;
    }
    cout<<temp;
    return 0;
}