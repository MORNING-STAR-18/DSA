#include<iostream>
using namespace std;
int main(){
    int m,n;
    cout<<"enter no of rows";
    cin>>n;
    cout<<"enter no of coloums";
    cin>>m;
    int arr[m][n];
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>arr[i][j];
        }
    }
    int x=0;
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            x+=arr[i][j];
        }
    }
    cout<<x;
}