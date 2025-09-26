#include<iostream>
#include<stack>
using namespace std;
bool isBalanced(string s){
    if(s.length()%2!=0)return false;
    stack<char> st;
    for(int i = 0; i<s.length(); i++){
        if(s[i]=='('){
            st.push(s[i]);
        }
        else{
            if(st.size()==0)return false;
            else if(st.top()=='(')st.pop();
        }
    }
    if(st.size()!=0)return false;
    else return true;
}
int main(){
    string s = "()())()";

    int x = isBalanced(s);
    cout<<x<<endl;
    return 0;
}