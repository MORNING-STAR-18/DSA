#include<iostream>
#include<climits>
using namespace std;
int main(){
    int n;
    cout<<"enter size of array";
    cin>>n;
    int arr[n];
    for(int i=0;i<=n-1;i++){
        cin>>arr[i];
    }
    int max=INT_MIN;
    for(int i=0;i<=n-1;i++){
        if(max<arr[i]) max=arr[i];
    }
    int smax=INT_MIN;
    for(int i=0;i<=n-1;i++){
        if(arr[i]!=max&& smax<arr[i]) smax=arr[i];
    }
    cout<<smax<<endl;
    int min=INT_MAX;
    for(int i=0;i<=n-1;i++){
        if(min>arr[i]) min=arr[i];
    }
    int smin=INT_MAX;
    for(int i=0;i<=n-1;i++){
        if(arr[i]!=min&& smin>arr[i]) smin=arr[i];
    }
    cout<<smin;
}
