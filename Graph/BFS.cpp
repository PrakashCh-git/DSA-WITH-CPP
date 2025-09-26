#include<iostream>
#include<vector>
#include<queue>
#include<list>
#include<climits>
#include<unordered_set>
using namespace std;

unordered_set<int> s;
void add_edges(vector<list<int>>& graph, int src, int dest, bool bi_di = true) {
    graph[src].push_back(dest);
    if(bi_di){
        graph[dest].push_back(src);
    }
}

void BFS(vector<list<int>>& graph, vector<int> &dist, int src) {
    queue<int> q;
    dist[src] = 0;
    q.push(src);
    s.insert(src);
    while(q.size()>0) {
        int curr = q.front();
        q.pop();
        for(auto ele : graph[curr]) {
            if(s.find(ele) == s.end()) {
                dist[ele]  = dist[curr] + 1;
                q.push(ele);
                s.insert(ele);
            }
        }
    }


}

void display(vector<int> dist) {
    for(int i = 0; i<dist.size(); i++) {
        cout<<dist[i]<<" ";
    }
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
    int src;
    cout<<"Enter the source : ";
    cin>>src;

    vector<int> dist(n, INT_MAX);

    BFS(graph,dist,src);
    display(dist);
    
    return 0;
}