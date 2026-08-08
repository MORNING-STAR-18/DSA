

// #include<stdio.h>
//  int main(){
// int n;
// printf("declare the size of array");
// scanf("%d",&n);
// int arr[n];
// printf("enter number in array\n");
// for(int i=0;i<n;i++) {
// scanf("%d",&arr[i]);
// }
// int max=arr[0],x=0;
// for(int i=1;i<n;i++){
// if(arr[i]>max) {
//     max=arr[i];
//     x=i;
// }
// }
// for(int i=x;i<n-1;i++){
//     arr[i]=arr[i+1];
// }
// n--;
// int smax=arr[0];
// for(int i=1;i<n;i++){
// if(arr[i]>smax) smax=arr[i];
// }
// printf(" second maximus in given array %d",smax);
// }

// // int smax=max;
// for (int i=0;i<n;i++){
//     for(int j=0;j<n;j++){
//         if(arr[i]>arr[j]&&arr[i]!=max) smax=arr[i];
//     }
// }
// printf("second maximus in given array %d",smax);
// printf("\n");
// }
// int min=arr[0];
// for(int i=1;i<n;i++){
// if(arr[i]<min) min=arr[i];
// }
// int smin=arr[0];
// for(int i=1;i<n;i++){
// if(arr[i]<smin&&arr[i]!=min) smin=arr[i];
// }
// printf("second minumun in given array 3d", smin);
// }

#include<stdio.h>
int main(){
    int n;
    printf("decalre the size of array");
    scanf("%d",&n);
    int arr[n];
    printf("enter the element\n");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int max=-99999;
    for(int i=0;i<n;i++){
        // for(int j=i+1;j<n;j++){
            if(arr[i]>max) max=arr[i];
        // }
    }
    int smax=-99999;
    for(int i=0;i<n;i++){
        // for(int j=i+1;j<n;j++){
            if(arr[i]>smax&&arr[i]!=max) smax=arr[i];
        // }
    }
    printf("%d",smax);

}