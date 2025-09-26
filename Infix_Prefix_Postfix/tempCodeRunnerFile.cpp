#include<iostream>
#include<stack>
using namespace std;
int solve(int v1, int v2, char ch){
    if(ch=='+')return v1+v2;
    if(ch=='-')return v1-v2;
    if(ch=='*')return v1*v2;
    if(ch=='/')return v1/v2;
}
int main(){
    string pre = "-/*+79483";
    stack<int> val;
    for(int i = pre.length()-1; i>=0; i--){
        if(pre[i]>=48 && pre[i]<=57){
            val.push(pre[i]);
        }
        else{
            int v1 = val.top();
            val.pop();

            int v2 = val.top();
            val.pop();

            int ans = solve(v1,v2,pre[i]);
            val.push(ans);
        }
    }
    cout<<val.top();
    return 0;
}