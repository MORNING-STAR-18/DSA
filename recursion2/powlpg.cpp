// #include<iostream>
// using namespace std;
// int pow(int x,int n){
//     if(n==0) return 1;
//     if(n==1) return x;
//     return x*pow(x,n-1);
// }
// int main(){
//     int a,b;
//     cout<<"enter base";
//     cin>>a;
//     cout<<"enter exponent";
//     cin>>b;
//     cout<<pow(a,b);
// }

#include<iostream>
using namespace std;
int pow(int x,int n){
    if(n==1) return x;
    int ans;
    ans=pow(x,n/2);
    if(n%2==0) return ans*ans;
    else return ans*ans*x;
}
int main(){
    int a,b;
    cout<<"enter the base";
    cin>>a;
    cout<<"enter the power";
    cin>>b;
    cout<<pow(a,b);
}