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
//             cout<<k;
//         }
//         for(int q=i-1;q>=1;q--){
//             cout<<q;
//         }
//         cout<<endl;
//     }
// }

#include<stdio.h>
int main(){
    int n;
    printf("declaare the size of rows");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        for(int j=n;j>=i;j--){
            printf(" ");
        }
        for(int k=1;k<=i;k++){
            printf("%d",k);
        }
        for(int q=i-1;q>=1;q--){
            printf("%d",q);
        }
        printf("\n");
    }
}
