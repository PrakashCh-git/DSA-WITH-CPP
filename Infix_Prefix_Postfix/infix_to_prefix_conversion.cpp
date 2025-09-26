#include<iostream>
#include<stack>
using namespace std;
int prio(char a){
    if(a=='+' || a=='-')return 1;
    else return 2;
}
string solve(string v1, char op, string v2){
    string s = "";
    s.push_back(op);

    s+=v1;
    s+=v2;
    return s;
}
int main(){
    string st = "(7+9)*4/8-3";

    stack<string> val;
    stack<char> op;

    for(int i= 0; i<st.length(); i++){
        if(st[i]>=48 && st[i]<=57){
            val.push(to_string(st[i]-48));
        }

        else{// +,-,*,/,(,)
            if(op.size()==0)op.push(st[i]);
            else if(st[i]=='(')op.push(st[i]);
            else if(op.top()=='(')op.push(st[i]);
            else if(st[i]==')'){
                while(op.top()!='('){
                    char ope = op.top();
                    op.pop();

                    string val2 = val.top();
                    val.pop();
                    
                    string val1 = val.top();
                    val.pop();

                    string x = solve(val1,ope,val2);
                    val.push(x);
                }
                op.pop();
            }
            else if(prio(st[i]) > prio(op.top()))op.push(st[i]);
            else if(prio(st[i]) <= prio(op.top())){
                while(op.size()>0 && prio(st[i])<=prio(op.top())){
                    char ope = op.top();
                    op.pop();

                    string val2 = val.top();
                    val.pop();
                    
                    string val1 = val.top();
                    val.pop();

                    string x = solve(val1,ope,val2);
                    val.push(x);
                }
                op.push(st[i]);
            }
        }
    }

    while(op.size()>0){
        char ope = op.top();
        op.pop();
        
        string val2 = val.top();
        val.pop();
                    
        string val1 = val.top();
        val.pop();

        string x = solve(val1,ope,val2);
        val.push(x);

    }

    cout<<val.top();
    return 0;
}

