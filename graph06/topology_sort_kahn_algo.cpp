#include<bits/stdc++.h>
using namespace std;
vector<list<int>> graph;
int v;
void add_edges(int a, int b, bool bi_dir){
    graph[a].push_back(b);
    if(bi_dir){
        graph[b].push_back(a);
    }
}
void topobfs(){
    vector<int> indedegree(v, 0);
    for(int i = 0; i < v; i++){
        for(auto neb : graph[i]){
            indedegree[neb] ++;
        }
    }
    queue<int> q;
    unordered_set<int> vis;
    for(int i = 0; i < v; i++){
        if(indedegree[i] == 0){
            q.push(i);
            vis.insert(i);
        }
    }
    while(! q.empty()){
        int node = q.front();
        cout << node << " ";
        q.pop();
        for(auto neb : graph[node]){
            if(! vis.count(neb)){
                indedegree[neb] --;
                if(indedegree[neb] == 0){
                    q.push(neb);
                    vis.insert(neb);
                }
            }
        }
    }
}
int main(){
    cin >> v;
    int e;
    cin >> e;
    graph.resize(v, list<int> ());
    while(e --){
        int x, y;
        cin >> x >> y;
        add_edges(x, y, false);
    }
    topobfs();
    return 0;
}