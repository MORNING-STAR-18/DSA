#include<iostream>
#include<vector>
using namespace std;
void printsubset(int arr[],int n,int idx,vector<int> ans,int k){
    if(idx==n){
        if(ans.size()==k){
            for(int i=0;i<ans.size();i++){
            cout<<ans[i]<<" ";
        }
        cout<<endl;
        }
        return;
    }
    if(ans.size()+(n-idx)<k) return;
    printsubset(arr,n,idx+1,ans,k);
    ans.push_back(arr[idx]);
    printsubset(arr,n,idx+1,ans,k);
}
int main(){
    int n;
    cout<<"enter size of array";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    vector<int>v;
    int k;
    cout<<"enter size of sequences";
    cin>>k;
    printsubset(arr,n,0,v,k);
}