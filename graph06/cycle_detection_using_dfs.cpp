#include<iostream> 
#include<vector>
#include<list>
#include<unordered_set>
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
bool dfs(int src, int parent, unordered_set<int> &vis){
    vis.insert(src);
    for(auto neb : graph[src]){
        if(vis.count(neb) && neb != parent){
            // cycle detected
            return true;
        }
        if(! vis.count(neb)){
            bool res = dfs(neb, src, vis);
            if(res == true) return true;
        }
    }
    return false;
}
bool has_cycle(){
    unordered_set<int> vis;
    bool result = false;
    for(int i = 0; i < v; i++){
        if(! vis.count(i)){
            result = dfs(i, -1, vis);
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