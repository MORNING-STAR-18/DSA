#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter a number";
    cin>>n;
    int a=1,b=0,sum;
    for(int i=1;i<=n;i++){
        sum=a+b;
        a=b;
        b=sum;
    }
    cout<<sum;
    
}