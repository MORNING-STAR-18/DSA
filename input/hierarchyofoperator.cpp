#include<iostream>
using namespace std;
int main(){
   int a,b,c;
   cout<<"enter first no";
   cin>>a;
   cout<<"enter second no";
   cin>>b;
   cout<<"enter thrid no";
   cin>>c;
   if(a>b){
    if(a>c){
        cout<<a<<" is greatest";
    }
    else{
        cout<<c<<" is greatest";
    }
}
   
   
   else{
    if(b>c){
        cout<<b <<"is greatest";
    }
    else{
        cout<<c<<"is greatest";
    }
   }
}