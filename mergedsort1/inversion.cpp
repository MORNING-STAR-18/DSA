// #include<iostream>
// #include<vector>
// using namespace std;
// int inversion(vector<int>&a,vector<int>&b){
//     int i=0,j=0,count=0;
//     while(i<a.size()&&j<b.size()){
//         if(a[i]>b[j]){
//             count+=(a.size()-i);
//             j++;
//         }
//         else i++;
//     }
//     return count;
// }
// void merge(vector<int>&a,vector<int>&b,vector<int>&res){
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
// int  mergesort(vector<int> &v){
//     int count=0,n=v.size();
//     if(n==1) return 0;
//     int n1=n/2,n2=n-n/2;
//     vector<int>a(n1),b(n2);
//     for(int i=0;i<n1;i++) a[i]=v[i];
//     for(int i=0;i<n2;i++) b[i]=v[i+n1];
//     count+= mergesort(a);
//     count+= mergesort(b);
//     count+=inversion(a,b);
//     merge(a,b,v);
//     a.clear();
//     b.clear();
//     return count;
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
//     for(int i=0;i<v.size();i++){
//         cout<<v[i]<<" ";
//     }
//     cout<<endl<<mergesort(v);
// }


#include<iostream>
#include<vector>
using namespace std;
int c=0;
int inversion(vector<int>&a,vector<int>&b){
    int i=0,j=0,count=0;
    while(i<a.size()&&j<b.size()){
        if(a[i]>b[j]){
            count+=(a.size()-i);
            j++;
        }
        else i++;
    }
    return count;
}
void merge(vector<int>&a,vector<int>&b,vector<int>&res){
    int i=0,j=0,k=0;
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
void  mergesort(vector<int> &v){
    int count=0,n=v.size();
    if(n==1) return;
    int n1=n/2,n2=n-n/2;
    vector<int>a(n1),b(n2);
    for(int i=0;i<n1;i++) a[i]=v[i];
    for(int i=0;i<n2;i++) b[i]=v[i+n1];
    mergesort(a);
    mergesort(b);
    c+=inversion(a,b);
    merge(a,b,v);
    a.clear();
    b.clear();
    return;
}
int main(){
    int n;
    cout<<"enter the size of array";
    cin>>n;
    vector<int>v(n);
    cout<<"enter element in array"<<endl;
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    mergesort(v);
    cout<<endl<<c;
}

