#include<iostream>
#include<vector>
#include<climits>
#include<stack>
#include<algorithm>
using namespace std;

class Solution {
  public:
    vector<bool> visited;
    vector<bool> inRecursion;
    bool dfs(vector<vector<int>>& adj,int source) {
        visited[source] = true;
        inRecursion[source] = true;
        
        for(int x : adj[source]) {
            if(!visited[x] && dfs(adj,x)) return true;
            
            else if(inRecursion[x]) return true;
        }
        
        inRecursion[source] = false;
        return false;
    }
    bool isCyclic(int V, vector<vector<int>> &edges) {
        
        vector<vector<int>> adj(V,vector<int>());
        visited.resize(V,false);
        inRecursion.resize(V,false);
        
        for(auto& p : edges) {
            int u = p[0];
            int v = p[1];
            adj[u].push_back(v);
        }
        
        for(int i = 0; i<V; i++) {
            if(!visited[i]) {
                if(dfs(adj,i)) return true;
            }
        }
        return false;
    }
};