#include<iostream>
#include<vector>
using namespace std;
vector<long long int>factorial(int n){
    vector<long long int>fact(n+1,1);
    int mod=1000000000+7;
    for(int i=2;i<=n;i++){
        fact[i]=((i%mod)*(fact[i-1])%mod)%mod;
    }
    return fact;
}
int main(){
    int n;
    cout<<"enter a number from which you want the modulo";
    cin>>n;
    vector<long long int>result=factorial(n);
    for(int i=0;i<result.size();i++){
        cout<<result[i]<<endl;
    }
    
}