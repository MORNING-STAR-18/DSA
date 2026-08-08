// #include<iostream>
// #include<vector>
// using namespace std;
// void merge(vector<int>&res,vector<int>&a,vector<int>&b){
//     int i=0,j=0,k=0;
//     while(i<a.size()&&j<b.size()){
//         if(a[i]<=b[j]) res[k++]=a[i++];
//         else res[k++]=b[j++];
//     }
//     if(i==a.size()){
//         while(j<b.size()) res[k++]=b[j++];
//     }
//     if(j==b.size()){
//         while(i<a.size()) res[k++]=a[i++];
//     }
// }
// void mergedsort(vector<int>&v){
//     int n=v.size();
//     if(n==1) return;
//     int n1=n/2,n2=n-n/2;
//     vector<int>a(n1),b(n2);
//     for(int i=0;i<n1;i++){
//         a[i]=v[i];
//     }
//     for(int i=0;i<n2;i++){
//         b[i]=v[i+n1];
//     }
//     mergedsort(a);
//     mergedsort(b);
//     merge(v,a,b);
//     a.clear();
//     b.clear();
// }
// int main(){
//     int n;
//     cout<<"enter the size of array";
//     cin>>n;
//     vector<int>v(n);
//     cout<<"enter element in array"<<endl;
//     for(int i=0;i<n;i++){
//         cin>>v[i];
//     }
//     for(int i=0;i<n;i++){
//         cout<<v[i]<<" ";
//     }
//     cout<<endl;
//     mergedsort(v);
//     for(int i=0;i<n;i++){
//         cout<<v[i]<<" ";
//     }
// }


#include<iostream>
#include<vector>
using namespace std;
int c=0;
int inversion(vector<int>&a,vector<int>&b){
    int i=0,j=0,count=0;
    while(i<a.size()&&j<b.size()){
        if(a[i]>b[j]){
            count+=(a.size()-1);
            j++;
        }
        else i++;
    }
    return count;
}
void mergedsort(vector<int>&a,vector<int>&b,vector<int>&res){
    int i=0;
    int j=0;
    int k=0;
    while(i<a.size()&&j<b.size()){
        if(a[i]<=b[j]) res[k++]=a[i++];
        else res[k++]=b[j++];
    }
    if(i==a.size()){
        while(j<b.size()) res[k++]=b[j++];
    }
    if(j==b.size()){
        while(i<a.size()) res[k++]=a[i++];
    }
}
void merged(vector<int>&v){
    int n=v.size();
    if(n==1) return;
    int n1=n/2,n2=n-n1;
    vector<int>a(n1),b(n2);
    for(int i=0;i<n1;i++){
        a[i]=v[i];
    }
    for(int j=0;j<n2;j++){
        b[j]=v[j+n1];
    }
    merged(a);
    merged(b);
    c+=inversion(a,b);
    mergedsort(a,b,v);
}
int main(){
    int n;
    cout<<"enter the size of aray";
    cin>>n;
    vector<int>v(n);
    cout<<"enter elelent in array"<<endl;
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    merged(v);
    cout<<endl;
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
}