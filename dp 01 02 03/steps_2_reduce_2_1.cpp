#include<iostream>
#include<vector>
#include<climits>
using namespace std;
#define inf INT_MAX
int f(int n){
    if(n==1) return 0;
    if(n==2 || n==3) return 1;
    return 1 + min(f(n-1), min((n%2==0) ? f(n/2) : inf, (n%3==0) ? f(n/3) : inf));
}
int ftd(int n,vector<int> &dp){
    if(n==1) return 0;
    if(n==2 || n==3) return 1;
    if(dp[n]!=-1) return dp[n];
    dp[n] = 1 + min(ftd(n-1,dp), min((n%2==0) ? ftd(n/2,dp) : inf, (n%3==0) ? ftd(n/3,dp) : inf));
}
// int fbu(int n){
//     vector<int>dp(n+1,-1);
//     dp[1]=0;
//     dp[2] =dp[3]+1;
//     for(int i=4;i<=n;i++){
//         dp[n] = 1 + min(dp[i-1],);
//     }
// }
int main(){
    int n;
    cin>>n;
    vector<int>dp(n+1,-1);
    // cout<<f(n)<<endl;
    cout<<ftd(n,dp)<<endl;
    return 0;
}