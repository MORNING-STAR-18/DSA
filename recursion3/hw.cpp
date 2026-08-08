// #include<iostream>
// using namespace std;
// void reverse(int n,int x,int z){
//     if(n==0){
//         cout<<x;
//         return;
//     }
//     int y=n%10;
//     x=x*z+y;
//     reverse(n/10,x,z);
//     // cout<<x<<endl;
// }
// int main(){
//     int n;
//     cout<<"enter a number you want to reverse";
//     cin>>n;
//     int y;
//     reverse(n,0,10);
// }


// #include<iostream>
// #include<vector>
// using namespace std;
// void seq(int arr[],vector<int>v,int k,int idx,int n){
//     if(idx==n){
//         if(v.size()==k){
//             for(int i=0;i<v.size();i++){
//                 cout<<v[i];
//             }
//             cout<<endl;
//         }
//         return;
//     }
//     seq(arr,v,k,idx+1,n);
//     v.push_back(arr[idx]);
//     seq(arr,v,k,idx+1,n);
// }
// int main(){
//     int n;
//     cout<<"enter size of array";
//     cin>>n;
//     int arr[n];
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
//     vector<int> v;
//     int k;
//     cout<<"enter the size of sequences";
//     cin>>k;
//     seq(arr,v,k,0,n);
// }


// #include<iostream>
// #include<vector>
// using namespace std;
// void subset(int arr1[],int arr2[],int n,int m,vector<int>v,int idx){
//     if(idx==max(m,n)){
//         if(v.size()>1){
//             for(int i=0;i<v.size();i++){
//                 cout<<v[i]<<" ";
//             }
//             cout<<endl;
//         }
//         return;
//     }
//     int i=idx;
//     int j=idx;
//     bool flag1=false;
//     bool flag2=false;
//     subset(arr1,arr2,n,m,v,idx++);
//     while(flag1==true){
//         if(arr1[i]>arr2[j]){
//         v.push_back(arr1[i]);
//         flag1==true;
//     }
//     else{
//         i++;
//     }
//     }
//     while(flag2==true){
//         if(arr1[i]>arr2[j]) j++;
//         else{
//             v.push_back(arr2[j]);
//             flag2=true;
//         }
//     }
//     subset(arr1,arr2,n,m,v,idx++);
// }
// int main(){
//     int n=3;
//     // cout<<"enter size of first arr";
//     // cin>>n;
//     int arr1[n]={10,15,25};
//     // cout<<"enter element in 1st array"<<endl;
//     // for(int i=0;i<n;i++){
//     //     cin>>arr1[i];
//     // }
//     int m=4;
//     // cout<<"enter size of second array";
//     // cin>>m;
//      int arr2[m]={1,5,20,30};
//     // cout<<"enter element in second array"<<endl;
//     // for(int i=0;i<m;i++){
//     //     cin>>arr2[i];
//     // }
//     vector<int>v;
//     int i=0;
//     int j=0;
//     subset(arr1,arr2,n,m,v,0);
// }


#include<iostream>
#include<vector>
using namespace std;
void subset1(int arr1[],int arr2[],int n,int m,vector<int>v,int a,int b){
    if(a==n||b==m){
       for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
       }
       cout<<endl;
       return;
    }
    if(arr1[a]<arr2[b]){
        subset1(arr1,arr2,n,m,v,a+1,b+1);
        v.push_back(arr1[a]);
        v.push_back(arr2[b]);
        subset1(arr1,arr2,n,m,v,a+1,b+1);
    }
    else {
        subset1(arr1,arr2,n,m,v,a,b+1);
    }
}
int main(){
    int n=3;
    int m=4;
    int arr1[3]={10,15,25};
    int arr2[4]={1,5,20,30};
    vector<int>v;
    subset1(arr1,arr2,n,m,v,0,0);

}