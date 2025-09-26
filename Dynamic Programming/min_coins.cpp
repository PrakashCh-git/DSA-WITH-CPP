#include<iostream>
#include<vector>
#include<climits>
using namespace std;

    int no_of_ways(int n, vector<int>& coins, vector<int>& dp) {
        if(n==0)return 0;
        if(dp[n]!=-2)return dp[n];
        int k = INT_MAX;
        for(int i = 0; i<coins.size(); i++) {
            if(n-coins[i]<0)continue;
            k = min(k,no_of_ways(n-coins[i],coins,dp));
        }
        
        if(k == INT_MAX) return dp[n] = INT_MAX;
        return dp[n] = k+1;

    }
    int coinChange(vector<int>& coins, int amount) {
        vector<int> dp(amount+1, -2);
        if(no_of_ways(amount,coins,dp)==INT_MAX)return -1;
        return no_of_ways(amount,coins,dp);
    }

int main() {
    int n;
    int x;
    cin>>x;
    cin>>n;
    vector<int>coins;
    for(int i = 0; i<n; i++) {
        int num;
        cin>>num;
        coins.push_back(num);
    }

    cout<<coinChange(coins,x);

}