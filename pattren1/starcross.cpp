// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"enter no of rows";
//     cin>>n;
//     for(int i=1;i<=n;i++){
//         for(int j=1;j<=n;j++){
//             if(i==j || i+j==n+1) cout<<"*";
//         else cout<<" ";
//         }
//         cout<<endl;
//     }
// }
#include<stdio.h>
int main(){
    int n;
    printf("enter number of rows");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            if(i+j==n+1||i==j){
                printf("*");
            }
            else {
                printf(" ");
            }
        }
        printf("\n");
    }   
}