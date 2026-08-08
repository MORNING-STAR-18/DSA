#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the size of array";
    cin>>n;
    int arr[n];
    cout<<"enter the element in array"<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int i=0;
    while(i<n){
        int x=arr[i];
        if(arr[i]==i+1)i++;
        else swap(arr[i],arr[x-1]);
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}