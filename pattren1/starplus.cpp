// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"enter no of rows";
//     cin>>n;
//     int mid =n/2+1;
//     for(int i=1;i<=n;i++){
//         for(int j=1;j<=n;j++){
//             if(i==mid || j==mid) cout<<"*";
//         else cout<<" ";
//         }
//         cout<<endl;
//     }
// }

#include<stdio.h>
int main(){
    int n;
    printf("enter the number of rows");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            if(i==n/2+1||j==n/2+1){
                printf("*");
            }
            else printf(" ");
        }
        printf("\n");
    }
}