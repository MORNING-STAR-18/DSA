// #include<iostream>
// #include<climits>
// using namespace std;
// int main(){
//     int arr[]={5,30,1,-4,2};
//     int n=5;
//     for(int ele: arr){
//         cout<<ele<<" ";
//     }
//     cout<<endl;
//     for(int i=0;i<n;i++){
//         int j=i;
//         // while(j>=1){
//         //     if(arr[j]>=arr[j-1]) break;
//         //     else swap(arr[j],arr[j-1]);
//         //     j--;
//         // }
//         while(j>=1 && arr[j]<arr[j-1]){
//             swap(arr[j],arr[j-1]);
//             j--;
//         }
//     }
//     for(int i=0;i<n;i++){
//         cout<<arr[i]<<" ";
//     }
// }
#include<iostream>
using namespace std;
int main(){
    string s="efing";
    string t="gfing";
    // if(s==t) cout<<"dfjn";
    if(s[0]==t[0]) cout<<"dfiong";
    else cout<<"uierhg";
}