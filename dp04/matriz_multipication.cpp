#include<iostream>
#include<vector>
#include<climits>
using namespace std;
int f(int i,int j,vector<int>&arr,vector<vector<int>>&dp){
    if(i==j || i+1 == j) return 0;
    if(dp[i][j]!=-1) return dp[i][j];
    int ans = INT_MAX; 
    for(int k=i+1;k<j;k++){
        ans=min(ans,f(i,k,arr,dp)+f(k,j,arr,dp)+arr[i]*arr[j]*arr[k]);
    }
    return dp[i][j]=ans;
}
int main(){
    int n;
    cin>>n;
    vector<int>v(n);
    vector<vector<int>>dp(1005,vector<int>(1000,-1));
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    cout<<f(0,n-1,v,dp);
}