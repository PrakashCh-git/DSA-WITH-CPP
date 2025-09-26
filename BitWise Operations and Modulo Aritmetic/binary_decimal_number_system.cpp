#include<iostream>
#include<string>
using namespace std;
int main(){
    string str = "110";
    int len = str.length();
    int decNum = 0;
    int a;
    for(int i = len-1; i>=0; i--){
        int x = len - i - 1;
        if(str[i]=='0')a = 0;
        else a = 1;
        decNum = decNum + a*(1<<x);
    }
    cout<<decNum;
    return 0;
}