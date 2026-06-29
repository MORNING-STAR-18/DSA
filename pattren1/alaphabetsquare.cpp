#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"no of rows";
    cin>>n;
    for(int i=1;i<=n;i++){
       for (int j=1;j<=n;j++){
       cout<<(char)(j+64);
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
//         for(int j=1;j<=n;j++){
//             printf("%c",j+64);
//         }
//         printf("\n");
//     }
// }