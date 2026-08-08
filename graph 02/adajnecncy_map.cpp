#include<iostream> 
#include<unordered_map>
#include<vector>
using namespace std;
vector<unordered_map<int, int> > graph;
int v;
void add_edges(int src, int dest, int wt, bool bi_dir){
    graph[src][dest] = wt;
    if(bi_dir){
        graph[dest][src] = wt;
    }
}
void display(){
    for(int i = 0 ; i < graph.size(); i++){
        cout << i << " -> ";
        for(auto ele : graph[i]){
            cout<< "(" << ele.first << " " << ele.second << ") , ";
        }
        cout << endl;
    }
}
int main (){
    cin >> v;
    graph.resize(v, unordered_map<int, int>());
    int e;
    cin >> e;
    while(e --){
        int s, d, wt;
        cin >> s >> d >> wt;
        add_edges(s, d, wt, true);
    }
    display();
    return 0;
}