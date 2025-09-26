#include<iostream>
#include<vector>
using namespace std;
void print_subsequence(vector<int>& nums,vector<int> ans, int idx, int k) {
    if(idx==nums.size()) {
        if(ans.size()==k) {
            for(int i = 0; i<k; i++) {
                cout<<ans[i]<<" ";
            }
            cout<<endl;
        }
        return;
    }
    print_subsequence(nums,ans,idx+1,k);
    ans.push_back(nums[idx]);
    print_subsequence(nums,ans,idx+1,k);
}
int main() {
    int n;
    vector<int> v;
    vector<int> w;
    cout<<"Enter the value of n : ";
    cin>>n;
    int k;
    cout<<"Enter the length of the subsequence";
    cin>>k;
    for(int i = 1; i<=n; i++) {
        v.push_back(i);
    }
    print_subsequence(v,w,0,k);
    return 0;
}