// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"enter no of coloums/rows";
//     cin>>n;
//     int arr[n][n];
//     for(int i=0;i<n;i++){
//         for(int j=0;j<n;j++){
//             cin>>arr[i][j];
//         }
//     }
//     for(int i=0;i<n;i++){
//         for(int j=0;j<n;j++){
//             if(i==j||i+j==n-1){ 
//             cout<<arr[i][j]<<" ";
//             }
//             else{
//             cout<<" ";
//             }
//         }
//         cout<<endl;
//     }
// }


#include<iostream>
using namespace std;
int main(){
    int m,n;
    cout<<"enter no of rows/colums";
    cin>>n;
    int arr[n][n];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>arr[i][j];

        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
    int v[n][n];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            v[i][j]=arr[j][i];
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<v[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
    for(int k=0;k<n/2;k++){
        for(int i=n-k-1;i>n-k-2;i--){
            for(int j=0;j<n;j++){
                int temp=v[k][j];
                v[k][j]=v[i][j];
                v[i][j]=temp;
            }
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<v[i][j]<<" ";
        }
        cout<<endl;
    }
}


// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"enter no of rows or coloums";
//     cin>>n;
//     int arr[n][n];
//     for(int i=0;i<n;i++){
//         for(int j=0;j<n;j++){
//             cin>>arr[i][j];
//         }
//     }
//     for(int i=0;i<n;i++){
//         for(int j=0;j<n;j++){
//             cout<<arr[i][j]<<" ";
//         }
//         cout<<endl;
//     }
//     cout<<endl;
//     for(int i=0;i<n;i++){
//         for(int j=0;j<n;j++){
//             if(j==n/2||i==n/2){
//                 cout<<arr[i][j];
//             }
//             else cout<<" ";
//         }
//         cout<<endl;
//     }
// }


// #include<iostream>
// using namespace std;
// int main(){
//     int m,n;
//     cout<<"enter no of rows ";
//     cin>>m;
//     cout<<"enter no of coloums";
//     cin>>n;
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
//     cout<<endl;
//     int max=arr[0][0];
//     for(int i=0;i<m;i++){
//         int sum=0;
//         for(int j=0;j<n;j++){
//             sum+=arr[i][j];
//         }
//         if(max<sum) max=i;
//     }
//     cout<<max;
// }

// #include<iostream>
// using namespace std;
// int main(){
    
// }