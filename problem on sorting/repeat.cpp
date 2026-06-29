// #include<iostream>
// #include<vector>
// #include<climits>
// using namespace std;
// int main(){
//     int n;
//     cout<<"enter size of array";
//     cin>>n;
//     int arr[n];
//     vector<int> v(n,0);
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
//     int x=0;
//     for(int i=0;i<n;i++){
//         int min=INT_MAX;
//         int mdx=-1;
//         for(int j=0;j<n;j++){
//             if(v[j]==1) continue;
//             else{
//                 if(arr[j]<min){
//                     min =arr[j];
//                     mdx=j;
//                 }
//             }
//         }
//         arr[mdx]=x;
//         x++;
//         v[mdx]=1;
//     }
//     for(int i=0;i<n;i++){
//         cout<<arr[i]<<" ";
//     }
// }


// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"enter size of greed array";
//     cin>>n;
//     int m;
//     cout<<"enter size of cookies array";
//     cin>>m;
//     int g[n];
//     int s[m];
//     for(int i=0;i<n;i++){
//         cin>>s[i];
//     }
//     for(int i=0;i<m;i++){
//         cin>>g[i];
//     }
//     int i=0;
//     int j=0;
//     int count=0;
//     while(i<m&&j<n){
//         if(s[j]>=g[i]){
//             count++;
//             i++;
//             j++;
//         }
//         else j++;
//     }
//     cout<<count;
// }

// #include<iostream>
// #include<vector>
// #include<algorithm>
// using namespace std;
// int main(){
//     int n;
//     cout<<"enter size of vector";
//     cin>>n;
//     cout<<"enter element in vector"<<endl;
//     vector<int> v(n);
//     for(int i=0;i<n;i++){
//         cin>>v[i];
//     }
//     sort(v.begin(),v.end());
//     cout<<v[n/2];
// }


#include<iostream>
#include<climits>
using namespace std;
int main(){
    int n;
    cout<<"enter size of array";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    float kmin=(float)INT_MIN;
    float kmax=(float)INT_MAX;
    bool flag= true;
    for(int i=0;i<n-1;i++){
        if(arr[i]>=arr[i+1]){
            kmin=max(kmin,(float)(arr[i]+arr[i+1])/2);
        }
        else kmax=min(kmax,(float)(arr[i]+arr[i+1])/2);
        if(kmin>kmax){
            flag=false;
            break;
        }
    }
    if(flag==false){
        cout<<-1;
    }
    else if(kmin==kmax){
        if((kmin-(int)kmin)==0){
            cout<<"there is only of k is"<<kmin;
        }
        else cout<<-1;
    }
    else{
        if((kmin-(int)kmin)>0){
            kmin=(int)kmin+1;
        }
    cout<<"range of k is"<<"["<<kmin<<","<<(int)kmax<<"]";
    }
}