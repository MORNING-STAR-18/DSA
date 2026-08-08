//1
// #include<iostream>
// #include<vector>
// using  namespace std;
// void reverse(vector<int> &arr,int i){
//     if(i==-1) return ; 
//     cout<<arr[i]<<" ";
//     reverse(arr,i-1);
// }
// int main(){
//     int n;
//     cout<<"enter the size of array";
//     cin>>n;
//     vector<int>arr(n);
//     cout<<"enter the elemnet in array";
//     cout<<endl;
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
//     cout<<endl;
//     int i=n-1;
//     reverse(arr,i);
// }


//2
// #include<iostream>
// #include<vector>
// using namespace std;
// int  idx(vector<int> &arr,int i,int x){
//     if(i==arr.size()) return -1 ;
//     if(arr[i]==x) return i;
//     else idx(arr,i+1,x);
// }
// int main(){
//     int n;
//     cout<<"enter the size of array";
//     cin>>n;
//     vector<int>arr(n);
//     cout<<"enter element in array";
//     cout<<endl;
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
//     int x;
//     cout<<"enter the element in array";
//     cin>>x;
//     int i=0;
//     cout<<"eleemnt present at"<<idx(arr,i,x);
// }


//3
// #include<iostream>
// #include<vector>
// using namespace std;
// void  countandsay(int n,int i,vector<int>&x,int a){
//     int y;
//     int count=1;
//     if(n==1){
//         cout<<1<<endl;
//         x[a]=1;
//         return ;
//     }
//     countandsay(n-1,i+1,x,a);
//         while(x[a]!=0){
//             if(x[a]==x[a+1]){
//                 count++;
//                 a++;
//             }
//             else{
//             cout<<count<<x[a]<<endl;
//             if(x[a+1]==0) return;
//             else a++;
//             }
//         }
//     } 
// int main(){
//     int n;
//     cout<<"enter a string";
//     cin>>n;
//     int i=1;
//     int a=0;
//     vector<int>x(1000,0);
//     countandsay(n,i,x,a);
// }


//4
#include<iostream>
#include<vector>
using namespace std;
void star(vector<int>&arr,vector<int>&arr1,int n){
    if(n==0) return;
    for(int i=0;i<=n-1;i++){
        cout<<arr[i]<<" ";
        arr1[i]=arr[i]+arr[i+1];
        arr[i]=arr1[i];
    }
    cout<<endl;
    star(arr,arr1,n-1);
}
int main(){
    int n;
    cout<<"enter the size of array";
    cin>>n;
    int i=n;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    vector<int> arr1(i);
    star(arr,arr1,n);
}