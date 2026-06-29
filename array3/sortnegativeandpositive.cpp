#include<iostream>
#include<vector>
using namespace std;
void sorting(vector<int>&v){
    int i=0;
    int j=v.size()-1;
    while(i<j){
        if(i<0&&j>0){
            int temp=v[i];
            v[i]=v[j];
            v[j]=temp;
            i++;
            j--;
        }
        if(i>0) i++;
        if(j<0) j--;
    }
}
int main(){
    vector<int>v;
    int n;
    cout<<"declare the size of vector";
    cin>>n;
    cout<<"enter the element";
    for(int i=0;i<=n-1;i++){
        int q;
        cin>>q;
        v.push_back(q);
    }
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
    sorting(v);
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
}

