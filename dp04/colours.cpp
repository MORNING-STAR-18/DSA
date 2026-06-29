#include<iostream>
#include<climits>
#include<vector>
using namespace std;
long long g(vector<int> &nums,int i,int j){
    long long result = 0;
    for(int m=i;m<=j;m++){
        result = (result%100 + nums[m]%100) % 100;
    }
    return result;
}
long long ftd(vector<int>&nums,vector<vector<long long>>&dp,int i,int j){
    if(i==j) return 0;
    if(i+1==j) return nums[i]*nums[j];
    long long ans=LLONG_MAX;
    if(dp[i][j]!=-1) return dp[i][j];
    for(int k=i;k<j;k++){
        ans = min(ans,ftd(nums,dp,i,k) + ftd(nums,dp,k+1,j) +g(nums,i,k)*g(nums,k+1,j));
    }
    dp[i][j] = ans;
    return dp[i][j];
}
int main(){
    int n;
    cin>>n;
    vector<int>colours(n);
    for(int i = 0;i < n; i++){
        cin>>colours[i];
    }
    vector<vector<long long>>dp(n+1,vector<long long>(n+1,-1));
    cout<<ftd(colours,dp,0,colours.size()-1);
}