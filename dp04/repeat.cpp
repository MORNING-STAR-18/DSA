// #include<iostream>
// #include<vector>
// using namespace std;
// int ftd(vector<vector<vector<int>>> &dp, string s1, string s2,int i, int j, int k){
//     if(i == s1.size() || j ==s2.size()) return 0;
//     if(dp[i][j][k] != -1) return dp[i][j][k];
//     if(s1[i] ==s2[j]){
//         dp[i][j][k] = 1 + ftd(dp, s1, s2, i + 1, j + 1, k);
//     }
//     else{
//         if(k != 0){
//             dp[i][j][k] = 1 + ftd(dp, s1, s2, i + 1, j + 1, k - 1);
//         }
//         else{
//             dp[i][j][k] = max(ftd(dp,s1,s2, i + 1, j ,k) , ftd(dp, s1, s2, i, j + 1,k));
//         }
//     }
//     return dp[i][j][k];
// }
// int main(){

// }
#include<iostream>
#include<vector>
using namespace std;
int dp[105][105][2];
int ftd(){
    if(n == 0) return 0;
    
    if(last == 1){
        dp[n][k][last] = ftd(n - 1, k, 0, dp) + ftd(n - 1, k - 1, 1, dp);
    }
    else{
        dp[n][k][last] = ftd(n - 1, k, 0, dp) + ftd(n - 1, k, 1, dp);
    }
}
int main{

}
