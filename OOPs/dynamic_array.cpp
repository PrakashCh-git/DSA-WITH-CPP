#include<iostream>
using namespace std;
int main(){
    int* ptr = new int[5];

    ptr[0] = 2;
    ptr[1] = 5;
    ptr[2] = 4;
    ptr[3] = 3;
    ptr[4] = 9;


    cout<<ptr[2];


    return 0;
}