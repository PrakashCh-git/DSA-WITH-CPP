#include<iostream>
#include<vector>
#include<queue>
#include<unordered_set>
using namespace std;
unordered_set<int> visited;
void add_edges(vector<vector<int>> &graph, int src, int dest, bool bi_di = true) {
    graph[src].push_back(dest);
    if(bi_di) {
        graph[dest].push_back(src);
    }
}

void dfsRec(vector<vector<int>> &graph, vector<int> & result, int src) {
    visited.insert(src);
    result.push_back(src);

    for(auto ele : graph[src]) {
        if(visited.find(ele) == visited.end()) {
            visited.insert(ele);
            dfsRec(graph, result,ele);
        }
    }

}

void dfs(vector<vector<int>> &graph, vector<int> & result) {
    for(int i = 0; i<graph.size(); i++) {
        if(visited.find(i) == visited.end()) {
            dfsRec(graph,result,i);
        }
    }
}


int main() {
    cout<<"Enter Number of Vertices : ";
    int n;
    cin>>n;

    cout<<"Enter Edges : ";
    int e;
    cin>>e;

    vector<vector<int>> graph(n, vector<int>());

    cout<<endl<<"Add Edges : ";
    while(e!=0) {
        int src;
        int dest;
        cin>>src;
        cin>>dest;
        add_edges(graph,src,dest);
        e--;
    }

    int src;
    cout<<"Enter the starting vertice : ";
    cin>>src;
    vector<int> result;
    dfsRec(graph,result,src);

    for(int i = 0; i<result.size(); i++) {
        cout<<result[i]<<" ";
    }

    return 0;
}