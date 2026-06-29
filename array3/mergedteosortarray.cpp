#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>v1;
    vector<int>v2;
    int n,m;
    cout<<"declare the size of first array";
    cin>>n;
    cout<<"declare the size of second array";
    cin>>m;
    cout<<"enter the number in first array"<<endl;
    for(int i=0;i<n;i++){
        int q;
        cin>>q;
        v1.push_back(q);
    }
    cout<<"enter the element in second array"<<endl;;
    for(int i=0;i<m;i++){
        int k;
        cin>>k;
        v2.push_back(k);
    }
    int i=0;
    int j=0;
    int k=0;
    vector<int>v3(m+n);
    while(i<=n-1&&j<=m-1){
        if(v1[i]<v2[j]){
            v3[k]=v1[i];
            i++; 
            k++;         
        }
       else{
            v3[k]=v2[j];
            j++;
            k++;
       }
    }
    if(i>=n){
        while(j<=m-1){
            v3[k]=v2[j];
            k++;
            j++;
        }
    }
    if(j>=m-1){
        while(i<=n-1){
            v3[k]=v1[i];
            k++;
            i++;
        }
    }
         for(int i=0;i<v3.size();i++){
        cout<<v3[i]<<" ";
    }
}
    
    
