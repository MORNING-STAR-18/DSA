#include<iostream>
using namespace std;
int main(){
    int m,n,p,q;
    cout<<"enter the rows";
    cin>>m;
    cout<<"enter the coloums";
    cin>>n;
    int arr1[m][n];
    int arr2[m][n];
    cout<<"enter number in first array"<<endl;
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>arr1[i][j];
        }
    }
    cout<<"enter number in second array"<<endl;
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>arr2[i][j];
        }
    }
    int res[m][n];
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            res[i][j]=arr1[i][j]+arr2[i][j];
        }
    }
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cout<<res[i][j]<<" ";
        }
        cout<<endl;
    }
}