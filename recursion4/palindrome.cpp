#include<iostream>
using namespace std;
bool pali(string str,int i,int j){
    if(i>j) return true;
    if(str[i]!=str[j]) return false;
    else return pali(str,i+1,j-1);
}
int main(){
    string str;
    cout<<"enter a string";
    cin>>str;
    int i=0;
    int j=str.size()-1;
    cout<<pali(str,i,j);
}