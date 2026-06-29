#include<iostream>
using namespace std;
void findunique(int *arr,int n){
    int res=0;
    for(int i=0;i<n;i++) res^=arr[i];
    int k=0;
    int temp=res;
    while(true){
        if((temp&1)==1) break;
        temp=temp>>1;
        k++;
    }
    int retval=0;
    for(int i=0;i<n;i++){
        int num=arr[i];
        if(((num>>k)&1)==1) retval^=num;
    }
    cout<<retval<<" ";
    res^=retval;
    cout<<res;
}
int main(){
    int n;
    cout<<"enter the size of array";
    cin>>n;
    int arr[n];
    cout<<"enter the element in array"<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    findunique(arr,n);
}