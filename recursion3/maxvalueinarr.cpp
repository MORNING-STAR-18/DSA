#include<iostream>
// #include<algorithm>
#include<climits>
using namespace std;
void printmax(int arr[],int n,int idx,int max){
    if(idx==n){
        cout<<max;
        return;
    }
    if(max<arr[idx]) max=arr[idx];
    printmax(arr,n,idx+1,max);
}
int Maxinarray(int arr[],int n,int idx){
    if(idx==n) return INT_MIN;
    return max(arr[idx],Maxinarray(arr,n,idx+1));
}
int main(){
    int n;
    cout<<"enter the size of array";
    cin>>n;
    int arr[n];
    cout<<"enter the element in array";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    // printmax(arr,n,0,INT_MIN);
    cout<<Maxinarray(arr,n,0);
}
