#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>v;
    int n;
    cout<<"declare the size of vector";
    cin>>n;
    cout<<"enter the number";
    for(int i=0;i<=n-1;i++){
        int q;
        cin>>q;
        v.push_back(q);
    }
    int idx=-1;
    for(int i=v.size()-2;i<v.size();i++){
        if(v[i]<v[i+1]){
            idx=i;
            break;
        }
    }
    if(idx==-1){
        for(int i=0,j=v.size()-1;i<=j;i++,j--){
            int temp=v[j];
            v[j]=v[i];
            v[i]=temp;
        }
    }
    revrese
}