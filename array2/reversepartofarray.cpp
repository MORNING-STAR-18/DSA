// isme dono h part bhi reverse h aur pura array bhi reverse h bus pure reverse ko maine function se iss vaar kiya h
#include<iostream>
#include<vector>
using namespace std;
void display(vector<int>&a){
    for(int i=0;i<a.size();i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
}
void reversepart(int i,int j,vector<int>&v){
    while(i<=j){
        int temp=v[i];
        v[i]=v[j];
        v[j]=temp;
        i++;
        j--;
    }
}
void reverse(vector<int>&v){
    int i=0;
    int j=v.size()-1;
    while(i<=j){
    int temp=v[i];
    v[i]=v[j];
    v[j]=temp;
    i++;
    j--;
    }
}
int main(){
    vector<int>v;
    int n;
    cout<<"enter size of array";
    cin>>n;
    cout<<"enter the number";
    for(int i=0;i<=n-1;i++){
        int q;
        cin>>q;
       v.push_back(q);
    }
    display(v);
    reversepart(0,2,v);
    display(v);
    reverse(v);
    display(v);
}