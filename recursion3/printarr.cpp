// #include<iostream>
// #include<vector>
// using namespace std;
// void  print(vector<int>&arr,int i){
//     if(i==-1) return;
//     print(arr,i-1);
//     cout<<arr[i]<<" ";
// }
// int main(){
//     int n;
//     cout<<"enter size of array";
//     cin>>n;
//     vector<int> arr(n);
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
//     int i=n-1;
//     print(arr,i);
// }

#include<iostream>
using namespace std;
void display(int arr[],int n,int idx){
    if(idx==n) return;
    cout<<arr[idx]<<" ";
    display(arr,n,idx+1);
}
int main(){
    int n;
    cout<<"enter the size of array";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int idx=0;
    display(arr,n,idx);

}