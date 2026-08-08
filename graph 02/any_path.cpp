#include<iostream>
#include<list>
#include<vector>
#include<unordered_set>
using namespace std;
unordered_set<int> visted;
vector<list<int>> graph;
int v;
void add_edges(int src, int dest, bool bi_dir){
    graph[src].push_back(dest);
    if(bi_dir){
        graph[dest].push_back(src);
    }
}
bool dfs(int curr, int end){
    if(curr == end) return true;
    visted.insert(curr);
    for(auto neb : graph[curr]){
        if(!visted.count(neb)){
            bool result = dfs(neb, end);
            if(result == true) return true;
        }
    }
    return false;
}
bool anypath(int src, int dest){
    return dfs(src, dest);
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
        add_edges(s, d, false);
    }
    int x, y;
    cin>> x >> y;
    cout<< anypath(x, y) << endl;
    return 0;
}