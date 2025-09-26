#include<iostream>
#include<vector>
using namespace std;
class Solution {
    public:
        int minSubArrayLen(int target, vector<int>& nums) {
            int n = nums.size();
            int minlength = n+1;
            int sum = 0;
            int i = 0;
            int j = 0;
            while(j<n){
                sum += nums[j];
                while(sum>=target){
                    int len = j-i+1;
                    minlength = min(len,minlength);
                    sum -= nums[i];
                    i++;
                }
                j++;
            }
            if(minlength==n+1)return 0;
            else return minlength;
        }
    };
int main(){
    return 0;
}