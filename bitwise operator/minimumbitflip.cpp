#include<iostream>
using namespace std;
int main(){
    int n1;
    int n2;
    cout<<"enter first number";
    cin>>n1;
    cout<<"enter second number";
    cin>>n2;
    cout<<__builtin_popcount(n1^n2);
}