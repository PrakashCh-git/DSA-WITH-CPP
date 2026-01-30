#include<iostream>
#include<vector>
using namespace std;
void add_edges(vector<vector<int>> &graph, int src, int dest, bool bi_di = true) {
    graph[src].push_back(dest);
    if(bi_di) {
        graph[dest].push_back(src);
    }
}

void display(vector<vector<int>> graph) {
    for(int i = 0; i<graph.size(); i++) {
        cout<<i<<" -> ";
        for(auto x : graph[i]) {
            cout<<x<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
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

    display(graph);
    return 0;
}