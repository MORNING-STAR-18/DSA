#include<iostream>
#include<vector>
using namespace std;
void sorting1(vector<int>&v){
   int i=0;
   int j=v.size()-1;
    while(i<j){
        if(v[i]==1&&v[j]==0){
            v[i]=0;
            v[j]=1;
            i++;
            j--;
        }
        if(v[i]==0) i++;
        if(v[j]==1) j--;
        // if(i>j) break;
        }
    }
    

int main(){
    vector<int>v;
    int n;
    cout<<"declare the size of vector";
    cin>>n;
    cout<<"enter 0 and 1"<<endl;
    for(int i=0;i<=n-1;i++){
        int q;
        cin>>q;
        v.push_back(q);
    }
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
    sorting1(v);
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
}


