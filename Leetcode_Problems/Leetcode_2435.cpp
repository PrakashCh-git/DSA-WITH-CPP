#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

class Solution {
public:
    int m, n;
    long long MOD = 1e9+7;
    vector<vector<vector<int>>> dp;
    int solve(int i, int j, int currSum, vector<vector<int>>& grid, int k) {
        if(i >= m || j >= n) return 0;

        if(i == m-1 and j == n-1) {
            if((currSum + grid[m-1][n-1]) % k == 0)return 1;
            return 0;
        }
        if(dp[i][j][currSum]!=-1)return dp[i][j][currSum];

        int down = solve(i+1, j, (currSum+grid[i][j])%k, grid, k);
        int right = solve(i, j+1, (currSum+grid[i][j])%k, grid, k);

        return dp[i][j][currSum] = (right + down)%MOD;
    }

    int numberOfPaths(vector<vector<int>>& grid, int k) {
        m = grid.size();
        n = grid[0].size();
        dp.assign(m+1,vector<vector<int>>(n+1,vector<int>(k+1,-1)));

        return solve(0,0,0,grid,k);
    }
};