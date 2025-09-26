#include<iostream>
#include<vector>
#include<climits>
using namespace std;

vector<int> get_digit(int n) {
    vector<int> digit;
    while(n!=0) {
        int r = n%10;
        if(r!=0)digit.push_back(r);
        n = n/10;
    }
    return digit;
}
int no_of_ways(int n,vector<int>& dp) {
    if(n==0) return 0;
    if(n<=9)return 1;
    if(dp[n]!=-1)return dp[n];
    int k = INT_MAX;
    vector<int> d = get_digit(n);
    for(int i = 0; i<d.size(); i++) {
        k = min(k,no_of_ways(n-d[i],dp));
    }
    return dp[n] = k+1;
}
int main() {
    int n;
    cin>>n;
    vector<int> dp(n+1,-1);
    cout<<no_of_ways(n,dp);
}