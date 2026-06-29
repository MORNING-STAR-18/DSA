// #include<iostream>
// #include<vector>
// #include<climits>
// using namespace std;
// int main(){
//     int n;
//     cout<<"size of array";
//     cin>>n;
//     vector<int>v(n);
//     for(int i=0;i<n;i++){
//         cin>>v[i];
//     }
//     for(int i=0;i<n-1;i++){
//         int min =INT_MAX;
//         int midx =-1;
//         for(int j=i;j<n;j++){
//             if(v[j]<min){
//                 min =v[j];   
//                 midx =j;
//             }
//         }
//         swap(v[i],v[midx]);
//     }
//     for (int i=0;i<n;i++){
//         cout<<v[i]<<" ";
//     }
// }

// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"enter size of array";
//     cin>>n;
//     int arr[n];
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
//     for(int i=0;i<n;i++){
//        int j=i;
//        while(j>=1&&arr[j]<arr[j-1]){
//         swap(arr[j],arr[j-1]);
//         j--;
//        } 
//     }
//     for(int i=0;i<n;i++){
//         cout<<arr[i]<<" ";
//     }
// }

