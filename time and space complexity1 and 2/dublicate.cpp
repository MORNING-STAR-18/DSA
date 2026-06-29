// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"declare the size of array";
//     cin>>n;
//     int arr[n+1];
//     for(int i=0;i<=n;i++){
//         cin>>arr[i];
//     }
//     bool flag=false;
//     for(int i=0;i<n;i++){
//         for(int j=i+1;j<=n;j++){
//             if(arr[i]==arr[j]) flag=true;
//             break;
//         }
//         if(flag==true) break;
//     }
//     if(flag==true) cout<<"dublicates";
//     else cout<<"no dublicates";
// }


// #include<iostream>
// #include<algorithm>
// using namespace std;
// int main(){
//     int n;
//     cout<<"decalre the size of array";
//     cin>>n;
//     // int arr[n];
//     // for(int i=0;i<n;i++){
//     //     cin>>arr[i];
//     // }
//     // int sum=0;
//     // for(int i=0;i<n;i++){
//     //     sum+=arr[i];
//     // }
//     // int s=n*(n+1)/2;
//     // cout<<s-sum<<endl;
//     // if(sum!=s) cout<<"dublicates";
//     // else cout<<"dublicates not found";
//     int count=1;
//     for(int i=2;i>1;i++){
//         count*=i;
//         cout<<count<<endl;
//     }
// }
//