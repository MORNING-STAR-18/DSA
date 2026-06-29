#include<iostream>
using namespace std;
void factupto(int n){
    int f=1;
    for(int i=1;i<n+1;i++){
        f*=i;
        cout<<f;
        cout<<endl;
    }
}
int main(){
    int n;
    cout<<"enter the number you want to find the factorial";
    cin>>n;
    factupto(n);
}