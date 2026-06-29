#include<iostream>
#include<climits>
#include<vector>
using namespace std;
int c(int n ,vector<int> &coin,vector<int> &dp){
    if(n==0) return 0;
    // if(n<0) return  INT_MAX;
    int step=INT_MAX;
    if(dp[n]!= -2) return dp[n];
    for(int i=0;i<coin.size();i++){
        if(n-coin[i] < 0) continue;
        step = min(step,c(n-coin[i],coin,dp));
    }
    if(step != INT_MAX){
        dp[n] = step + 1;
    }
    else {
        dp[n]=INT_MAX ;
        // return dp[n];
    }
    return dp[n];
}
int main(){
    int n;
    cin>>n;
    vector<int>dp(n+1,-2);
    vector<int>coin={2};
    int ans=c(n,coin,dp);
    if(ans == INT_MAX) cout<<-1;
    else cout<<ans;
    
}