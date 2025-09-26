//Sort a string in decreasing order of values associated after removal of values smaller than X.
#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
    string str = "ABXDYZXYJIKLY";
    string s = "";
    for(int i = 0; i<str.size(); i++){
        if(str[i]>='X')s.push_back(str[i]);
    }

    for(int i = 0; i<s.size(); i++){
        cout<<s[i]<<" ";
    }

    bool flag = true;
    for(int i = 0; i<s.size()-1; i++){
        for(int j = 0; j<s.size()-1-i; j++){
            if(s[j]>s[j+1]){
                int temp = s[j];
                s[j] = s[j+1];
                s[j+1]=temp;
                flag = false;
            }
        }
        if(flag==true)break;
    }
    reverse(s.begin(),s.end());
    cout<<endl;
    for(int i = 0; i<s.size(); i++){
        cout<<s[i]<<" ";
    }

    return 0;
}