#include<iostream>
using namespace std;
int main(){
    int n,m;
    cout<<"enter no of rows";
    cin>>n;
    int nst=1;
    int nsp=n-1;
    for(int i=1;i<=2*n-1;i++){
        for(int j=1;j<=nsp;j++){
            cout<<" ";
        }
        if(i<=n-1) nsp--;
        else nsp++;
        for(int k=1;k<=nst;k++){
            cout<<"*";
        }
        if(i<=n-1) nst+=2;
        else nst-=2;
        cout<<endl;
    }
}

// #include<stdio.h>
// int main(){
//     int n;
//     printf("enter no of rows");
//     scanf("%d",&n);
//    int  x=n;
//     for(int i=1;i<=2*n-1;i++){
//         if(i<=n){
//             for(int j=1;j<n-i;j++){
//                 printf(" ");
//             }
//             for(int k=1;k<=2*i-1;k++){
//                 printf("*");
//             }
//         }
//         else{
//             for(int j=1;j<i-n;j++){
//                 printf(" ");
//             }
//             for(int k=1;k<=2*n-i+1;k++){
//                 printf("*");
//             }
//         }
//         printf("\n");
//     }
// }


 
