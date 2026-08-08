// #include<IOSTREAM>
// using namespace std;
// int main(){
//     int n,m;
//     cout<<"enter no of rows";
//     cin>>n;
//     cout<<"enter no of colums";
//     cin>>m;
//     for(int i=1;i<=n;i++){
//         for(int i=1;i<=m;i++){
//             cout<<"*";
//         }
//         cout<<endl;
//     }

// }

#include<stdio.h>
int main(){
    int m,n;
    printf("enter number of rows");
    scanf("%d",&n);
    printf("enter no ofm coloums");
    scanf("%d",&m);
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            printf("%d",j);
        }
        printf("\n");
    }    
}
