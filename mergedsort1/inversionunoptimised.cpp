#include<iostream>
#include<vector>
using namespace std;
void inv(vector<int>&v,int i,int count){
    if(i==v.size()){
        cout<<count;
        return;
    }
    int j=i+1;
    while(j<=v.size()-1){
        if(v[i]>v[j]){
            count++;
            j++;
        }
        else j++;
    }
    inv(v,i+1,count);
}
int main(){
    int n;
    cout<<"enter size of vector";
    cin>>n;
    vector<int>v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    cout<<endl;
    inv(v,0,0);
}