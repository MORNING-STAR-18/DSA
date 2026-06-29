// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"enter the size of array";
//     cin>>n;
//     int arr[n];
//     cout<<"enter the elemnet in array";
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
//     int x;
//     cout<<"enter the number you  want t0 find the last occurence in array";
//     cin>>x;
//     int i=0;
//     int j=n-1;
//     while(i<=j){
//         int mid=(i+j)/2;
//         if(arr[mid]==x){
//             if(arr[mid+1]==x){
//                 i=mid+1;
//             }
//             else {
//                 cout<<mid;
//                 break;
//             }
//         }
//         else if(arr[mid]<x) i=mid+1;
//         else j=mid-1;
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
//     int count =0;
//     int i=0;
//     int j=n-1;
//     int x=0;
//      bool flag=false;
//     while(i<=j){
//         int mid=(i+j)/2;
//         if(arr[mid]==1){
//             if(arr[mid-1]!=1){
//                 cout<<n-mid;
//                 flag=true;
//                 break;
//             }
//             else{
//                 j=mid-1;
//             }
//         }
//         else if(arr[mid]<1){
//             i =mid+1;
//         }
//     }
//     if(flag==false) cout<<-1;
// }

// #include<iostream>
// #include<climits>
// using namespace std;
// int main(){
//     int n;
//     cout<<"enter rows of matrix";
//     cin>>n;
//     int arr[n][n];
//     cout<<"enter element in 2d array";
//     for(int i=0;i<n;i++){
//         for(int j=0;j<n;j++){
//             cin>>arr[i][j];
//         }
//     }
//     int a=0;
//     int idx=-1;
//     int max=INT_MIN;
//     for(int i=0;i<n;i++){
//         int x=0;
//         for(int j=0;j<n;j++){
//             x+=arr[a][j];
//         }
//         if(x>max){
//             max=x;
//             idx=a;
//         }
//         a++;
//     }
//     cout<<"rows with higest number of ones is"<<idx;
// }

// #include<iostream>
// using  namespace std;
// int main(){
//     int n;
//     cout<<"enter sizee of array";
//     cin>>n;
//     int arr[n];
//     cout<<"enter element in array";
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
//     int i=1;
//     int j=n;
//     bool flag =false;
//     while(i<=j){
//         int mid=(i+j)/2;
//         if(arr[mid]!=mid){
//             if(mid>0&&arr[mid]==arr[mid-1]||mid<n&&arr[mid]==arr[mid+1]){
//                 cout<<arr[mid];
//                 flag= true;
//                 break;
//             }
//             else j=mid-1;
//         }
//         else if(arr[mid]<mid) j=mid-1;
//         else i=mid+1;
//     }
//     if(flag==false) cout<<"no repeated no";
// }

// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"enter a number you wsnt to find it weather a perfect sqaure or not";
//     cin>>n;
//     int i=0;
//     int j=n-1;
//     bool flag=false;
//     while(i<=j){
//         int mid=(i+j)/2;
//         if(mid*mid==n){
//             cout<<n<<" is a perfect square root";
//             flag=true;
//             break;
//         }
//         else if(mid*mid<n) i=mid+1;
//         else j=mid-1;
//     }
//     if(flag==false) cout<<n<<" is not a perfect square no";
// }

