#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter a number";
    cin>>n;
    int sum =0;
    // for(int i=1;i<=n;i++){
    //     if(i%2!=0) sum+=i;
    //     else sum-=i;
    // }
    // cout<<sum;
    if(n%2==0){
        cout<<"sum"<<-n/2;}
        else{
            cout<<"sum"<<-n/2+n;

        }
    
}