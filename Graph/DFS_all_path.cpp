#include<iostream>
#include<vector>
#include<list>
#include<unordered_set>
using namespace std;
unordered_set<int> s;
vector<vector<int>> result;
void add_edges(vector<list<int>>& graph, int src, int dest, bool bi_di = true) {
    graph[src].push_back(dest);
    if(bi_di){
        graph[dest].push_back(src);
    }
}
void display(vector<vector<int>> result) {
    for(int i = 0; i<result.size(); i++) {
        for(auto ele : result[i]) {
            cout<<ele<<" ";
        }
        cout<<endl;
    }
}
void All_Path(vector<list<int>>& graph, vector<int> &path, int curr, int end) {
    if(curr==end) {
        path.push_back(curr);
        result.push_back(path);
        path.pop_back();
        return;
    }
    s.insert(curr);
    path.push_back(curr);
    for(auto ele : graph[curr]) {
        if(s.find(ele) == s.end()){
            All_Path(graph,path,ele,end);
        }
    }
    s.erase(curr);
    path.pop_back();
    return;
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
    vector<int> path;
    All_Path(graph,path,x,y);
    display(result);
    return 0;
}