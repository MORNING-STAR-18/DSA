#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter no of rows";
    cin>>n;
        for(int i=1;i<=n;i++){
            for(int j=1;j<=n-i;j++){
                cout<<" ";
            }
            for(int k=1;k<=2*i-1;k++){
                cout<<"*";
            }
            cout<<endl;
        }
    }

// #include<stdio.h>
// int main(){
//     int n;
//     printf("enter no of rows");
//     scanf("%d",&n);
//     for(int i=1;i<=n;i++){
//         for(int j=1;j<=n-i;j++){
//             printf(" ");
//         }
//         for(int k=1;k<=2*i-1;k++){
//             printf("*");
//         }
//         printf("\n");
//     }
// }