// 1
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"enter no of rows";
//     cin>>n;
//     for(int i=1;i<=n;i++){
//         for(int j=1;j<=n-i+1;j++){
//             cout<<" ";
//         }
//         for(int k=1;k<=2*i-1;k++){
//             cout<<k;
//         }
//         cout<<endl;
//     }
// }

//2
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"enter no of rows";
//     cin>>n;
//     for(int i=1;i<=n;i++){
//         for(int j=1;j<=n-i;j++){
//             cout<<" ";
//         }
//         for(int k=1;k<=2*i-1;k++){
//             cout<<char(k+64);
//         }
//         cout<<endl;
//     }
// }

// 3
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"enter no of rows";
//     cin>>n;
//     for(int i=1;i<=n;i++){
//         for(int j=1;j<=n-i;j++){
//             cout<<" ";
//         }
//         for(int l=1;l<=i;l++){
//             cout<<char(65+i-l);
//         }
//         for(int k=2;k<=i;k++){
//             cout<<char(k+64);
//         }
//         cout<<endl;
//     }
// }

// 4
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"enter no of rows";
//     cin>>n;
//     int m=n-1;
//     for(int i=1;i<=2*n-1;i++){
//         cout<<char(i+64);
//     }
//     cout<<endl;
//     for(int i=1;i<=m;i++){
//         int a=1;
//         for(int j=1;j<=m-i+1;j++){
//             cout<<char(j+64);
//             a++;
//         }
//         for(int k=1;k<=2*i-1;k++){
//             cout<<" ";
//             a++;
//         }
//         for(int l=1;l<=m-i+1;l++){
//             cout<<char(a+64);
//             a++;
//         }
//         cout<<endl;

//     }
// }

// 5
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"enter number of rows";
//     cin>>n;
//     int m=n-1;
//     int f=n;
//     for(int a=1;a<=2*n-1;a++){
//         if(a<n){
//              cout<<a;
//     }
//     else{
//         cout<<f;
//         f--;
//     }
// }
//     cout<<endl;
//     for(int i=1;i<=m;i++){
//         for(int j=1;j<=m-i+1;j++){
//             cout<<j;
//         }
//         for(int k=1;k<=2*i-1;k++){
//             cout<<" ";
//         }
//         for(int l=1;l<=m-i+1;l++){
//             cout<<m-l-i+2;
//         }
//         cout<<endl;
//     }
// }

// 6
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"enter number of rows";
//     cin>>n;
//     for(int i=1;i<=n;i++){
//         for(int j=1;j<=2*n-1;j++){
//             if(i==j || i+j==2*n){
//                 cout<<"*";
//             }
//             else{
//                 cout<<" ";
//             }
        
//     }
//         cout<<endl;
    
//         }
    
// }

//  7
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     int m=n-1;
//      cout<<"enter number of rows";
//     cin>>n;
    
//     for(int i=1;i<=2*n-1;i++){
//         if(i<n){
//         for(int j=1;j<=2*n-1;j++){
//             if(i+j==n+1 || j==i+n-1){
//                 cout<<"*";
//             }
//             else{
//                 cout<<" ";
//             }
//         }

//             }
//             else{
//                 for(int j=1;j<=2*n-1;j++){
//                     if(i+j==2*i-n+1||i+j==n*3-1)
//                     cout<<"*";
//                     else cout<<" ";
//                 }
//             }
//             cout<<endl;
//         }
//         }

// 8
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"enter number of row ";
//     cin>>n;
//     for(int i=1;i<=n;i++){
//         for(int j=1;j<=2*n-1;j++){
//             if(i+j==n+1|| j==i+n-1){
//                 cout<<i;
//             }
//             else{
//                 cout<<" ";
//             }
//         }
//         cout<<endl;
//     }    
// }

//  9
// #include<iostream>
// using namespace std;
// int main(){
//     int n,m;
//     cout<<"enter number of rows:";
//     cin>>n;
//     m=2*n+1;
//     for(int i=1;i<=m;i++){
//         if(i<=n){
//             for(int j=1;j<=2*n+1;j++){
//                 if(i+j==n+2||i+j==i+n+1||j==i+n){
//                     cout<<"*";
//                 }
//                 else{
//                     cout<<" ";
//                 }
//             }
//         }
//         if(i==n+1){
//             for(int j=1;j<=2*n+1;j++){
//                 cout<<"*";
//             }
//         }
//         if(i>n+1){
//             for(int j=1;j<=2*n+1;j++)
//             if(j==i-n||j==n+1||i+j==3*n+2){
//                 cout<<"*";
//             }
//             else{
//                 cout<<" ";
//             }
//         }
//         cout<<endl;
//     }
// }


// // #include<iostream>
// // using namespace std;
// // int main(){
// //     int n;
// //     cout<<"enter number of rows";
// //     cin>>n;
// //     int m=2*n;
// //     for(int i=1;i<=m;i++){
        
// //     }
// // }
                                        

        

    





























