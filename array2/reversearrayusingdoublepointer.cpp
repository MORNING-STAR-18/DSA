#include<iostream>
#include<vector>
using namespace std;
void display(vector<int>&a){
    for(int i=0;i<a.size();i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
}
int main(){
     int n;
    cout<<"decalre the size of array";
    cin>>n;
    vector<int>v;
    cout<<"enter the number ";
    for(int i=0;i<=n-1;i++){
        int q;
        cin>>q;
        v.push_back(q);
    }
    display(v);
    // int i=0;
    // int j=v.size()-1;
    // while(i<=j){
    //     int temp=v[i];
    //     v[i]=v[j];
    //     v[j]=temp;
    //     i++;
    //     j--;
    // }
    for(int i=0,j=v.size()-1;i<=j;i++,j--){
     int temp=v[i];
        v[i]=v[j];
        v[j]=temp;
    }
    display(v);
}