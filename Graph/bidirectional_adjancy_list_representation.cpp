#include<iostream>
#include<vector>
#include<list>
using namespace std;
void add_edge(vector<list<int>> &graph , int src, int dest, bool bi_di = true ){
    graph[src].push_back(dest);
    if(bi_di) {
        graph[dest].push_back(src);
    }
}

void display(vector<list<int>> &graph) {
    for(int i = 0; i<graph.size(); i++) {
        cout<<i<<" -> ";
        for(auto ele : graph[i]){
            cout<<ele<<"  ";
        }
        cout<<endl;
    }
}
int main() {

    int n;
    cout<<"Enter number of vertices : ";
    cin>>n;

    vector<list<int>> graph(n,list<int> ());

    int e;
    cout<<"Enter number of edges : ";
    cin>>e;

    while(e!=0){
        int s , d;
        cin>>s>>d;
        add_edge(graph,s,d);
        e--;
    }

    display(graph);
    return 0;
}