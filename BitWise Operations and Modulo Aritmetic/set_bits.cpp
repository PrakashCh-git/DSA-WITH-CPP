//Find the number set bit in a decimal number
#include<iostream>
using namespace std;
int set_bits(int n){
    int count = 0;
    while(n>0){
        int r = n%2;
        if(r==1)count++;
        n = n/2;
    }
    return count;
}
int main(){
    int n = 25;
    cout<<set_bits(n);

    return 0;
}