#include<iostream>
#include<vector>
using namespace std;
int pivot(vector<int>&v,int si,int ei){
    int count=0;
    int pivotelement=(si+ei)/2;
    for(int i=si;i<=ei;i++){
        if(i==pivotidx) continue;
        if(v[i]<=v[pivotidx]) count++:
    }
    int pivotidx=count+1;
    swap(v[pivotelement],v[pivotidx]);
    
}
void quicksort(vector<int>&v,si,ei){
    if(si>=ei) return;
    int pi=pivot(v,si,ei);
    quicksort(v,si,pi-1);
    quicksort(v,pi+1,ei);
}
int main(){
    int n;
    cout<<"enter the size of array";
    cin>>n;
    cout<<"enter the element in array";
    cout<<endl;
    vector<int>v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    quicksort(v,0,n-1);
    for(int i=0;i<n;i++){
        cout<<v[i]<<" ";
    }
}