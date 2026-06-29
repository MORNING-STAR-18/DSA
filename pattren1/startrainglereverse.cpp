// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"enter no of rows";
//     cin>>n;
//     for(int i=1;i<=n;i++){
//         for(int j=1;j<=n+1-i;j++){
//             cout<<"*";
//         }
//         cout<<endl;
//     }
// }

#include<stdio.h>
int main(){
    int n;
    printf("enter size of rows");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        for(int j=n;j>=i;j--){
            printf("*");
        }
        printf("\n");
    }
}