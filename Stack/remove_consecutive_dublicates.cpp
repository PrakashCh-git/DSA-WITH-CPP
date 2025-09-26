#include<iostream>
#include<stack>
#include<algorithm>
using namespace std;
void compress(string &s){
    stack<char> st;
    st.push(s[0]);
    for(int i = 1; i<s.length(); i++){
        if(s[i]!=st.top())st.push(s[i]);
        else continue;
    }
    s = "";
    while(st.size()!=0){
        s += st.top();
        st.pop();
    }
    reverse(s.begin(),s.end());
}
int main(){
    string s = "aaabcccbbbggjkkk";
    cout<<s<<endl;
    compress(s);
    cout<<s<<endl;
    return 0;
}