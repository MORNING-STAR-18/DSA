#include<iostream>
#include<climits>
using namespace std;
int main(){
    int n;
    cout<<"enter the sized of array";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int k=3;
    int maxsum=INT_MIN;
    int prevsum=0;
    int maxidx=0;
    for(int i=0;i<k;i++){
        prevsum+=arr[i];
    }
    maxsum=prevsum;
    int i=1;
    int j=k;
    while(j<n){
        prevsum=prevsum+arr[j]-arr[i-1];
        if(maxsum<prevsum){
            maxsum=prevsum;
            maxidx=i;
        }
        i++;
        j++;
    }
    cout<<maxsum<<endl<<maxidx;
}