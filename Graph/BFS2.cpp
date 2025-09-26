#include<iostream>
#include<vector>
#include<queue>
#include<unordered_set>
using namespace std;
void add_edges(vector<vector<int>> &graph, int src, int dest, bool bi_di = true) {
    graph[src].push_back(dest);
    if(bi_di) {
        graph[dest].push_back(src);
    }
}
 
unordered_set<int> visited;
void bfs(vector<vector<int>>& graph, vector<int> &result, int src) {
    queue<int> q;
    q.push(src);
    visited.insert(src);
    
    while(q.size()!=0) {
        int x = q.front();
        q.pop();
        result.push_back(x);
        for(auto ele : graph[x]) {
            if(visited.find(ele) == visited.end()) {
                q.push(ele);
                visited.insert(ele);
            }
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
    bfs(graph,result,src);

    for(int i = 0; i<result.size(); i++) {
        cout<<result[i]<<" ";
    }

    return 0;
}