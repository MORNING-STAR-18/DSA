#include<iostream>
using namespace std;
int main(){
    int m,n;
    cout<<"enter no of rows";
    cin>>m;
    cout<<"enter no of coloums";
    cin>>n;
    int arr[m][n];
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>arr[i][j];
        }
    }
    cout<<endl;
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
    for(int j=0;j<n;j++){
        for(int i=0;i<m;i++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}

// #include<stdio.h>
// int main(){
//     int n;
//     printf("decalre the size of array");
//     scanf("%d",&n);
//     int arr[n];
//     printf("enter the element in array\n");
//     for(int i=0;i<n;i++){
//         scanf("%d",&arr[i]);
//     }
//     for(int i=0;i<n-1;i++){
//         for(int j=i+1;j<n;j++){
//             if(arr[i]>arr[j]){
//                 int temp=arr[i];
//                 arr[i]=arr[j];
//                 arr[j]=temp;
//             }
//         }
//     }
//     for(int i=0;i<n;i++){
//         printf(" %d",arr[i]); 
//     }

// }