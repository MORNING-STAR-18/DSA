// #include<iostream>
// using namespace std;
// void display(int a[]){
//     for(int i=0;i<=4;i++){
//         cout<<a[i]<<" ";
//     }
//     cout<<endl;
// }
//     void change(int b[]){
//         b[0]=100;
//         cout<<endl;
//     }
// int main(){
//     int n;
//     cout<<"enter size of array";
//     cin>>n;
//     int arr[n];
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
//     display(arr);
//     change(arr);
//     display(arr);
// }


// #include<iostream>
// #include<vector>
// using namespace std;
// int main(){
// vector<int>v;
// int n;
// cout<<"declare the size of array ";
// cin>>n;
// cout<<"enter the element";
// for(int i=0;i<=n-1;i++){
//     int q;
//     cin>>q;
//     v.push_back(q);
// }
// int x;
// cout<<"enter the elment you want to check ";
// cin>>x;
// for(int i=v.size()-1;i>=0;i--){
//     if(v[i]==x){
//     cout<<i;
//     break;
// }
// else
//  cout<<"not present";
// }
// }


// #include<iostream>
// #include<vector>
// using namespace std;
// int main(){
//     vector<int>v;
//     int n;
//     cout<<"enter the size of array";
//     cin>>n;
//     cout<<"enter the number";
//     for(int i=0;i<=n-1;i++){
//         int q;
//         cin>>q;
//         v.push_back(q);
//     }
//     int x;
//     cout<<"enter the number you want to found ";
//     cin>>x;
//     for(int i=0;i<v.size();i++){
//         for(int j=i+1;j<v.size();j++){
//             if(v[i]+v[j]==x){
//                 cout<<"("<<i<<","<<j<<")";
//             }
//         }
//     }

// }


// #include<iostream>
// #include<vector>
// using namespace std;
// int main(){
//     vector<int>v1;
//     int n;
//     cout<<"declare the size of array";
//     cin>>n;
//     cout<<"enter the number";
//     for(int i=0;i<n;i++){
//         int q;
//         cin>>q;
//         v1.push_back(q);
//     }
//     vector<int>v2(v1.size());
//     for(int i=v1.size()-1;i>=0;i--){
//         for(int j=0;j<v1.size();j++){
//             if(i+j==v1.size()-1){
//                 v2[j]=v1[i];
//                 cout<<v2[j]<<" ";
//             }
//         }
//     }
// }


// #include<iostream>
// #include<vector>
// using namespace std;
// void display(vector<int>&v){
//     for(int i=0;i<v.size();i++){
//         cout<<v[i]<<" ";
//     }
//     cout<<endl;
// }
//     void reverse(vector<int>&v){
//         for(int i=0,j=v.size()-1;i<=j;i++,j--){
//             int temp=v[j];
//             v[j]=v[i];
//             v[i]=temp;
//             // cout<<v[i];
//         }

//     }

// int main(){
//     int n;
//     cout<<"declare the size of array";
//     cin>>n;
//     vector<int>v;
//     cout<<"enter the number";
//     for(int i=0;i<=n-1;i++){
//         int q;
//         cin >>q;
//         v.push_back(q);
//     }
//     display(v);
//     reverse(v);
//     display(v);
// }


// #include<iostream>
// #include<vector>
// using namespace std;
// void display(vector<int>&v){
//     for(int i=0;i<v.size();i++){
//         cout<<v[i]<<" ";
//     }
//     cout<<endl;
// }
// void reversepart(int i,int j,vector<int>&v){
//     while(i<=j){
//         int temp=v[j];
//         v[j]=v[i];
//         v[i]=temp;
//         i++;
//         j--;
//     }
// }
// int main(){
//     vector<int>v;
//     int n;
//     cout<<"declatre the size of array";
//     cin>>n;
//     for(int i=0;i<=n-1;i++){
//         int q;
//         cin>>q;
//         v.push_back(q);
//     }
//     display(v);
//     reversepart(2,3,v);
//     display(v);
//     reversepart(0,v.size()-1,v);
//     display(v);
// }


// #include<iostream>
// #include<vector>
// using namespace std;
// void display(vector<int>&v){
//     for(int i=0;i<v.size();i++){
//         cout<<v[i]<<" ";
//     }
//     cout<<endl;
// }

// void reverse(int i,int j,vector<int>&v){
//     while(i<=j){
//         int temp=v[j];
//         v[j]=v[i];
//         v[i]=temp;
//         i++;
//         j--;
//     }
// }
// int main(){
//     int n;
//     cout<<"declare the size of array";
//     cin>>n;
//     vector<int>v;
//     cout<<"enter the number";
//     for(int i=0;i<=n-1;i++){
//         int q;
//         cin>>q;
//         v.push_back(q);
//     }
//     int k;
//     cout<<"enter from how much the array should rotate";
//     cin>>k;
//     display(v);
//     if(k>n) k=k%n;
//     reverse(0,v.size()-1-k,v);
//     reverse(v.size()-k,v.size()-1,v);
//     reverse(0,v.size()-1,v);
//     display(v);
//     }


#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    vector<int>v;
    int n;
    cout<<"declare the size of array";
    cin>>n;
    for(int i=0;i<=n-1;i++){
        int q;
        cin>>q;
        v.push_back(q);
    }
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
    sort(v.begin(),v.end());
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
}
