// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"declare the size of array";
//     cin>>n;
//     int arr[n];
//     for(int i=0;i<=n-1;i++){
//         cin>>arr[i];
//     }
//     for(int i=0;i<=n-1;i++){
//         cout<<arr[i]<<" ";
//     }
// }

// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"enter no of student";
//     cin>>n;
//     int arr[n];
//     cout<<"enter marks of student";
//     for (int i=0;i<=n-1;i++){
//         cin>>arr[i];
//     }
//     for(int i=0;i<=n-1;i++){
//         if(arr[i]<35) cout<<arr[i]<<" ";
//     }
// }

// #include<iostream>
// using namespace std;
// int main(){
//     int arr[5];
//     cout<<arr<<endl;
//     cout<<&arr<<endl;
//     cout<<&arr[0]<<endl;
//     cout<<&arr[1]<<endl;
//     cout<<&arr[2]<<endl;
//     cout<<&arr[3]<<endl;
//     cout<<&arr[4]<<endl;
//     cout<<&arr[5]<<endl;
// }

// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"enter size of arr";
//     cin>>n;
//     int arr[n];
//     for(int i=0;i<=n-1;i++){
//         cin>>arr[i];
//     }
//     int sum=0;
//     for(int i=0;i<=n-1;i++){
//         sum+=arr[i];
//     }
//     cout<<sum;
// }

// #include<iostream>
// using namespace std;
// int main(){
//     int n,x;
//     cout<<"declare size of array";
//     cin>>n;
//     int arr[n];
//     for(int i=0;i<=n-1;i++){
//         cin>>arr[i];
//     }
//     cout<<"enter the number want to search in array";
//     cin>>x;
//     bool flag=false;
//     for(int i=0;i<=n-1;i++){
//         if(x==arr[i]) flag=true;
//     }
//     if (flag==true) cout<<"element found";
//     else cout<<"not found";
// }

// #include<iostream>
// #include<climits>
// using namespace std;
// int main(){
//     int n;
//     cout<<"declare the size of array";
//     cin>>n;
//     int arr[n];
//     for(int i=0;i<=n-1;i++){
//         cin>>arr[i];
//     }
//     int max=INT_MIN;
//     for(int i=0;i<=n-1;i++){
//         if(max<arr[i]) max=arr[i];
//     }
//     cout<<max;
// }

// #include<iostream>
// #include<climits>
// using namespace std;
// int main(){
//     int n;
//     cout<<"decalre the size of array";
//     cin>>n;
//     int arr[n];
//     for(int i=0;i<=n-1;i++){
//         cin>>arr[i];
//     }
//     int max=INT_MIN;
//     for(int i=0;i<=n-1;i++){
//         if(max<arr[i]) max=arr[i];
//     }
//     int smax=INT_MIN;
//     for(int i=0;i<=n-1;i++){
//         if(arr[i]!=max && smax<arr[i]) smax=arr[i];
//     }
//     cout<<smax;
// }

// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"enter size of array";
//     cin>>n;
//     int arr[n];
//     for(int i=0;i<=n-1;i++){
//         cin>>arr[i];
//     }
//     int x;
//     cout<<"enter the number ";
//     cin>>x;
//     int count=0;
//     for(int i=0;i<=n-1;i++){
//     if(arr[i]>x) count++;
// }
// cout<<count;
// }