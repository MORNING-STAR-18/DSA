#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>v;
    int n;
    cout<<"enter size of array";
    cin>>n;
    cout<<"enter element of array";
    for(int i=0;i<=n-1;i++){
        int q;
        cin>>q;
        v.push_back(q);
    }
    vector<int>v2(v.size());
    for(int i=0;i<v.size();i++){
        for(int j=v.size()-1;j>=0;j--){
            if(i+j==v.size()-1){
            v2[j]=v[i];
            cout<<v[j]<<" ";
            }
        }
    }
}
