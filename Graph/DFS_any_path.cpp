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
void display(vector<list<int>>& graph) {
    for(int i = 0; i<graph.size(); i++) {
        cout<<i<<" -> ";
        for(auto ele : graph[i]) {
            cout<<ele<<" ";
        }
        cout<<endl;
    }
}
bool Is_Path(vector<list<int>>& graph, int curr, int end) {
    if(curr == end) return true;
    s.insert(curr);
    for(auto neighbour : graph[curr]) {
        if(s.find(neighbour) == s.end()) {
            bool result = Is_Path(graph,neighbour,end);
            if(result==true)return true;
        }
    }
    return false;
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
    int x,y;
    cout<<"Enter the starting index : ";
    cin>>x;

    cout<<endl<<"Enter the ending index : ";
    cin>>y;

    cout<<Is_Path(graph,x,y);
    return 0;
}