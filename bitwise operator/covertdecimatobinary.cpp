#include<iostream>
using namespace std;
string decimal_to_binary(int n){
    string result="";
    while(n>0){
        if(n%2==0) result+="0";
        else result+="1";
        n/=2;
    }
    return result;
}
int main(){
    int n;
    cout<<"enter a number";
    cin>>n;
    cout<<decimal_to_binary(n);
}