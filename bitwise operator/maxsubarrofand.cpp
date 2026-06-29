#include<iostream>
#include<climits>
using namespace std;
int main(){
    int n;
    cout<<"enter size of aarray";
    cin>>n;
    int arr[n];
    cout<<"enter element in array"<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int max_el=INT_MIN;
    int count=0;
    int ans=0;
    for(int i=0;i<n;i++){
        if(arr[i]>max_el){
            max_el=arr[i];
            count=1;
        }
        else if(arr[i]==max_el){
            count++;
        }
        ans=max(ans,count);
    }
    cout<<ans;
}