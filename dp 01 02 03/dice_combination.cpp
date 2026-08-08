#include<iostream>
#include<vector>
#include<climits>
using namespace std;
int step=INT_MAX;
int dic(int n,vector<int>&dp){
    if(n==0) return 1;
    if(dp[n]!=-1) return dp[n];
    int sum=0;
    for(int i=1;i<=6;i++){
        if(n - i < 0) break;
        sum+=dic(n-i,dp);
    }
    dp[n]=sum;
    return dp[n];
}
int main(){
    int n;
    cout<<"enter the value";
    cin>>n;
    vector<int> dp(n+1,-1);
    cout<<dic(n,dp);
}