// #include<iostream>
// using namespace std;
// int main(){
//     int m,n;
//     cout<<"enter no of rows";
//     cin>>m;
//     cout<<"entr no of coloums";
//     cin>>n;
//     int arr[m][n];
//     for(int i=0;i<m;i++){
//         for(int j=0;j<n;j++){
//             cin>>arr[i][j];
//         }
//     }
//     for(int j=0;j<n;j++){
//         for(int i=0;i<m;i++){
//             cout<<arr[i][j]<<" ";
//         }
//         cout<<endl;
//     }
// }


// #include<iostream>
// using namespace std;
// int main(){
//     int n,m;
//     cout<<"enter no of rows";
//     cin>>n;
//     cout<<"enter no of coloums";
//     cin>>m;
//     int arr[m][n];
//     for(int i=0;i<m;i++){
//         for(int j=0;j<n;j++){
//             cin>>arr[i][j];
//         }
//     }
//     int max=arr[0][0];
//     for(int i=0;i<m;i++){
//         for(int j=i;j<n;j++){
//             if(arr[i][j]>max) max=arr[i][j]; 
//         }
//     }
//     cout<<max;
// }


// #include<iostream>
// using namespace std;
// int main(){
//     int m,n;
//     cout<<"enter no of rows";
//     cin>>m;
//     cout<<"enter no of coloums";
//     cin>>n;
//     int arr[m][n];
//     for(int i=0;i<m;i++){
//         for(int j=0;j<n;j++){
//             cin>>arr[i][j];
//         }
//     }
//     int sum=0;
//     for(int i=0;i<m;i++){
//         for(int j=0;j<n;j++){
//             sum+=arr[i][j];
//         }
//     }
//     cout<<sum;
// }


// #include<iostream>
// using namespace std;
// int main(){
//     int m,n;
//     cout<<"enter no of 1st array rows";
//     cin>>m;
//     cout<<"enter no of 2nd array coloums";
//     cin>>n;
//     int c[m][n];
//     int d[m][n];
//     for(int i=0;i<m;i++){
//         for(int j=0;j<n;j++){
//             cin>>c[i][j];
//         }
//     }
//     for(int i=0;i<m;i++){
//         for(int j=0;j<n;j++){
//             cin>>d[i][j];
//         }
//     }
//     for(int i=0;i<m;i++){
//         for(int j=0;j<n;j++){
//             d[i][j]+=c[i][j];
//         }
//     }
//     for(int i=0;i<m;i++){
//         for(int j=0;j<n;j++){
//             cout<<d[i][j]<<" ";
//         }
//         cout<<endl;
//     }
// }

// #include<iostream>
// using namespace std;
// int main(){
//     int m,n;
//     cout<<"enter no of rows";
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
//     int v[n][m];
//     for(int i=0;i<n;i++){
//         for(int j=0;j<m;j++){
//             v[i][j]=arr[j][i];
//         }
//     }
//     for(int i=0;i<n;i++){
//         for(int j=0;j<m;j++){
//             cout<<v[i][j]<<" ";
//         }
//         cout<<endl;
//     }
// }

// #include<iostream>
// using namespace std;
// int main(){
//     int m,n;
//     cout<<"enter no of rows";
//     cin>>m;
//     cout<<"enter no of coloums";
//     cin>>n;
//     int arr[m][n];
//     for(int i=0;i<m;i++){
//         for(int j=0;j<n;j++){
//             cin>>arr[i][j];
//         }
//     }
//     int max=arr[0][0];
//     for(int i=0;i<m;i++){
//         for(int j=0;j<n;j++){
//             if(arr[i][j]>max) max=arr[i][j];
//         }
//     }
//     cout<<max;
// }

 #include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter no of rows/coloums";
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
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            arr[i][j]=arr[j][i];
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}

