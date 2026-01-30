#include<iostream>
#include<vector>
#include<climits>
#include<stack>
#include<algorithm>
using namespace std;


class Solution {
  public:
    vector<int> visited;
    void dfs(vector<vector<int>>& adj, stack<int>& st, int source) {
        visited[source] = 1;
        
        for(int x : adj[source]) {
            if(!visited[x]) dfs(adj,st,x);
        }
        
        st.push(source);
    }
    vector<int> topoSort(int V, vector<vector<int>>& edges) {
        vector<int> ans;
        stack<int> st;
        visited.resize(V,0);
        
        vector<vector<int>> adj(V,vector<int>());
        for(auto& p : edges) {
            int u = p[0];
            int v = p[1];
            adj[u].push_back(v);
        }
        
        
        for(int i = 0; i<V; i++) {
            if(!visited[i]) dfs(adj,st,i);
        }
        
        
        while(!st.empty()) {
            int x = st.top();
            ans.push_back(x);
            st.pop();
        }
        
        return ans;
    }
};