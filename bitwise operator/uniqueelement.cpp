#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the size of array";
    cin>>n;
    int arr[n];
    cout<<"enter the element in array"<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int x=0;
    for(int i=0;i<n;i++){
        x=x^arr[i];
    }
    cout<<"unique element is "<<x;
}