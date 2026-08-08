#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter no of rows";
    cin>>n;
    int m=n-1;
    for(int i=1;i<=2*n-1;i++){
        cout<<i;
    }
    cout<<endl;
    for(int i=1;i<=m;i++){
        int a=1;
        for(int j=1;j<=m-i+1;j++){
            cout<<a;
            a++;
        }
        for(int k=1;k<=2*i-1;k++){
            cout<<" ";
            a++;
        }
        for(int j=1;j<=m-i+1;j++){
            cout<<a;
            a++;
        }
        cout<<endl;
    }
}
