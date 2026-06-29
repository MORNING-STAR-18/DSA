#include<iostream>
using namespace std;
int main(){
    int m,n;
    cout<<"enter no of rows";
    cin>>m;
    cout<<"enter no of coloums";
    cin>>n;
    cout<<"enter element in array";
    int arr[m][n];
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>arr[i][j];
        }
    }
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
    int x,y;
    int v[m][n];
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            v[i][j]=1;
        }
    }
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            if(arr[i][j]==0){
               x=i;
               y=j;
               for(int k=0;k<m;k++){
                    for(int l=0;l<n;l++){
                        if(k==x||l==y){
                            v[k][l]=0;
                        }
                    }
                } 
            }
        }
    }   
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cout<<v[i][j]<<" ";
        }
        cout<<endl;
    }
}
