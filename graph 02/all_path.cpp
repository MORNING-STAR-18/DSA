#include<iostream>
#include<list>
#include<vector>
#include<unordered_set>
using namespace std;
unordered_set<int> visted;
vector<vector<int>> result;
vector<list<int>> graph;
int v;
void add_edges(int src, int dest, bool bi_dir = true){
    graph[src].push_back(dest);
    if(bi_dir){
        graph[dest].push_back(src);
    }
}
void dfs(int curr, int end, vector<int> &path){
    if(curr == end) {
        path.push_back(curr);
        result.push_back(path);
        path.pop_back();
        return;
    }
    visted.insert(curr);
    path.push_back(curr);
    for(auto neb : graph[curr]){
        if(!visted.count(neb)){
            dfs(neb, end, path);
        }
    }
    path.pop_back();
    visted.erase(curr);
    return ;
}
void allpath(int src, int dest){
    vector<int> path;
    dfs(src, dest, path);
}
int main(){
    cin >> v;
    graph.resize(v, list<int> ());
    visted.clear();
    int e;
    cin >> e;
    while(e --){
        int s, d;
        cin >> s >> d;
        add_edges(s, d);
    }
    int x, y;
    cin>> x >> y;
    allpath(x, y);
    for(auto path : result){
        for(auto ele : path){
            cout<< ele << " ";
        }
        cout<<endl;
    }
    return 0;
}