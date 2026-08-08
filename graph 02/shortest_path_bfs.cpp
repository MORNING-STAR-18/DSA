#include<iostream>
#include<list>
#include<vector>
#include<climits>
#include<queue>
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
void bfs(int src, int dest, vector<int> &dist){
    queue<int> qu;
    visted.clear();
    dist.resize(v, INT_MAX);
    dist[src] = 0;
    visted.insert(src);
    qu.push(src);
    while(qu.size() != 0){
        int curr = qu.front();
        qu.pop();
        for(auto neb : graph[curr]){
            if(!visted.count(neb)){
                qu.push(neb);
                visted.insert(neb);
                dist[neb] = dist[curr] + 1;
            }
        }
    }
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
    vector<int> dist;
    bfs(x, y,dist);
    for(int i = 0; i < dist.size(); i++){
        cout<< dist[i] << " ";
    }
    return 0;
}