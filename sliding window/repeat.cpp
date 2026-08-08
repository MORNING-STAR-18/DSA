// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"enter the size of array";
//     cin>>n;
//     int arr[n];
//     cout<<"enter the element in array";
//     cout<<endl;
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
//     int k;
//     cout<<"enter the maximum size of subarray";
//     cin>>k;
//     int sum=0;
//     for(int i=0;i<k;i++){
//         sum+=arr[i];
//     }
//     int msum=sum;
//     int i=1;
//     int j=k;
//     while(j<n){
//         sum+=arr[j]-arr[i-1];
//         msum=max(msum,sum);
//         i++;
//         j++;
//     }
//     cout<<msum;
// }

// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"enter the size of customers";
//     cin>>n;
//     int customers[n];
//     int greddy[n];
//     int sum=0;
//     cout<<"enter the element in customers";
//     cout<<endl;
//     for(int i=0;i<n;i++){
//         cin>>customers[i];
//     }
//     cout<<"enter the element in greedy ";
//     cout<<endl;
//     for(int i=0;i<n;i++){
//         cin>>greddy[i];
//     }
//     int k;
//     cout<<"enter the mimnutes in which he not be grumpy";
//     cin>>k;
//     for(int i=0;i<k;i++){
//         if(greddy[i]==1) sum+=customers[i];
//     }
//     int mloss=sum;
//     int i=1;
//     int j=k;
//     int idx=0;
//     while(j<n){
//         if(greddy[j]==1) sum+=customers[j];
//         if(greddy[i-1]==1) sum-=customers[i-1];
//         if(mloss<sum){
//             mloss=sum;
//             idx=i;
//         }
//         i++;
//         j++;
//     }
//     for(int i=0;i<k;i++){
//         greddy[idx++]=0;
//     }
//     sum=0;
//     for(int i=0;i<n;i++){
//         if(greddy[i]==0) sum+=customers[i];
//     }
//     cout<<sum;
// }


// #include<iostream>
// #include<vector>
// using namespace std;
// int main(){
//     int n;
//     cout<<"enter the size of array";
//     cin>>n;
//     int arr[n];
//     cout<<"enter the elemeenrt in array"<<endl;
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
//     int k;
//     cout<<"enter the size of subarray";
//     cin>>k;
//     vector<int>ans;
//     int idx=-1;
//     for(int i=0;i<k;i++){
//         if(arr[i]<0){
//             ans.push_back(arr[i]);
//             idx=i;
//             break;
//         }
//     }
//     if(idx==-1) ans.push_back(1);
//     int i=1;
//     int j=k;
//     while(j<n){
//         if(idx>=i)ans.push_back(arr[idx]);
//         else{
//             idx=-1;
//             for(int x=i;x<=j;x++){
//                 if(arr[x]<0){
//                     ans.push_back(arr[x]);
//                     idx=x;
//                     break;
//                 }
//             }
//             if(idx==-1) ans.push_back(1);
//         }
//         i++;
//         j++;
//     }
//     for(int i=0;i<ans.size();i++){
//         cout<<ans[i]<<" ";
//     }
// }

// #include<iostream>
// #include<climits>
// using namespace std;
// int main(){
//     int n;
//     cout<<"enter the size of array";
//     cin>>n;
//     int arr[n];
//     cout<<"enter element in array";
//     cout<<endl;
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
//     int len=0;
//     int mlen=INT_MAX;
//     int sum=0;
//     int target;
//     cout<<"enter a target";
//     cin>>target;
//     int i=0;
//     int j=0;
//     while(j<n){
//         sum+=arr[j];
//         while(sum>=target){
//             len=j-i+1;
//             mlen=min(len,mlen);
//             sum-=arr[i];
//             i++;
//         }  
//         j++;
//     }
//     cout<<mlen;
// }

// #include<iostream>
// #include<climits>
// using namespace std;
// int main(){
//     int n;
//     cout<<"enter the size of array";
//     cin>>n;
//     int arr[n];
//     cout<<"enter the element in array 0 &1 is only allowed";
//     cout<<endl;
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
//     int k;
//     cout<<"enter no of flips";
//     cin>>k;
//     int x=0;
//     int i=0;
//     int j=0;
//     int len;
//     int mlen=INT_MIN;
//     while(j<n){
//         if(arr[j]==1) j++;
//         else{
//             if(x<k){
//                 j++;
//                 x++;
//             }
//             else{
//                 len=j-i;
//                 mlen=max(mlen,len);
//                 while(arr[i]==1) i++;
//                 i++;
//                 j++;
//             }
//         }
//     }
//     len=j-i;
//     mlen=max(mlen,len);
//     cout<<mlen;
// }

// #include<iostream>
// #include<climits>
// using namespace std;
// int main(){
//     int n;
//     cout<<"enter the sie of array";
//     cin>>n;
//     int arr[n];
//     cout<<"enter the element in array only 1 & 0"<<endl;
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
//     int i=0;
//     int j=0;
//     int k=1;
//     int x=0;
//     int len=0;
//     int mlen=INT_MIN;
//     while(j<n){
//         if(arr[j]==1) j++;
//         else{
//             if(x<k){
//                 x++;
//                 j++;
//             }
//             else{
//                 len=j-i;
//                 mlen=max(len,mlen);
//                 while(arr[i]==1) i++;
//                 i++;
//                 j++;
//             }  
//         } 
//     }
//     len=j-i;
//     mlen=max(len,mlen);
//     cout<<mlen-1;
// }


// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"enter the size of array";
//     cin>>n;
//     int arr[n];
//     cout<<"enter the element in array";
//     cout<<endl;
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
//     int target;
//     cout<<"enter a targert";
//     cin>>target;
//     int count=0;
//     int i=0;
//     int j=0;
//     int p=1;
//     while(j<n){
//         p*=arr[j];
//         while(p>=target){
//             count+=(j-i);
//             p/=arr[i];
//             i++;
//         }
//         j++;
//     }
//     while(i<n){
//         count+=(j-i);
//         i++;
//     }
//     cout<<count;
// }

// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"enter the size of array";
//     cin>>n;
//     int arr[n];
//     cout<<"enter the ellement in array"<<endl;
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
//     int k;
//     cout<<"enter a target";
//     cin>>k;
//     int i=0;
//     int j=0;
//     int p=1;
//     int sum=0;
//     int count=0;
//     while(j<n){
//         sum+=arr[j];
//         p=sum*(j-i+1);
//         while(p>=k){
//             count+=(j-i);
//             sum-=arr[i];
//             i++;
//             p=sum*(j-i+1);
//         }
//         j++;
//     }
//     while(i<n){
//         count+=(j-i);
//         i++;
//     }
//     cout<<count;
// }

