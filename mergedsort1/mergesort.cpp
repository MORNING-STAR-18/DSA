// #include<iostream>
// using namespace std;
// int main(){
//     int n,m;
//     cout<<"enter size of first sorted array";
//     cin>>n;
//     int arr1[n];
//     cout<<"enter element in first array";
//     cout<<endl;
//     for(int i=0;i<n;i++){
//         cin>>arr1[i];
//     }
//     cout<<"enter size of 2nd array";
//     cin>>m;
//     int arr2[m];
//     cout<<"enter element in second array"<<endl;
//     for(int i=0;i<m;i++){
//         cin>>arr2[i];
//     }
//     int x=m+n;
//     int arr[x];
//     int i=0,j=0,k=0;
//     while(i<n&&j<m){
//         if(arr1[i]<=arr2[j]){
//             arr[k++]=arr1[i++];
//         }
//         else{
//             arr[k++]=arr2[j++];
//         }
//     }
//     if(i==n){
//         while(j<m){
//             arr[k++]=arr2[j++];
//         }
//     }
//     if(j==m){
//         while(i<n){
//             arr[k++]=arr1[i++];
//         }
//     }
//     for(int i=0;i<x;i++){
//         cout<<arr[i]<<" ";
//     }
// }

#include<iostream>
#include<vector>
using namespace std;
void merge(vector<int>&a,vector<int>&b,vector<int>&res){
    int i=0,j=0,k=0;
    while(i<a.size()&&j<b.size()){
        if(a[i]<=b[j]) res[k++]=a[i++];
        else res[k++]=b[j++];
    }
    if(i==a.size()){
        while(j<b.size()) res[k++]=b[j++];
    }
    if(j==b.size()){
        while(i<a.size()) res[k++]=a[i++];
    }
}
void mergesort(vector<int>&v){
    int n=v.size();
    if(n==1) return;
    int n1=n/2,n2=n-n/2;
    vector<int>a(n1),b(n2);
    // copy pasting
    for(int i=0;i<n1;i++){
        a[i]=v[i];
    }
    for(int i=0;i<n2;i++){
        b[i]=v[i+n1];
    }
    // magic aka resursion
    mergesort(a);
    mergesort(b);
    // merge
    merge(a,b,v);
    a.clear();
    b.clear();
}
int main(){
    int n;
    cout<<"enter size of array";
    cin>>n;
    vector<int>v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    mergesort(v);
    for(int i=0;i<n;i++){
        cout<<v[i]<<" ";
    }
}













// for copy vector
// exmaple arr[]={1,3,4,6};
// int n=sizeof(arr)/sizeof(arr[0]);
// vector<int>v(arr,arr+n);
// for(int i=0;i<v.size();i++){
//     cout<<v[i]<<" ";
// }
// we don't need to push_back the element in vector(v) it already copy all element of arrr in vector(v);