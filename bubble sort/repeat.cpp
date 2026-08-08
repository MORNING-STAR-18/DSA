// #include<iostream>
// #include<vector>
// using namespace std;
// int main(){
//     int n;
//     cout<<"enter size of vector";
//     cin>>n;
//     vector<int> v(n);
//     for(int i=0;i<n;i++){
//         cin>>v[i];
//     }
//     for(int i=0;i<n;i++){
//         bool flag=true;
//         for(int j=0;j<n-i-1;j++){
//             if(v[j]>v[j+1]){
//                 swap(v[j],v[j+1]);
//                 flag=false;
//             }
//         }
//         if(flag==true) break;
//     }
//         for(int i=0;i<n;i++){
//             cout<<v[i]<<" ";
//         }
// }

// #include<iostream>
// #include<algorithm>
// using namespace std;
// int main(){
//     cout<<"enter a string";
//     string str,s;
//     cin>>str;
//     for(int i=0;i<str.size();i++){
//         if(str[i]>='x'){
//             s.push_back(str[i]);
//         }
//     }
//     for(int i=0;i<s.size();i++){
//         bool flag=true;
//         for(int j=0;j<s.size()-i-1;j++){
//             if(s[j]>s[j+1]){
//                 swap(s[j],s[j+1]);
//                 flag=false;
//             }
//         }
//         if(flag==true)
//         break;
//     }
//     cout<<s;
// }
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"declare the size of array";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n-1-i;j++){
            if(arr[j]==0){
                swap(arr[j],arr[j+1]);
            }
        }
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}

