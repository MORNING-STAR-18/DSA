// #include<iostream>
// #include<vector>
// using namespace std;
// int main(){
//     vector<int>v1;
//     vector<int>v2;
//     int n,m;
//     cout<<"declare the size of first array";
//     cin>>n;
//     cout<<"declare the size of second array";
//     cin>>m;
//     cout<<"enter the number in first array"<<endl;
//     for(int i=0;i<n;i++){
//         int q;
//         cin>>q;
//         v1.push_back(q);
//     }
//     cout<<"enter the element in second array"<<endl;;
//     for(int i=0;i<m;i++){
//         int k;
//         cin>>k;
//         v2.push_back(k);
//     }
//     int i=0;
//     int j=0;
//     int k=0;
//     vector<int>v3(m+n);
//     while(i<=n-1&&j<=m-1){
//         if(v1[i]<v2[j]){
//             v3[k]=v1[i];
//             i++; 
//             k++;         
//         }
//        else{
//             v3[k]=v2[j];
//             j++;
//             k++;
//        }
    
//     }
//     if(i>=n){
//         while(j<=m-1){
//             v3[k]=v2[j];
//             k++;
//             j++;
//         }
//     }
//     if(j>=m-1){
//         while(i<=n-1){
//             v3[k]=v1[i];
//             k++;
//             i++;
//         }
//     }
//          for(int i=0;i<v3.size();i++){
//         cout<<v3[i]<<" ";
//     }
// }
    
    
// #include<iostream>
// #include<vector>
// using namespace std;
// int main(){
//     vector<int>v;
//     int n;
//     cout<<"declare the size of array";
//     cin>>n;
//     cout<<"enter the number"<<endl;
//     for(int i=0;i<n;i++){
//         int q;
//         cin>>q;
//         v.push_back(q);
//     }
//     int noz=0;
//     int noo=0;
//     for(int i=0;i<n;i++){
//         if(v[i]==0) noz++;
//         else noo++;
//     }
//     for(int i=0;i<n;i++){
//         if(i<noz) v[i]=0;
//         else{
//            v[i]=1;
//            }
//     }
//     for(int i=0;i<n;i++){
//         cout<<v[i]<<" ";
//     }
// }


// #include<iostream>
// #include<vector>
// using namespace std;
// int main(){
//     vector<int>v;
//     int n;
//     cout<<"declare theb size of array";
//     cin>>n;
//     cout<<"enter the number"<<endl;
//     for(int i=0;i<=n-1;i++){
//         int q;
//         cin>>q;
//         v.push_back(q);
//     }
//     int i=0;
//     int j=v.size()-1;
//     while(i<j){
//         if(v[i]==0) i++;
//         if(v[j]==1) j--;
//         if(v[i]==1&&v[j]==0){
//             int temp=v[j];
//             v[j]=v[i];
//             v[i]=temp;
//             i++;
//             j--;
//         }
//     }
//     for(int i=0;i<n;i++){
//         cout<<v[i]<<" ";
//     }
// }


// #include<iostream>
// #include<vector>
// using namespace std;
// int main(){
//     vector<int>v;
//     int n;
//     cout<<"declare the size of array";
//     cin>>n;
//     for(int i=0;i<n;i++){
//         int q;
//         cin>>q;
//         v.push_back(q);
//     }
//     int i=0;
//     int j=v.size()-1;
//     while(i<j){
//         if(v[i]>0) i++;
//         if(v[j]<0)j--;
//         if(v[i]<0&&v[j]>0){
//             int temp=v[i];
//             v[i]=v[j];
//             v[j]=temp;
//         }
//     }
//     for(int i=0;i<n;i++){
//         cout<<v[i]<<" ";
//     }
// }


// #include<iostream>
// #include<vector>
// using namespace std;
// int main(){
//     vector<int>v;
//     int n;
//     cout<<"declare the size of array";
//     cin>>n;
//     cout<<"enter the number"<<endl;
//     for(int i=0;i<n;i++){
//         int q;
//         cin>>q;
//         v.push_back(q);
//     }
//     int noz=0;
//     int noo=0;
//     int not1=0;
//     for(int i=0;i<n;i++){
//         if(v[i]==0) noz++;
//         if(v[i]==1) noo++;
//         if(v[i]==2) not1++;
//     }
//     for(int i=0;i<v.size();i++){
//         if(i<noz) v[i]=0;
//        else if(i<(noo+noz)) v[i]=1;
//         else v[i]=2;
//     }
//     for(int i=0;i<n;i++){
//         cout<<v[i]<<" ";
//     }
// }

#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>v;
    int n;
    cout<<"declare the size of array";
    cin>>n;
    for(int i=0;i<n;i++){
        int q;
        cin>>q;
        v.push_back(q);
    }
    int idx=-1;
    for(int i=n-2;i>=0;i--){
        if(v[i]<v[i+1]){
            idx=i;
            break;
        }
    }
        if(idx==-1){
           int i=0;
           int j=v.size()-1;
           while(i<j){
            int temp=v[i];
            v[i]=v[j];
            v[j]=temp;
            i++;
            j--;
           }
        }
        int i=idx+2;
        int j=v.size()-1;
        while(i<j){
            int temp=v[i];
            v[i]=v[j];
            v[j]=temp;
            i++;
            j--;
        }
        int k =-1;
        for(int i=idx+1;i<v.size();i++){
            if(v[i]>v[idx]){
                k=i;
                break;
            }
        }
        int temp=v[idx];
        v[idx]=v[k];
        v[k]=temp;
        for(int i=0;i<n;i++){
            cout<<v[i]<<" ";
        }
}