#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"declare size of array";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    int m=arr[0];
    for(int i=0;i<n;i++){
        if(m<arr[i]) m=arr[i];
    }
    int arr2[m]={0};
    int x;
    for(int i=0;i<n;i++){
        x=arr[i];
        if(arr2[x-1]>=1){
        arr2[x-1]+=1;
        }
        else arr2[x-1]=1;
    }
    int sum=0;
    for(int i=0;i<m;i++){
        if(arr2[i]>0&&arr2[i]<=n){
           sum+=arr2[i]; 
        }
    }
    for(int i=0;i<m;i++){
        cout<<arr2[i]<<" ";
    }
    cout<<endl;
    int arr3[sum];
    int j=0;
    int i=0;
    while(i<m){
        if(arr2[i]>0&&arr2[i]<=n){
            arr3[j]=i+1;
            j++;
            arr2[i]-=1;
            if(arr2[i]==0) i++;
        }
        else {
            i++;
        }
    }
    for(int i=0;i<sum;i++){
        cout<<arr3[i]<<" ";
    }
 }


