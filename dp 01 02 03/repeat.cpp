// #include<iostream>
// #include<algorithm>
// #include<vector>
// #include<climits>
// using namespace std;
// vector<int>digit(int n){
//     vector<int>d;
//     while(n>0){
//         d.push_back(n%10);
//         n/=10;
//     }
//     return d;
// }
// int ftb(int n,vector<int>&dp){
//     if(n==0) return 0;
//     if(n<10) return 1;
//     vector<int>d=digit(n);
//     if(dp[n]!=-1) return dp[n];
//     int ans=INT_MAX;
//     for(int i=0;i<d.size();i++){
//         if(d[i]==0) continue;
//         ans=min(ans , ftb(n-d[i],dp));
//     }
//     dp[n]=ans+1;
//     return dp[n];
// }
// int main(){
//     int n;
//     cout<<"enter a number";
//     cin>>n;
//     vector<int>dp(n+1,-1);
//     cout<<ftb(n,dp);
// }


// #include<iostream>
// #include<vector>
// #include<climits>
// using namespace std;
// int ftd(int n,vector<int>&coins,vector<int>&dp){
//     if(n==0) return 0;
//     if(dp[n]!=-1) return dp[n];
//     int ans=INT_MAX;
//     for(int i=0;i<coins.size();i++){
//         if(n-coins[i]<0) continue;
//         ans=min(ans,ftd(n-coins[i],coins,dp));
//     }
//     if(ans!=INT_MAX){
//         dp[n]=ans+1;
//     }
//     else{
//         dp[n]=INT_MAX;
//     }
//     return dp[n];
// }
// int main(){
//     int n;
//     cout<<"enter the target";
//     cin>>n;
//     vector<int>dp(n+1,-1);
//     vector<int>coins={2,3};
//     int x=ftd(n,coins,dp);
//     if(x==INT_MAX) cout<<-1;
//     else cout<<x;
// }


#include<iostream>
#include<vector>
using namespace std;
int dic(int n,vector<int>&dp,int a){
    if(n==0) return 1;
    if(dp[n]!=-1) return dp[n];
    for(int i=1;i<=6;i++){
        if(n-i<0) break;
        a+=(dic(n-i,dp,a));
    }
    dp[n]=a;
    return dp[n];
}
int main(){
    int n;
    cout<<"enter the target";
    cin>>n;
    int ans=0;
    vector<int>dp(n+1,-1);
    cout<<dic(n,dp,ans);
}