#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int find(vector<int> &parent, int x){
    if(x == parent[x]) return x;
    return parent[x] = find(parent, parent[x]);
}

void Union(int a, int b, vector<int> &parent, vector<int> &rank){
    a = find(parent, a);
    b = find(parent, b);
    if(a == b) return;
    if(rank[a] > rank[b]){
        parent[b] = a;
    }
    else if(rank[b] < rank[a]){
        parent[a] = b;
    }
    else{
        parent[b] = a;
        rank[a] ++;
    }
}
struct Edge{
    int src;
    int dest;
    int wt;
};
bool cmp(Edge e1, Edge e2){
    return e1.wt < e2.wt;
}
ll Kruskals(vector<Edge> &input, int n, int e){
    sort(input.begin(), input.end(), cmp);
    vector<int> parent(n + 1);
    vector<int> rank(n + 1, 1);
    for(int i = 0; i <= n; i++){
        parent[i] = i;
    }
    int edgecount = 0;
    int i = 0;
    ll ans = 0;
    while(edgecount < n - 1 && i < input.size()){
        Edge curr = input[i];
        int srcpar = find(parent, curr.src);
        int destpar = find(parent, curr.dest);
        if(srcpar != destpar){
            Union(srcpar, destpar, parent, rank);
            ans += curr.wt;
            edgecount ++;
        }
        i ++;
    }
    return ans;
}
int main(){
    int n, e;
    cin >> n >> e;
    vector<Edge> v(e);
    for(int i = 0; i < e; i++){
        cin >> v[i].src >> v[i].dest >> v[i].wt;
    }
    cout << Kruskals(v, n, e) << endl;
}