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
    };
