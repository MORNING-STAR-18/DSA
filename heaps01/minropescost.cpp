#include<iostream>
#include<queue>
using namespace std;
int main(){
    int arr[]={6,5,3,2,8,10,9};
    priority_queue<int,vector<int>,greater<int>> pq;//min heap
    int n=sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<n;i++){
        pq.push(arr[i]);
    }
    int mcost=0;
    while(pq.size()!=1){
        int x=pq.top();
        pq.pop();
        int y=pq.top();
        pq.pop();
        mcost+=(x+y);
        pq.push(x+y);
    }
    cout<<mcost;
}