#include<iostream> 
#include<vector>
#include<list>
#include<unordered_set>
using namespace std;
vector<list<int>> graph;
int v;
unordered_set<int> visted;
void add_edges(int src, int dest, bool bi_dir){
    graph[src].push_back(dest);
    if(bi_dir){
        graph[dest].push_back(src);
    }
}
void dfs(int node, unordered_set<int> &visted){
    visted.insert(node);
    for(auto neb : graph[node]){
        if(! visted.count(neb)) dfs(neb, visted);
    }
}
int conneced(){
    int result = 0;
    for(int i = 0 ; i < v; i++){
        if(visted.count(i) == 0){
            result++;
            dfs(i, visted);
        }
    }
    return result;
}
int main (){
    cin >> v;//vertex
    graph.resize(v, list<int> ());
    int e;//edges
    cin >> e;
    while(e --){
        int s, d;
        cin >> s >> d;
        add_edges(s, d, false);
    }
    cout << conneced() << endl;
    return 0;
}