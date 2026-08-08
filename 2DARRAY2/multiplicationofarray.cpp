#include<iostream>
using namespace std;
int main(){
    int m,n;
    cout<<"enter rows of 1st matrix";
    cin>>m;
    cout<<"enter coloums of 1st matrix";
    cin>>n;
    int p,q;
    cout<<"enter rows of 2nd matrix";
    cin>>p;
    cout<<"enter coloums of 2nd matrix";
    cin>>q;
    if(n==p){
        int a[m][n];
        cout<<"enter element in 1st matrix:";
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                cin>>a[i][j];
            }
        }
        int b[p][q];
        cout<<"enter element in 2nd matrix:";
        for(int i=0;i<p;i++){
            for(int j=0;j<q;j++){
                cin>>b[i][j];
            }
        }
        int r[m][q];
        for(int i=0;i<m;i++){
            for(int j=0;j<q;j++){
                r[i][j]=0;
               for(int k=0;k<p;k++){
                r[i][j]+=a[i][k]*b[k][j];
               }
            }
        }
        for(int i=0;i<m;i++){
            for(int j=0;j<q;j++){
                cout<<r[i][j]<<" ";
            }
            cout<<endl;
        }
    }
    else{
        cout<<"multiplication cannot be done";
    }
}