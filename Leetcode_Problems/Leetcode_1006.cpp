#include<iostream>
#include<vector>
#include<climits>
#include<stack>
using namespace std;
class Solution {
public:
    int clumsy(int n) {
        stack<int> st;
        st.push(n--);
        int i = 0;
        while(n>0) {
            i = i % 4;
            if(i==0) {
                int x = st.top();
                st.pop();
                x = x*n;
                st.push(x);
            }
            else if(i==1) {
                int x = st.top();
                st.pop();
                x = x/n;
                st.push(x);
                
            }
            else if(i==2) {
                st.push(n);
            }
            else if(i==3) {
                st.push(-n);
            }
            n--;
            i++;
        }
        int ans = 0;
        while(!st.empty()) {
            ans += st.top();
            st.pop();
        }
        return ans;
    }
};