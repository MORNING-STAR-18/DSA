#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main(){
    int n;
    cout<<"enter the size of vector";
    cin>>n;
    vector<int>v(n);
    cout<<"enter the elemtn in araay"<<endl;
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    sort(v.begin(),v.end());
    int ans=1;
    if(v[0]>=0) cout<<v[0];
    else{
        int i=0;
        while(i<n && v[i]<0){
            ans*=v[i];
            i++;
        }
        if(i%2==0) ans/=v[i-1];
        if(i<n && v[i]==0){
            while(i<n && v[i]==0) i++;
        }
        while(i<n){
            ans*=v[i];
            i++;
        }
        cout<<ans;
    }
}