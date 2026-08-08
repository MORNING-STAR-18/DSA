#include<iostream>
#include<algorithm>
#include<vector>
#define ll long long int
using namespace std;
ll mincost(int n,int m,vector<ll>&x,vector<ll>&y){
    sort(x.begin(),x.end(),greater<ll>());
    sort(y.begin(),y.end(),greater<ll>());
    int hz=1;
    int vr=1;
    int h=0;
    int v=0;
    int ans=0;
    while(h<y.size() && v<x.size()){
        if(x[v]>y[h]){
            ans+=x[v]*vr;
            hz++;
            v++;
        }
        else{
            ans+=y[h]*hz;
            vr++;
            h++;
        }
    }
    while(h<y.size()){
        ans+=y[h]*hz;
        vr++;
        h++;
    }
    while(v<x.size()){
        ans+=x[v]*vr;
        hz++;
        v++;
    }
    return ans;
}
int main(){
    int m,n;
    cin>>m>>n;
    vector<ll>x,y;
    for(int i=0;i<m-1;i++){
        int a;
        cin>>a;
        x.push_back(a);
    }
    for(int i=0;i<n-1;i++){
        int a;
        cin>>a;
        y.push_back(a);
    }
    cout<<mincost(n,m,y,x);
}
// 6
// 4
// 2
// 1
// 3
// 1
// 4
// 4
// 1
// 2