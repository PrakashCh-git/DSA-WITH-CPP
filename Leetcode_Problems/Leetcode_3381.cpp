#include<iostream>
#include<vector>
#include<climits>
using namespace std;

class Solution {
public:
    long long maxSubarraySum(vector<int>& nums, int k) {
        int n = nums.size();
        
        vector<long long> minPre(k, LLONG_MAX);
        long long pre = 0;
        long long ans = LLONG_MIN;

        minPre[0] = 0;

        for (int i = 0; i < n; i++) {
            pre += nums[i];
            int modClass = (i + 1) % k;

            if (minPre[modClass] != LLONG_MAX) {
                ans = max(ans, pre - minPre[modClass]);
            }

            
            minPre[modClass] = min(minPre[modClass], pre);
        }

        return ans;
    }
};
