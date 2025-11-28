#include<iostream>
#include<vector>
#include<algorithm>
#include<queue>
#include<unordered_map>
using namespace std;

class Solution {
public:
    int ans = 0;
    long long solve(int source,int k, int parent, vector<int>& values, vector<vector<int>>& adj) {
        long long sum =(long long)values[source];

        for(auto ele : adj[source]) {
            if(ele==parent) continue;
            sum += solve(ele,k,source,values,adj);
        }
        if(sum%k==0) {
            ans++;
            return 0LL;
        }
        return sum%k;
    }
    int maxKDivisibleComponents(int n, vector<vector<int>>& edges, vector<int>& values, int k) {
        vector<vector<int>> adj(n);
        for (auto &e : edges) {
            adj[e[0]].push_back(e[1]);
            adj[e[1]].push_back(e[0]);
        }

        long long x = solve(0,k,-1,values,adj);
        return ans;
        
    }
};