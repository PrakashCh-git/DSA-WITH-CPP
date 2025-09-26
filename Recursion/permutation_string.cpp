#include<iostream>
#include<string>
#include<vector>
using namespace std;
void print_permutation(string ans,string s,vector<string>& res) {
    if(s.size()==0) {
        res.push_back(ans);
        return;
    }
    for(int i = 0; i<s.size(); i++) {
        char ch = s[i]; 
        string temp = s;
        temp.erase(i,1);
        print_permutation(ans+ch,temp,res); 
    }
}
int main() {
    vector<string> ans;
    string s = "abc";
    print_permutation("",s,ans);

    for(int i = 0; i<ans.size(); i++) {
        cout<<ans[i]<<endl;
    }
    return 0;
}