#include<iostream>
#include<queue>
using namespace std;
int main(){
    int arr[]={10,9,8,7,4,70,60,50};
    int n=sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    int k=4;
    int j=0;
    priority_queue<int,vector<int>,greater<int>> pq;//min heap
    for(int i=0;i<n;i++){
        pq.push(arr[i]);
        if(pq.size()>k){
            arr[j++]=pq.top();
            pq.pop();
        }
    }
    while(pq.size()>0){
        arr[j++]=pq.top();
        pq.pop();
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}