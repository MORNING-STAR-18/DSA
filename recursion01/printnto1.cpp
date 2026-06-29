#include<iostream>
using namespace std;
void print(int i,int n){
    if(i==n+1) return ;
    cout<<i<<endl;
    print (i+1,n);
}
int main(){
    int n;
    cout<<"enter the number";
    cin>>n;
    print(1,n);
}