#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main() {
    int days;
    cin>>days;
    int a,b,c;
    cin>>a>>b>>c;

    vector<vector<int>> dp(days,vector<int>(3,0));

    dp[0][0] = a;
    dp[0][1] = b;
    dp[0][2] = c;

    for(int i = 1; i<days; i++) {
        cin>>a>>b>>c;
        dp[i][0] = a + max(dp[i-1][1],dp[i-1][2]);
        dp[i][1] = b + max(dp[i-1][0],dp[i-1][2]);
        dp[i][2] = c + max(dp[i-1][0],dp[i-1][1]);
    } 

    cout<<max({dp[days-1][0],dp[days-1][1],dp[days-1][2]});

    return 0;
}