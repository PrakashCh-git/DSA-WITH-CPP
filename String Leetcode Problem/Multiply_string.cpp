#include<iostream>
using namespace std;
class Solution {
    public:
        string addStrings(string num1, string num2) {
            int i = num1.size()-1;
            int j = num2.size()-1;
            int carry = 0;
            string num;
            while(i>=0 || j>=0 || carry>0){
                int x = 0;
                int y = 0;
                if(i>=0){
                    x = int(num1[i]) - 48;
                }
                else x = 0;
    
                if(j>=0){ 
                    y = int(num2[j])- 48;
                }
                else y = 0;
    
    
                int s = x + y + carry;
    
                carry = s/10;
    
                num = to_string(s%10) + num;
                i--;
                j--;
            }
            return num;
        }
    string multiply(string num1, string num2) {
            if(num1 == "0" || num2 == "0") return "0";
            int n1 = num1.size()-1;
            int n2 = num2.size()-1;
            int c = 0;
            string ans = "";
            for(int i = n1; i>=0; i--){
                string s = "";
                int carry = 0;
                int j = n2;
                while(j>=0 || carry>0){
                    if(j<0){
                        s = to_string(carry) + s;
                        break;
                    }
                    int x = 0;
                    int y = 0;
                    x = int(num1[i])-48;
                    y = int(num2[j])-48;
                    int res = x*y + carry; 
                    carry = res/10;
                    s = to_string(res%10) + s;
                    j--;
                }
                if(c==0)ans = ans + s;
                else{
                    for(int i = 1; i<=c; i++){
                        s = s + "0";
                    }
                    ans = addStrings(ans,s);
                }
                c++;
    
            }
            return ans;
        }
    };