#include<bits/stdc++.h>
#define ll long long int
#define pp pair<int, int>
using namespace std;
vector<list<pp>> graph;// {node, wt}
void add_edges(int src, int dest, int wt, bool bi_dir = true){
    graph[src].push_back({dest, wt});
    if(bi_dir){
        graph[dest].push_back({src, wt});
    }
}
ll prims(int src, int n){
    priority_queue<pp, vector<pp>, greater<pp> > pq; //{wt, node}
    unordered_set<int> vis;
    vector<int> par(n + 1);
    unordered_map<int, int> mp;
    for(int i = 0; i <= n; i++){
        mp[i] = INT_MAX;
    }
    pq.push({0, src});
    mp[src] = 0;
    int total_count = 0; // 0 -> n - 1 edges
    ll result = 0; // sum of wt
    while(!pq.empty() && total_count < n){
        pp curr = pq.top();
        if(vis.count(curr.second)){
            pq.pop();
            continue;
        }
        vis.insert(curr.second);
        total_count ++;
        result += curr.first;
        for(auto neb : graph[curr.second]){
            if(! vis.count(neb.first) && mp[neb.first] > neb.second){
                pq.push({neb.second, neb.first});
                par[neb.first] = curr.second;
                mp[neb.first] = neb.second;
            }
        }
    }
    return result;
}
int main (){
    int n, m;
    cin >> n >> m;
    graph.resize(n + 1, list<pp>());
    while(m --){
        int u, v, wt;
        cin >> u >> v >> wt;
        add_edges(u, v, wt);
    }
    int src;
    cin >> src;
    cout << prims(src, n);
}