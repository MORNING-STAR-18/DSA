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
unordered_map<int, int> dijkstra(int src, int n){
    priority_queue<pp, vector<pp>, greater<pp> > pq; //{wt, node}
    unordered_set<int> vis;
    vector<int> via(n + 1);
    unordered_map<int, int> mp;
    for(int i = 0; i <= n; i++){
        mp[i] = INT_MAX;
    }
    pq.push({0, src});
    mp[src] = 0;
    while(!pq.empty()){
        pp curr = pq.top();
        pq.pop();
        if(vis.count(curr.second)){
            continue;
        }
        vis.insert(curr.second);
        for(auto neb : graph[curr.second]){
            if(! vis.count(neb.first) && mp[neb.first] > mp[curr.second] + neb.second){
                pq.push({mp[curr.second] + neb.second, neb.first});
                via[neb.first] = curr.second;
                mp[neb.first] = mp[curr.second] + neb.second;
            }
        }
    }
    return mp;
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
    unordered_map<int, int> sp = dijkstra(src, n);
    int dest;
    cin >> dest;
    cout << sp[dest] << endl;
    return 0;
}