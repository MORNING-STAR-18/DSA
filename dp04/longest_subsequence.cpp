#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int ftd(string &s1, string &s2, int i, int j, int k, vector<vector<vector<int>>> &dp){
    if(i == s1.size() || j == s2.size()) return 0;
    if(dp[i][j][k] != -1) return dp[i][j][k];
    if(s1[i] == s2[j]){
        dp[i][j][k] = 1 + ftd(s1, s2, i + 1, j + 1, k, dp);
    }
    else{
        if(k != 0){
            dp[i][j][k] = max({1 + ftd(s1, s2, i + 1, j + 1, k - 1, dp), ftd(s1, s2, i + 1, j, k, dp), ftd(s1, s2, i, j + 1, k, dp )});
        }
        else{
            dp[i][j][k] = max(ftd(s1, s2, i + 1, j, k, dp), ftd(s1, s2, i, j + 1, k, dp ));
        }
    }
    return dp[i][j][k];
}
int main(){
    string s1 = "";
    string s2 = "";
    int k;
    cin >> k;
    int n = s1.size();
    int m = s2.size();
    vector<vector<vector<int>>> dp(n + 1,vector<vector<int>>(m + 1,vector<int>(k + 1, -1)));
    cout<< ftd(s1, s2, 0, 0, k, dp);
}