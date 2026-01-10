#include<iostream>
#include<vector>
#include<climits>
#include<stack>
using namespace std;


//TOP DOWN
class Solution {
public:
    int m,n;
    vector<vector<int>> dp;
    int solve(int i, int j, string& s1, string& s2) {
        if(i>=m and j>=n)return 0;
        if(i>=m) {
            return dp[i][j] = s2[j] + solve(i,j+1,s1,s2);
        }
        else if(j>=n) {
            return dp[i][j] = s1[i] + solve(i+1,j,s1,s2);
        }

        if(dp[i][j]!=-1)return dp[i][j];

        if(s1[i]==s2[j]) return dp[i][j] = solve(i+1,j+1,s1,s2);

        int s1_i = s1[i] + solve(i+1,j,s1,s2);
        int s2_j = s2[j] + solve(i,j+1,s1,s2);

        return dp[i][j] = min(s1_i,s2_j);

    }
    int minimumDeleteSum(string s1, string s2) {
        m = s1.size();
        n = s2.size();

        dp.resize(m+1,vector<int>(n+1,-1));

        return solve(0,0,s1,s2);
    }
};