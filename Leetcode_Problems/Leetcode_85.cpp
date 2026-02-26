#include<iostream>
#include<vector>
#include<climits>
#include<stack>
#include<algorithm>
using namespace std;

class Solution {
public:
    int maximalRectangle(vector<vector<char>>& matrix) {
        if(matrix.empty()) return 0;
        int m = matrix.size();
        int n = matrix[0].size();
        vector<int> height(n,0);
        int ans = 0;

        for(int i = 0; i<matrix.size(); i++) {
            for(int j = 0; j<matrix[0].size(); j++) {
                (matrix[i][j]=='1')?height[j]++ : height[j]=0;
            }
            ans = max(ans,area(height));
        }
        return ans;
    }

    int area(vector<int>& h) {
        stack<int> st;

        vector<int> nsr(h.size());
        vector<int> nsl(h.size());
    
        //nsl
        for(int i = 0; i<h.size(); i++) {
            if(st.empty()) {
                st.push(i);
                nsl[i] = -1;
            }

            if(!st.empty() and h[st.top()] < h[i]) {
                nsl[i] = st.top();
                st.push(i);
            } 
            
            
            else if(!st.empty() and h[st.top()] >= h[i]) {
                while(!st.empty() and h[st.top()] >= h[i]) {
                    st.pop();
                }
                if(st.empty()) {
                    nsl[i] = -1;
                    st.push(i);
                }
                else {
                    nsl[i] = st.top();
                    st.push(i);
                }
            }
        }

        while(!st.empty()) st.pop();

        //nsr
        for(int i = h.size()-1; i>=0; i--) {
            if(st.empty()) {
                nsr[i] = h.size();
                st.push(i);
            }

            else if(!st.empty() and h[st.top()] < h[i]) {
                nsr[i] = st.top();
                st.push(i);
            }

            else if(!st.empty() and h[st.top()] >= h[i]) {
                while(!st.empty() and h[st.top()] >= h[i]) {
                    st.pop();
                }
                if(st.empty()) {
                    nsr[i] = h.size();
                    st.push(i);
                }
                else {
                    nsr[i] = st.top();
                    st.push(i);
                }
            }
        }

        int area = 0;
        
        for(int i =0; i<h.size(); i++) {
            int width = nsr[i] - nsl[i] - 1;
            int a = width*h[i];
            area = max(a,area);
        }
        return area;
    }
};