#include<iostream>
#include<vector>
using namespace std;
void subarr(vector<int>v,int arr[],int n,int idx){
    if(idx==n){
        for(int i=0;i<v.size();i++){
            cout<<v[i];
        }
        cout<<endl;
        return;
    }
    subarr(v,arr,n,idx+1);
    if(v.size()==0||arr[idx-1]==v[v.size()-1]){
        v.push_back(arr[idx]);
       subarr(v,arr,n,idx+1);
    }
    // else if(arr[idx-1]==v[v.size()-1]){
    //     v.push_back(arr[idx]);
    //     subarr(v,arr,n,idx+1);
    // }
}

int main(){
    int n;
    cout<<"enter size of array";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<endl;
    // for(int i=0;i<n;i++){
    //     for(int j=i;j<n;j++){
    //         for(int k=i;k<=j;k++){
    //             cout<<arr[k];
    //         }
    //         cout<<endl;
    //     }
    // }
    vector<int>v;
    subarr(v,arr,n,0);
}