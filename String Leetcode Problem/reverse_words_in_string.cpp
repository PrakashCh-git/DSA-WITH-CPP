#include<iostream>
using namespace std;
class Solution {
    public:
        string reverseWords(string s) {
            int j  = 0;
            string ans = "";
            while(s[j]==' '){
                j++;
            }
            string st = "";
            while(j<s.size()){
                while(j<s.size() && s[j]!=' '){
                    st = st+s[j];
                    j++;
                }
                ans = st + ' ' + ans;
                st = "";
                while(j<s.size() && s[j]==' '){
                    j++;
                }
                
            }
            ans.erase(ans.find_last_not_of(" ") + 1);
            return ans;
            
        }
    };