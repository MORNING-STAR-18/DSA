// #include<iostream>
// #include<climits>
// #include<vector>
// using namespace std;
// bool weight(int mid,vector<int>& arr,int d){
//     int x=mid;
//     int n=arr.size();
//     int count=1;
//     for(int i=0;i<n;i++){
//         if(x>=arr[i]){
//             x-=arr[i];
//         }
//         else{
//             count++;
//             x=mid;
//             x-=arr[i];
//         }
//     }
//     if(count<=d){
//         return true;
//     }
//     else return false;
// }
// int main(){
//     int n;
//     cout<<"declare the size of vector";
//     cin>>n;
//     vector<int> arr(n);
//     cout<<"enter the number in vector";
//     cout<<endl;
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
//     int d;
//     cout<<"enter the days in which you want to work";
//     cin>>d;
//     int mx=INT_MIN;
//     int sum=0;
//     for(int i=0;i<n;i++){
//         if(arr[i]>mx) mx=arr[i];
//         sum+=arr[i];
//     }
//     int lo=mx;
//     int hi=sum;
//     int ans=sum;
//     while(lo<=hi){
//         int mid=lo+(hi-lo)/2;
//         if(weight(mid,arr,d)==true){
//             ans=mid;
//             hi=mid-1;
//         }
//         else lo=mid+1;
//     }
//     cout<<ans;
// }

// #include<iostream>
// #include<vector>
// using namespace std;
// bool check(int mid,vector<int> &arr,int h){
//     int n=arr.size();
//     int m=mid;
//     int count=0;
//     for(int i=0;i<n;i++){
//         if(mid>=arr[i])count++;
//         else if(arr[i]%mid==0) count+=arr[i]/mid;
//         else count+=arr[i]/mid+1;
//     }
//     if(count<=h) return true;
//     else return false;
// }
// int main(){
//     int n;
//     cout<<"enter the size of vector";
//     cin>>n;
//     cout<<"enter number of banana in each stack";
//     cout<<endl;
//     vector<int> arr(n);
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
//     int h;
//     cout<<"enter the total hours in which koko eat all bananas";
//     cin>>h;
//     int mx=-1;
//     for(int i=0;i<n;i++){
//         mx=max(mx,arr[i]);
//     }
//     int lo=1;
//     int hi=mx;
//     int ans;
//     while(lo<=hi){
//         int mid=lo+(hi-lo)/2;
//         if(check(mid,arr,h)){
//             ans=mid;
//             hi=mid-1;
//         }
//         else{
//             lo=mid+1;
//         }
//     }
//     cout<<ans;
// }

#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n;
    cout<<"enter the size of array";
    cin>>n;
    vector<int> arr(n);
    cout<<"enter the number in vector"<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int t;
    cout<<"enter total no of trips";
    cin>>t;
}
