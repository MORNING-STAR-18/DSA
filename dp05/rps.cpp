#include<iostream>
#include<cstring>
using namespace std;
double dp[105][105][105];
double ftds(int r, int p, int s){
    if(s == 0 || p == 0) return 0.0;
    if(r == 0) return 1.0;
    double total = r * p + p * s + s * r;
    double result = 0;
    if(dp[r][p][s] > -0.9) return dp[r][p][s];
    result += ftds(r-1, s, p) * (r * p) / total;
    result += ftds(r, s - 1, p) * (r * s) / total;
    result += ftds(r, s, p - 1) * (s * p) / total;
    return dp[r][p][s] = result;
}
double ftdr(int r, int p, int s){
    if(r == 0 || s == 0) return 0.0;
    if(p == 0) return 1.0;
    double total = r * p + p * s + s * r;
    double result = 0;
    if(dp[r][p][s] > -0.9) return dp[r][p][s];
    result += ftdr(r-1, s, p) * (r * p) / total;
    result += ftdr(r, s - 1, p) * (r * s) / total;
    result += ftdr(r, s, p - 1) * (s * p) / total;
    return dp[r][p][s] = result;
}
double ftdp(int r, int p, int s){
    if(r == 0 || p == 0) return 0.0;
    if(s == 0) return 1.0;
    double total = r * p + p * s + s * r;
    double result = 0;
    if(dp[r][p][s] > -0.9) return dp[r][p][s];
    result += ftdr(r-1, s, p) * (r * p) / total;
    result += ftdr(r, s - 1, p) * (r * s) / total;
    result += ftdr(r, s, p - 1) * (s * p) / total;
    return dp[r][p][s] = result;
}
int main(){
    int p;
    int s;
    int r;
    cin>> p >> s >> r;
    memset(dp, -1, sizeof(dp));
    double pp = ftdp(r, p, s);
    memset(dp, -1, sizeof(dp));
    double sp = ftds(r, p, s);
    memset(dp, -1, sizeof(dp));
    double rp = ftds(r, p, s);
    cout<<pp << endl << sp << endl << rp;
}