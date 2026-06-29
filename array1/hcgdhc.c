// #include<stdio.h>
// int main(){
//     int n;
//     printf("enter size of array");
//     scanf("%d",&n);
//     int arr[n];
//     for(int i=0;i<n;i++){
//         scanf("%d",&arr[i]);
//     }
//     int x=1;
//     for(int i=0;i<n;i++){
//         x*=arr[i];
//     }
//     printf("multiplication of array is %d",x);
// }

// #include<stdio.h>
// // #include<climits>
// int main(){
//     int n;
//     printf("enter size of array");
//     scanf("%d",&n);
//     int arr[n];
//     for(int i=0;i<n;i++){
//         scanf("%d",&arr[i]);
//     }
//     int max=arr[0];
//     for(int i=0;i<n;i++){
//         if(arr[i]>max) max=arr[i];
//     }
//     printf("max in array is:%d",max);
// }

#include<stdio.h>
#include<stdbool.h>
#include<limits.h>
int main(){
    int n;
    printf("enter size if array");
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    bool flag=false;
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]==arr[j]) flag=true;
            break;
        }
        if(flag==true) break;
    }
    if(flag==true) printf("dublicates");
    else printf("dublicates not present");
}