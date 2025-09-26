#include<iostream>
#include<vector>
#include<list>

using namespace std;
void add_edge(vector<list<pair<int,int>>> &graph, int src, int dest, int wt, bool bi_di = true) {
    graph[src].push_back({dest,wt});
    if(bi_di) {
        graph[dest].push_back({src,wt});
    }
}

void display(vector<list<pair<int,int>>> &graph){
    for(int i = 0; i<graph.size(); i++) {
        cout<<i<<" -> ";
        for(auto ele : graph[i]) {
            cout<<"("<<ele.first<<" , "<<ele.second<<")";
        }
        cout<<endl;
    }
}

int main() {

    int n;
    cout<<"Enter the number of vertices : ";
    cin>>n;
    vector<list<pair<int,int>>> graph(n,list<pair<int,int>>());
    
    int e;
    cout<<"Enter number of edges : ";
    cin>>e;
    while(e!=0) {
        int s , d , wt;
        cin>>s>>d>>wt;
        add_edge(graph,s,d,wt,false);
        e--;
    }

    display(graph);
    return 0;
}