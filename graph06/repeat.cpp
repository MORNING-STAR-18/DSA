// #include<iostream>
// #include<vector>
// using namespace std;
// int find(vector<int> &parent, int x){
//     if(x == parent[x]) return x;
//     return parent[x] = find(parent, parent[x]);
// }
// void Union(vector<int> &parent, vector<int> &rank, int a , int b){
//     a = find(parent, a);
//     b = find(parent, b);
//     if(a == b) return;
//     if(rank[a] > rank[b]){
//         parent[b] = a;
//     }
//     else if(rank[a] < rank[b]){
//         parent[a] = b;
//     }
//     else{
//         parent[b] = a;
//         rank[a] ++;
//     }
// }
// int main(){
//     int n ,m;
//     cin >> n >> m;
//     vector<int> parent(n + 1);
//     vector<int> rank(n + 1, 0);
//     for(int i = 0; i <= n; i++){
//         parent[i] = i;
//     }
//     while(m --){
//         string str;
//         cin >> str;
//         if(str == "Union"){
//             int a , b;
//             cin >> a >> b;
//             Union(parent, rank, a , b);
//         }
//         else{
//             int x;
//             cin >> x;
//             cout << find(parent, x);
//         }
//     }
// }


// #include<iostream>
// #include<vector>
// using namespace std;
// int find(int x, vector<int> &parent){
//     if(x == parent[x]) return x;
//     return parent[x] = find(parent[x], parent);
// }
// void Union(vector<int> &parent, vector<int> &rank, vector<int> &minimal, vector<int> &maximal, vector<int> &sz, int a, int b){
//     a = find(a, parent);
//     b = find(b, parent);
//     if(a == b) return;
//     if(rank[a] > rank[b]){
//         parent[b] = a;
//         minimal[a] = min(minimal[a], minimal[b]);
//         maximal[a] = max(maximal[a], maximal[b]);
//         sz[a] += sz[b];
//     }
//     else if(rank[a] < rank[b]){
//         parent[a] = b;
//         minimal[b] = min(minimal[a], minimal[b]);
//         maximal[b] = max(maximal[a], maximal[b]);
//         sz[b] += sz[a];
//     }
//     else{
//         parent[b] = a;
//         rank[a] ++;
//         minimal[a] = min(minimal[a], minimal[b]);
//         maximal[a] = max(maximal[a], maximal[b]);
//         sz[a] += sz[b];
//     }
// }
// int main(){
//     int n, m;
//     cin >> n >> m;
//     vector<int> parent(n + 1);
//     vector<int> rank(n + 1, 0);
//     vector<int> minimal(n + 1, 0);
//     vector<int> maximal(n + 1, 0);
//     vector<int> sz(n + 1, 0);
//     for(int i = 0; i <= n; i ++){
//         parent[i] = i;
//         maximal[i] = i;
//         minimal[i] = i;
//     }
// }


// #include<iostream>
// #include<vector>
// #include<queue>
// #include<list>
// #include<unordered_set>
// using namespace std;
// int v;
// vector<list<int>> graph;
// void add_edges(int src, int dest, bool bi_dir){
//     graph[src].push_back(dest);
//     if(bi_dir){
//         graph[dest].push_back(dest);
//     }
// }
// void topobfs(){
//     vector<int> indegree(v, 0);
//     for(int i = 0; i < v; i++){
//         for(auto neb : graph[i]){
//             indegree[neb] ++;
//         }
//     }
//     queue<int> qu;
//     unordered_set<int> vis;
//     for(int i = 0; i < v; i++){
//         if(indegree[i] == 0){
//             qu.push(i);
//             vis.insert(i);
//         }
//     }
//     while(qu.size() != 0){
//         int node = qu.front();
//         cout << node << " ";
//         qu.pop();
//         for(auto neb : graph[node]){
//             if(vis.count(neb) == 0){
//                 indegree[neb] --;
//                 if(indegree[neb] == 0){
//                     qu.push(neb);
//                     vis.insert(neb);
//                 }
//             }
//         }
//     }
// }
// int main (){
//     int e;
//     cin >> v >> e;
//     graph.resize(v, list<int>());
//     while(e --){
//         int x, y;
//         cin >> x >> y;
//         add_edges(x, y, false);
//     }
//     topobfs();
//     return 0;
// }


// #include<iostream>
// #include<vector>
// using namespace std;
// int find(int x, vector<int> &parent){
//     if(x == parent[x]) return x;
//     parent[x] = find(parent[x], parent);
// }
// bool Union(int a, int b, vector<int> &parent, vector<int> &rank){
//     a = find(a, parent);
//     b = find(b, parent);
//     if(a == b) return true;
//     if(rank[a] > rank[b]){
//         parent[b] = a;
//     }
//     else if(rank[a] < rank[b]){
//         parent[a] = b;
//     }
//     else{
//         parent[b] = a;
//         rank[a] ++;
//     }
//     return false;
// }
// int main(){
//     int x, y;
//     cin >> x >> y;
//     vector<int> parent(x + 1, 0);
//     vector<int> rank(x + 1, 0);
//     for(int i = 0; i <= x; i++){
//         parent[i] = i;
//     }
//     while(y --){
//         int p, q;
//         cin >> p >> q;
//         bool b = Union(p, q, parent, rank);
//         if(b == true) return true;
//     }
//     return false;
// }


#include<iostream>
#include<vector>
#include<list>
#include<unordered_set>
using namespace std;
void add_edges(int src, int dest, bool bi_dir){
    
}
int main(){

}