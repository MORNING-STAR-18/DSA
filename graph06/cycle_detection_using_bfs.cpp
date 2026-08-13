#include<iostream> 
#include<vector>
#include<list>
#include<unordered_set>
#include<queue>
using namespace std;
vector<list<int>> graph;
int v;
void add_edges(int src, int dest, bool bi_dir){
    graph[src].push_back(dest);
    if(bi_dir){
        graph[dest].push_back(src);
    }
}
void display(){
    for(int i = 0 ; i < graph.size(); i++){
        cout << i << " -> ";
        for(auto ele : graph[i]){
            cout<< ele << ",";
        }
        cout << endl;
    }
}
bool bfs(int src){
    unordered_set<int> vis;
    queue<int> qu;
    vector<int> par(v, -1);
    qu.push(src);
    vis.insert(src);
    par[src] = -1;
    while(! qu.empty()){
        int curr = qu.front();
        qu.pop();
        for(auto neb : graph[curr]){
            if(vis.count(neb) && par[curr] != neb) return true;
            if(!vis.count(neb)){
                vis.insert(neb);
                par[neb] = curr;
                qu.push(neb);
            }
        }
    }
    return false;
}
bool has_cycle(){
    unordered_set<int> vis;
    bool result = false;
    for(int i = 0; i < v; i++){
        if(! vis.count(i)){
            result = bfs(i);
            if(result == true) return true;
        }
    }
    return false;
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
    display();
    bool b = has_cycle();
    cout <<b <<"\n";
    return 0;
}