#include<iostream>
using namespace std;
void fun(int n){
    if(n==0) return ;
    cout<<"hello world"<<endl;
    fun(n-1);
}
int main(){
    int n;
    cout<<"enter the number ";
    cin>>n;
    fun(n);
}