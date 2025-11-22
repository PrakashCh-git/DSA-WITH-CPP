#include<iostream>
#include<vector>
using namespace std;
class Solution {
public:
    int minimumOperations(vector<int>& nums) {
        int ans = 0;
        for(int i = 0; i<nums.size(); i++) {
            int x = nums[i]%3;
            if(x < 3-x) ans += x;
            else ans += 3-x;
        }
        return ans;
    }
};