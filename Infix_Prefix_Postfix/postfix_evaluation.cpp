#include<iostream>
#include<stack>
using namespace std;
int solve(int v1, char ope, int v2){
    if(ope=='+')return v1+v2;
    else if(ope=='-')return v1-v2;
    else if(ope=='*')return v1*v2;
    else if(ope=='/')return v1/v2;

}
int main(){
    string st = "79+4*8/3-";

    stack<int> val;

    for(int i = 0; i<st.length(); i++){
        if(st[i]>=48 && st[i]<=57){
            val.push(st[i]-48);
        }
        else{
            int v2 = val.top();
            val.pop();

            int v1 = val.top();
            val.pop();

            int x = solve(v1,st[i],v2);
            val.push(x);
        }
    }
    cout<<val.top();
    return 0;
}