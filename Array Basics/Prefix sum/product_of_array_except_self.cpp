#include<iostream>
#include<vector>
using namespace std;
class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        int product = 1;
        int product2 = 1;
        int noz = 0;
        for(int i = 0  ; i<n; i++){
            if(nums[i]==0)noz++;
            product = product * nums[i];
            if(nums[i]!=0)product2 = product2*nums[i];
        }
        if(noz>1)product2 = 0;
        for(int i = 0; i<n; i++){
            if(nums[i]==0)nums[i] = product2;
            else nums[i] = product/nums[i];

        }
        return nums;
    }
};