#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

class Solution {
public:
    static bool cmp(const int& a, const int& b) {
        string A = to_string(a);
        string B = to_string(b);
        return A+B>B+A;
    }
    string largestNumber(vector<int>& nums) {
        sort(nums.begin(),nums.end(),cmp);

        string ans = "";

        for(int i = 0; i<nums.size(); i++) {
            string s = to_string(nums[i]);
            ans += s;
        }

        if(ans[0]=='0')return "0";

        return ans;
    }
};