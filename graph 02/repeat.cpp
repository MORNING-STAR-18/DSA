// #include<iostream>
// #include<list>
// #include<vector>
// using namespace std;
// vector<list<int>> graph;
// int v;
// void addedges(int src, int dest, bool bidirection){
//     graph[src].push_back(dest);
//     if(bidirection) graph[dest].push_back(src);
// }
// void display(){
//     for(int i = 0 ; i < graph.size(); i++){
//         cout << i << "->";
//         for(auto x : graph[i]){
//             cout << x << ",";
//         }
//         cout << endl;
//     }
// }
// int main(){
//     cin >> v;
//     graph.resize(v, list<int> ());
//     int e;
//     cin >> e;
//     while(e--){
//         int src;
//         int dest;
//         cin >> src >> dest;
//         addedges(src, dest, true);
//     }
//     display();
// }


// #include<iostream>
// #include<list>
// #include<vector>
// using namespace std;
// vector<list<pair<int,int> > > graph;
// int v;
// void add(int src, int dest, int wet, bool biderction){
//     graph[src].push_back({dest, wet});
//     if(biderction) graph[dest].push_back({src, wet});
// }
// void display(){
//     for(int i = 0; i < graph.size(); i++){
//         cout << i << "->";
//         for(auto ele : graph[i]){
//             cout <<"("<< ele.first <<"," << ele.second << ")";
//         }
//         cout << endl;
//     }
// }
// int main(){
//     cin >> v;
//     graph.resize(v, list<pair<int,int>>());
//     int e;
//     cin >> e;
//     while(e --){
//         int src, dest, wet;
//         cin >> src >> dest >> wet;
//         add(src, dest, wet, true);
//     }
//     display();
// }

// #include<iostream>
// #include<unordered_map>
// #include<vector>
// using namespace std;
// vector<unordered_map<int,int>>graph;
// int v;
// void add(int src, int dest, int wet, bool directional){
//     graph[src].insert({dest, wet});
//     if(directional){
//         graph[dest].insert({src, wet});
//     }
// }
// void display(){
//     for(int i = 0; i < graph.size(); i++){
//         cout << i << "->";
//         for(auto ele : graph[i]){
//             cout<< "(" << ele.first << " " << ele.second << ") , ";
//         }
//         cout << endl;
//     }
// }
// int main(){
//     cin >> v;
//     graph.resize(v, unordered_map<int,int>());
//     int e;
//     cin >> e;
//     while(e --){
//         int src, dest, wet;
//         cin >> src >> dest >> wet;
//         add(src, dest, wet, true);
//     }
//     display();
// }


// #include<iostream>
// #include<unordered_set>
// #include<vector>
// #include<list>
// using namespace std;
// vector<list<int>> graph;
// unordered_set<int> s;
// int v;
// void add(int src, int dest, bool biderctional){
//     graph[src].push_back(dest);
//     if(biderctional) graph[dest].push_back(src);
// }
// bool anypath(int src, int dest){
//     if(src == dest) return true;
//     s.insert(src);
//     bool result = false;
//     for(auto neb : graph[src]){
//         if(s.find(neb) == s.end()){
//             result = result || anypath(neb, dest);
//         }
//     }
//     return result;
// }
// int main(){
//     cin >> v;
//     graph.resize(v, list<int> ());
//     int e;
//     cin >> e;
//     while(e--){
//         int src, dest;
//         cin >> src >> dest;
//         add(src, dest, true);
//     }
// }


// #include<iostream>
// #include<vector>
// #include<unordered_set>
// #include<list>
// using namespace std;
// vector<list<int>> graph;
// vector<vector<int>> result;
// unordered_set<int> s;
// int v;
// void add(int src, int dest, bool directional){
//     graph[src].push_back(dest);
//     if(directional) graph[dest].push_back(src);
// }
// void allpath(int src, int dest, vector<int> path, unordered_set<int> s){
//     path.push_back(src);
//     if(src == dest){
//         result.push_back(path);
//         return;
//     }
//     s.insert(src);
//     for(auto neb : graph[src]){
//         if(s.find(neb) == s.end()) {
//             allpath(neb, dest, path, s);
//         }
//     }
//     return ;
// }
// void allpath2(int src, int dest, vector<int> &path){
//     if(src == dest){
//         path.push_back(src);
//         result.push_back(path);
//         path.pop_back();
//         return;
//     }
//     s.insert(src);
//     for(auto neb : graph[src]){
//         if(s.find(neb) != s.end()) allpath2(neb, dest, path);
//     }
//     path.pop_back();
//     s.erase(src);
//     return;
// }
// int main(){
//     cin >> v;
//     int e;
//     cin >> e;
//     while(e --){
//         int src, dest;
//         cin >> src >> dest;
//         add(src, dest, true);
//     }
// }


#include<iostream>
#include<vector>
#include<list>
#include<unordered_set>
#include<queue>
using namespace std;
vector<list<int>> graph;
unordered_set<int> s;
int v;
void add(int src, int dest, bool bidirectional){
    graph[src].push_back(dest);
    if(bidirectional) graph[dest].push_back(src);
}
void bfs(int src, int dest, vector<int> &dist){
    queue<int> q;
    dist.resize(v, -1);
    dist[src] = 0;
    q.push(src);
    s.insert(src);
    while(q.size() > 0){
        int curr = q.front();
        q.pop();
        for(auto neb : graph[curr]){
            if(s.find(neb) == s.end()){
                s.insert(neb);
                q.push(neb);
                dist[neb] = dist[curr] + 1;
            }
        }
    }
}
int main(){
    cin >> v;
    graph.resize(v, list<int> ());
    s.clear();
    int e;
    cin >> e;
    while(e --){
        int s, d;
        cin >> s >> d;
        add(s, d, true);
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