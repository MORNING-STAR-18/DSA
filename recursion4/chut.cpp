#include<iostream>
using namespace std;
void part(int n,string s,int open ,int close){
    if(n==close){
        cout<<s<<endl;
        return;
    }
    if(open<n) part(n,s+'(',open+1,close);
    if(close<open) part(n,s+')',open,close+1);
}
int main(){
    int n=3;
    part(n,"",0,0);
}