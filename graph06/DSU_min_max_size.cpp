#include<iostream>
#include<vector>
using namespace std;
int find(vector<int> &parent, int x){
    if(parent[x] == x) return x;
    return parent[x] = find(parent, parent[x]);
}
void Union(vector<int> &parent,vector<int> &size, vector<int> &minimal, vector<int> &maximal, vector<int> &rank, int a, int b){
    a = find(parent, a);
    b = find(parent, b);
    if(a == b) return;
    if(rank[a] > rank[b]){
        parent[b] = a;
        size[a] += size[b];
        maximal[a] = max(maximal[a], maximal[b]);
        minimal[a] = min(minimal[a], minimal[b]);
    }
    else if(rank[a] < rank[b]){
        parent[a] = b;
        size[b] += size[a];
        maximal[b] = max(maximal[a], maximal[b]);
        minimal[b] = min(minimal[a], minimal[b]);
    }
    else{       
        parent[b] = a;
        minimal[a] = min(minimal[a], minimal[b]);
        maximal[a] = max(maximal[a], maximal[b]);
        rank[a]++;
        size[a] += size[b];
    }
}
int main(){
    int n, m; // n repersent no of element , m repersent no of queury
    cin >> n >> m;
    vector<int> parent(n + 1);
    vector<int> rank(n + 1, 0);
    vector<int> sz(n + 1, 1);
    vector<int> minimal(n + 1, 0);
    vector<int> maximal(n + 1, 0);
    for(int i = 0; i <= n; i ++){
        parent[i] = i;
        maximal[i] = i;
        minimal[i] = i;
    }
    while(m --){
        string str;
        cin >> str;
        if(str == "union"){
            int x, y;
            cin >> x >> y;
            Union(parent, sz, minimal, maximal, rank, x, y);
        }
        else{
            int x;
            cin >> x;
            int root = find(parent, x); // Pehle root nikalo
            cout << minimal[root] << " " << maximal[root] << " " << sz[root] << endl; // Root ki values print karo
        }
    }
}