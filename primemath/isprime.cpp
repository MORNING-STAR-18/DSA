#include<iostream>
#include<cmath>
using namespace std;
bool isprime(int n){
    if(n==1) return false;
    for(int i=2;i<=sqrt(n);i++){
        if(n%i==0) return false;
    }
    return true;
}
void printfactor(int n){
    for(int i=1;i<=sqrt(n);i++){
        if(n%i==0){
            cout<<i<<" ";
            if(i!=sqrt(n)) cout<<n/i<<" ";
        }
    }
}
int main(){
    int n;
    cout<<"enter a number ";
    cin>>n;
    // cout<<isprime(n);
    printfactor(n);
}