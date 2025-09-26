#include<iostream>
#include<vector>
#include<list>
#include<unordered_set>
using namespace std;
unordered_set<int> s;
void add_edges(vector<list<int>>& graph, int src, int dest, bool bi_di = true) {
    graph[src].push_back(dest);
    if(bi_di){
        graph[dest].push_back(src);
    }
}
void dfs(int node, vector<list<int>> graph) {
    s.insert(node);
    for(auto ele : graph[node]) {
        if(s.find(ele) == s.end()) {
            s.insert(ele);
            dfs(ele,graph);
        }
    }
}

int connected_component(vector<list<int>> graph) {
    int cc = 0;
    for(int i = 0; i<graph.size(); i++) {
        if(s.find(i) == s.end()) {
            cc++;
            dfs(i,graph);
        }
    }
    return cc;
}
int main() {
    
    int n;
    cout<<"Enter number of vertices : ";
    cin>>n;
    vector<list<int>> graph(n,list<int>());

    int e;
    cout<<"Enter number of edges : ";
    cin>>e;

    while(e!=0) {
        int s, d;
        cin>>s>>d;
        add_edges(graph,s,d);
        e--;
    }
    
    cout<<connected_component(graph);
    return 0;
}