#include<iostream>
using namespace std;
int main(){
    string s="ahsdhv";
    // s.substr(idx,length)
    // cout<<s.substr(1)<<endl;;
    // cout<<s.substr(2,2)<<endl;
    // cout<<s.substr(0,1);
    // cout<<endl<<s;
    string left=s.substr(0,1);
    string right=s.substr(1);
    string str=right+left;
    cout<<str<<endl<<s;
}