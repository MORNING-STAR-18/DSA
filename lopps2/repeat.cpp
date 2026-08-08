#include<iostream>
using namespace std;
int main(){
    int a=1,b=1,power=1;
    cout<<"enter a power";
    cin>>a;
    cout<<"enter base";
    cin>>b;
    for(int i=1;i<=a;i++){
        power*=b;
    }
    cout<<power;
}
    