// 1
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"enter the size of array";
//     cin>>n;
//     cout<<"enter the number in array";
//     cout<<endl;
//     int arr[n];
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
//     int x;
//     cout<<"enter the number you want to search in array";
//     cin>>x;
//     int i=0;
//     int j=n-1;
//     bool flag=false;
//     while(i<=j){
//         int mid=i+(j-i)/2;
//         if(arr[mid]==x){
//             cout<<"element at "<<mid<<" index";
//             flag=true;
//             break;
//         }
//         else if(arr[mid]>x) i=mid+1;
//         else j=mid-1;
//     }
//     if(flag==false)cout<<"number not found in array";
// }

//2
// by appling binary search


// 3
// #include<iostream>
// using namespace std;
// int main(){
//     int n,m;
//     cout<<"enter the size of rows of matrix";
//     cin>>m;
//     cout<<"enter the size of coloums of matrix";
//     cin>>n;
//     cout<<"enter the number in matrix"<<endl;
//     int arr[m][n];
//     for(int i=0;i<m;i++){
//         for(int j=0;j<n;j++){
//             cin>>arr[i][j];
//         }
//     }
//     for(int i=0;i<m;i++){
//         for(int j=0;j<n;j++){
//             cout<<arr[i][j]<<" ";
//         }
//         cout<<endl;
//     }
//     int x;
//     cout<<"enter the elemnet you want search in array";
//     cin>>x;
//     int a=0;
//     bool flag=false;
//     while(a<m){
//         int i=0;
//         int j=n-1;
//         if(arr[0][0]>x){
//             cout<<"false";
//             flag=true;
//             break;
//         }
//         else if(arr[a][j]<x){
//             a++;
//         }
//         else{ 
//             while(i<=j){
//                 int mid=i+(j-i)/2;
//                 if(arr[a][mid]==x){
//                     flag=true;
//                     cout<<"true";
//                     break;
//                 }
//                 else if(arr[a][mid]<x) i=mid+1;
//                 else j=mid-1;
//             }
//             if(flag==false){
//             break;
//             } 
//         }
//         if(flag==true) break;
//     }
//     if(flag==false) cout<<"false";
// }


// 3 (more optimised) 
// #include<iostream>
// using namespace std;
// int main(){
//     int n,m;
//     cout<<"enter the size of rows of matrix";
//     cin>>m;
//     cout<<"enter the size of coloums of matrix";
//     cin>>n;
//     cout<<"enter the number in matrix"<<endl;
//     int arr[m][n];
//     for(int i=0;i<m;i++){
//         for(int j=0;j<n;j++){
//             cin>>arr[i][j];
//         }
//     }
//     for(int i=0;i<m;i++){
//         for(int j=0;j<n;j++){
//             cout<<arr[i][j]<<" ";
//         }
//         cout<<endl;
//     }
//     int x;
//     cout<<"enter the elemnet you want search in array";
//     cin>>x;
//     int a=0;
//     bool flag=false;
//     int i=0;
//     int j=m*n-1;
//     while(i<=j){
//         int mid=i+(j-i)/2;
//         int row= mid/n;
//         int col=mid%n;
//         if(arr[row][col]==x){
//             flag=true;
//             cout<<"true";
//             break;
//         }
//         else if(arr[row][col]>x) j=mid-1;
//         else i=mid+1;
//     }
//     if(flag==false) cout<<"false";
// }


// 4
#include<iostream>
using namespace std;
int main(){
    int n,x;
    cout<<"enter the size of array"<<endl;
    cin>>n;
    int arr[n];
    cout<<"enter the number in array"<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"enter the number you want search in array";
    cin>>x;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    if(n==2){
        if(arr[0]==x) cout<<"true";
        else if(arr[1]==x) cout<<"true";
        else cout<<"false";
    }
    int i=0;
    int j=n-1;
    int idx=-1;
    while(i<=j){
        int mid=i+(j-i)/2;
        if(mid==0) i=mid+1;
        else if(mid==n-1) j=mid-1;
        else if(arr[mid]<=arr[mid+1]&&arr[mid]<arr[mid-1]){
            idx=mid;
            break;
        }
        else if(arr[mid]>arr[i+1]&&arr[mid]>=arr[mid]){
            idx=mid+1;
            break;
        }
        else if(arr[mid]<arr[j]) j=mid-1;
        else i=mid-1;
    }
    bool flag =false;
    if(idx==-1){
        int lo=0;
        int hi=n-1;
        while(lo<=hi){
            int mid=lo+(hi-lo)/2;
            if(arr[mid]==x){
                cout<<"true";
                flag=true;
                break;
            }
            else if(arr[mid]>x) hi=mid-1;
            else lo=mid+1;
        }
    }
    else if(x>=arr[0]&&x<=arr[idx-1]){
        int lo=0;
        int hi=idx-1;
        while(lo<=hi){
            int mid=lo+(hi-lo)/2;
            if(arr[mid]==x){
                cout<<"true";
                flag=true;
                break;
            }
            else if(arr[mid]>x) hi=mid-1;
            else lo=mid+1;
        }
    }
    else{
        int lo=idx;
        int hi=n-1;
        while(lo<=hi){
            int mid=lo+(hi-lo)/2;
            if(arr[mid]==x){
                cout<<"true";
                flag=true;
                break;
            }
            else if(arr[mid]>x) hi=mid-1;
            else lo=mid+1;
        }
    }
    if(flag==false){
        cout<<"false";
    }
}
