#include<iostream>
#include<vector>
#include<climits>
#include<unordered_map>
using namespace std;

class Solution {
public:
    int countPermutations(vector<int>& complexity) {
        int n = complexity.size();
        int mn = INT_MAX;
        long long MOD = 1e9+7;

        for(int i = 1; i<n; i++) {
            mn = min(mn,complexity[i]);
        }

        if(mn<=complexity[0])return 0;

        long long ans = 1;
        for(int i = 1; i<n; i++) {
            ans *= i;

            ans = ans%MOD;
        }
        return ans;
    }
};