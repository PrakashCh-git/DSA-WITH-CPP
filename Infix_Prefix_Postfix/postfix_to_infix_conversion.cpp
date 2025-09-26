#include<iostream>
#include<stack>
using namespace std;

string solve(string s1, char ope, string s2){
    return "(" + s1 + ope + s2 + ")";
}

int main(){
    string st = "264*8/+3";
    stack<string> val;

    for(int i = 0; i < st.length(); i++){
        if(isdigit(st[i])){  // Check if it's a digit
            val.push(string(1, st[i]));  // Push as string
        }
        else{
            string v2 = val.top();
            val.pop();

            string v1 = val.top();
            val.pop();

            string x = solve(v1, st[i], v2);
            val.push(x);
        }
    }
    cout << val.top() << endl;

    return 0;
}