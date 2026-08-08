#include<iostream>
using namespace std;
int main(){
    float principal,rate,time;
    cout<< "enter your pricipal:";
    cin>> principal;
    cout<< "enter your rate:";
    cin>>rate;
    cout<< "enter your time:";
    cin>>time;
    cout<<"simple interst is:";
    cout<<principal*rate*time/100;

}