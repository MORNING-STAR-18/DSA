#include<iostream>
#include<vector>
using namespace std;
int partition(vector<int>&v,int si,int ei){
    int pivotelement=v[(si+ei)/2];
    int count=0;
    for(int i=si;i<=ei;i++){
        if(i==(si+ei)/2) continue;
        if(v[i]<=pivotelement) count++;
    }
    int pivotidx=count+si;
    swap(v[(si+ei)/2],v[pivotidx]);
    int i=si;
    int j=ei;
    while(i<pivotidx&&j>pivotidx){
        if(v[i]<=v[pivotidx]) i++;
        if(v[j]>=v[pivotidx]) j--;
        else if(v[i]>v[pivotidx]&&v[j]<=v[pivotidx]){
            swap(v[i],v[j]);
            i++;
            j--;
        }
    }
    return pivotidx;
}
void quicksort(vector<int>&v,int si,int ei){
    if(si>=ei) return;
    int pi=partition(v,si,ei);
    quicksort(v,si,pi-1);
    quicksort(v,pi+1,ei);
}
int main(){
    int n;
    cout<<"enter the size of array";
    cin>>n;
    vector<int>v(n);
    cout<<"enter the elemnt in array";
    cout<<endl;
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    quicksort(v,0,n-1);
    for(int i=0;i<n;i++){
        cout<<v[i]<<" ";
    }
}