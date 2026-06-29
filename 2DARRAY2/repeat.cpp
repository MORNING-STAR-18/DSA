// #include<iostream>
// using namespace std;
// int main(){
//     int m,n,p,q;
//     cout<<"enter no of rows of 1st array";
//     cin>>m;
//     cout<<"enter no of coloums of 1st array";
//     cin>>n;
//     cout<<"enter no of rows of 2nd array";
//     cin>>p;
//     cout<<"enter no of coloums";
//     cin>>q;
//     if(n==p){
//         int a[m][n];
//         cout<<"enter elemnt in 1st array";
//         for(int i=0;i<m;i++){
//             for(int j=0;j<n;j++){
//                 cin>>a[i][j];
//             }
//         }
//         int b[p][q];
//         cout<<"enter element in 2nd array";
//         for(int i=0;i<p;i++){
//             for(int j=0;j<q;j++){
//                 cin>>b[i][j];
//             }
//         }
//          for(int i=0;i<m;i++){
//             for(int j=0;j<n;j++){
//                 cout<<a[i][j]<<" ";
//             }
//             cout<<endl;
//         }
//         cout<<endl;
//          for(int i=0;i<p;i++){
//             for(int j=0;j<q;j++){
//                 cout<<b[i][j]<<" ";
//             }
//             cout<<endl;
//         }
//         cout<<endl;
//         int c[m][q];
//         for(int i=0;i<m;i++){
//             for(int j=0;j<q;j++){
//                 c[i][j]=0;
//                 for(int k=0;k<n;k++){
//                     c[i][j]+=a[i][k]*b[k][j];
//                 }
//             }
//         }
//         for(int i=0;i<m;i++){
//             for(int j=0;j<q;j++){
//                 cout<<c[i][j]<<" ";
//             }
//             cout<<endl;
//         }
//     }
//     else cout<<"matrix cannot be multipied";
// }

// #include<iostream>
// using namespace std;
// int main(){
//     int m,n;
//     cout<<"enter no of rows";
//     cin>>m;
//     cout<<"enter no of coloums";
//     cin>>n;
//     cout<<"enter no of elemnt";
//     cout<<endl;
//     int arr[m][n];
//     for(int i=0;i<m;i++){
//         for(int j=0;j<n;j++){
//             cin>>arr[i][j];
//         }
//     }
    
//     for(int i=0;i<m;i++){
//         if(i%2==0){
//         for(int j=0;j<n;j++){
//             cout<<arr[i][j]<<" ";
//         }
//     }
//     else{
//         for(int j=n-1;j>=0;j--){
//             cout<<arr[i][j]<<" ";
//         }
//     }
//     }

// }