#include<iostream>
using namespace std;
int main(){
    string s="morning";
    int n=s.size();
    int i=0;
    while(i<n){
        if(i==2) s.pop_back();
        i++;
    }
    cout<<s;
}