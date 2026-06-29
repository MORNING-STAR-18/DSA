#include<iostream>
#include<climits>
#include<vector>
using namespace std;
vector<int> get_digits(int n){
    vector<int>result;
    while(n>0){
        result.push_back(n%10);
        n/=10;
    }
    return result;
}
int f(int n,vector<int>&dp){
    if(n==0) return 0;
    if(n/10==0) return 1;
    if(dp[n]!=-1) return dp[n];
    vector<int>d=get_digits(n);
    int result=INT_MAX;
    for(int i=0;i<d.size();i++){
        if (d[i] == 0) continue;
        result=min(result , f(n-d[i],dp));
    }
    dp[n]=result+1;
    return dp[n];
}
int fbu(int nums,vector<int> &dp){
    dp[0]=0;
    for(int i=0;i<=9;i++){
        dp[i]=1;
        vector<int>d = get_digits(nums);
        int result = INT_MAX;
        for(int i=0;i<d.size();i++){
            result = min(result,dp[nums-d[i]]);
        }
        dp[nums] = 1+result;
    }
    return dp[nums];
}
int main(){
    int n;
    cin>>n;
    vector<int>dp(n+1,-1);
    cout<<f(n,dp);
    cout<<endl<<f(n,dp);
}