// #include<iostream>
// using namespace std;
// int main(){
//     int n,x;
//     cout<<"enter size of  array";
//     cin>>n;
//     int arr[n];
//     cout<<"enter element in array";
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
//     cout<<"enter the element you want to search";
//     cin>>x;
//     int i=0;
//     int j=n-1;
//     bool flag =false;
//     while(i<=j){
//         int mids=i+(j-i)/2;
//         if(arr[mids]==x){
//             flag=true;
//             break;
//         }
//         else if(arr[mids]<x){
//             i=mids+1;
//         }
//         else {
//             j=mids-1;
//         }
//     }
//     if(flag==true){
//         cout<<"element found at"<<(i+j)/2;
//     }
//     else cout<<"element not found";
// }


// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"enter size of array";
//     cin>>n;
//     int arr[n];
//     cout<<"enter element in array"<<endl;
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
//     int lo=0;
//     int hi=n-1;
//     int x;
//     cout<<"enter the number you want to search the lowest bound";
//     cin>>x;
//     bool flag=false;
//     while(lo<=hi){
//         int mid=lo+(hi-lo)/2;
//         if(arr[mid]==x){
//             flag=true;
//             cout<<arr[mid-1];
//             break;
//         }
//         else if(arr[mid]<x){
//             lo=mid+1;
//         }
//         else {
//             hi=mid-1;
//         }
//     }
//     if(flag==false){
//         cout<<arr[hi];
//     }
// }


// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"enter the size of array";
//     cin>>n;
//     int arr[n];
//     cout<<"enter the element in array";
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
//     int x;
//     cout<<"enter the elemnent you want to find the first occurence";
//     cin>>x;
//     int lo=0;
//     int hi=n-1;
//     bool flag=false;
//     while(lo<=hi){
//         int mid=lo+(hi-lo)/2;
//         if(arr[mid]==x){
//             if(arr[mid-1]==x){
//                 hi=mid-1;
//             }
//             else{
//                 cout<<"element found at"<<mid;
//                 flag=true;
//                 break;
//             }
//         }
//         else if(arr[mid]<x)
//         lo=mid+1;
//         else hi=mid-1;
//     }
//     if(flag==false){
//         cout<<"element not in array";
//     }
// }

// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"enter size of array";
//     cin>>n;
//     int arr[n];
//     cout<<"enter elemnet in array";
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//         }
//         int lo=0;
//         int hi=n-1;
//         int ans=-1;
//         while(lo<=hi){
//            int mid=lo+(hi-lo)/2;
//            if(arr[mid]==mid){
//             lo=mid+1;
//            } 
//            else{
//             hi=mid-1;
//             ans=mid;
//            }
//         }
//         cout<<ans;
//     }

// #include<iostream>
// using namespace std;
// int main(){
//     int x;
//     cout<<"enter the number you want to find the sqare rot of number";
//     cin>>x;
//     int arr[x];
//     int lo=0;
//     int hi=x-1;\
//     bool flag=false;
//     while(lo<=hi){
//         int mid=lo+(hi-lo)/2;
//         long long m=(long long)mid;
//         long long y=(long long)x;
//         if(m*m==y){
//             cout<<m;
//             flag=true;
//             break;
//         }
//         else if(m*m<y) lo=m+1;
//         else hi=m-1;
//     }
//     if(flag==false) cout<<hi;
// }

