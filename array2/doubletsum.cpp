// #include<iostream>
// using namespace std;
// int main(){
//     int n,x;
//     cout<<"enter a number";
//     cin>>x;
//     cout<<"enter the value of n";
//     cin>>n;
//     int arr[n];
//     int y=0;
//     for(int i=0;i<=n-1;i++){
//         cin>>arr[i];
//     }
//     for(int i=0;i<=n-1;i++){
//         for(int j=i+1;j<=n-1;j++){
//             if(arr[i]+arr[j]==x) {
//             cout<<"("<<i<<","<<j<<")"<<endl;
//             }
//         }
//     }
// }

#include<iostream>
#include<vector>
using namespace std;
int main(){
    int x;
    cout<<"enter a number";
    cin>>x;
    vector<int> v;
    int n;
    cout<<"enter array size";
    cin>>n;
    cout<<"enter array element";
    for(int i=0;i<n;i++){
        int q;
        cin>>q;
        v.push_back(q);
    }
    for(int i=0;i<=v.size()-2;i++){
        for(int j=i+1;j<=v.size()-1;j++){
            if(v[i]+v[j]==x){
                cout<<"("<<i<<","<<j<<")"<<endl;
            }
        }
    }
}


