#include<iostream>
#include<vector>
#include<list>
#include<unordered_set>
using namespace std;
vector<list<int>> graph;
int v;
unordered_set<int> visted;
void addedges(int src, int dest, bool bi_directional){
    graph[src].push_back(dest);
    if(bi_directional){
        graph[dest].push_back(src);
    }
}
void dfs(int node, unordered_set<int> &visted){
    visted.insert(node);
    for(auto neb : graph[node]){
        if(visted.count(neb) == 0) dfs(neb, visted);
    }
}
int connnected(){
    int result;
    for(int i = 0; i < v; i++){
        if(visted.count(i) != 0) {
            result ++;
            dfs(i, visted);
        }
    }
    return result;
}
int main(){
    cin >> v;
    graph.resize(v, list<int> ());
    int e;
    cin >> e;
    while(e --){
        int s, d;
        cin >> s >> d;
        addedges(s, d, true);
    }
    int ans = connnected();
    cout << ans;
}