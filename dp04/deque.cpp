#include<iostream>
#include<vector>
using namespace std;
int ftd(int i,int j,vector<int> &v,vector<vector<int>>&dp){
    if(i == j) return v[i];
    if(dp[i][j] != -1) return dp[i][j];
    dp[i][j] = max(v[i] - ftd(i+1,j,v,dp) ,v[j] - ftd(i, j-1, v, dp));
    return dp[i][j];
}
int main(){
    
    vector<vector<int>>dp(1000,vector<int>(1000,-1));
    int n;
    cin>>n;
    vector<int> v(n);
    for(int i = 0; i < n; i++){
        cin>>v[i];
    }
    cout<<ftd(0,n-1,v,dp);
}