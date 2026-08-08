// 1
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"enter no of rows";
//     cin>>n;
//     for(int i=1;i<=n;i++){
//         for(int j=1;j<=n;j++){
//             cout<<i;
//         }
//         cout<<endl;
//     }
// }

// 2
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"enter no of rows";
//     cin>>n;
//     for(int i=1;i<=n;i++){
//         for(int j=1;j<=n-i+1;j++){
//         cout<<j;
//     }
//     cout<<endl;
// }

// 3
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"enter no of rows";
//     cin>>n;
//     for(int i=1;i<=n;i++){
//         for(int j=1;j<=i;j++){
//             cout<<char(j+64);
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
//     for(int i=1;i<=n;i++){
//         for(int j=1;j<=i;j++){
//            if(i%2==0) cout<<char(j+64);
//            else cout<<j;
//         }
//         cout<<endl;
//     }
// }

// 5
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"enter no of rows";
//     cin>>n;
//     for(int i=1;i<=n;i++){
//         if(i<=n/2){
//         for(int j=1;j<=i;j++){
//             cout<<"*";
//         }
//         }
//         else{
//             for(int k=1;k<=n-i;k++){
//                 cout<<"*";
//             }
//         }
//         cout<<endl;
//     }
// }

//  6
//  #include<iostream>
// using namespace std;
// int main(){
//     int n,m;
//     cout<<"enter no of rows";
//     cin>>n;
//     cout<<"enter no of coloums";
//     cin>>m;
//     for(int i=1;i<=n;i++){
//         for(int j=1;j<=m;j++){
//             if(i==1 ||i==n ||j==1 ||j==m){
//                 cout<<"*";
//             }
//             else{
//                 cout<<" ";
//             }
//         }
//         cout<<endl;
//     }
// }
 
// 7
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
//         for(int k=1;k<=n;k++){
//             cout<<"*";
//         }
//         cout<<endl;
//     } 
// }

// 8
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"enter no of rows";
//     cin>>n;
//     for(int i=1;i<=n;i++){
//         for(int j=1;j<=i;j++){
//         cout<<j;
//     }
//     cout<<endl;
// }
// }

// 9
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
//         for(int k=1;k<=i;k++){
//             cout<<char(k+64);
//         }
//         cout<<endl;
//     }
 
// 10
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"enter no of rows";
//     cin>>n;
//     int k;
//     for(int i=1;i<=n;i++){
//         for(int j=1;j<=i;j++){
//             k=i-j+1;
//             cout<<k;
//         }
//         cout<<endl;
//     }
// }

// 11
// #include<iostream>
// using namespace std;
// int main(){
//     int n,m;
//     cout<<"enter no of rows";
//     cin>>n;
//     m=n*2;
//     for(int i=1;i<=m;i++){
//         if(i<m/2){
//         for(int j=1;j<=m/2-i;j++){
//             cout<<" ";
//         }
//         for(int k=1;k<=i;k++){
//             cout<<"*";
//         }
//     }
//     else{
//         for(int f=1;f<=i-m/2;f++){
//             cout<<" ";
//         }
//         for(int g=1;g<=m-i;g++)
//         cout<<"*";
//     }
//         cout<<endl;
//     }
// }
       