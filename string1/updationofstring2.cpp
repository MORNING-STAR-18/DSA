#include<iostream>
using namespace std;
int main(){
    string str="sumit";
    cout<<str<<endl;
    for(int i=0;i<str[i]!='\0';i++){
        if(i%2==0) str[i]='a';
    }
    cout<<str;
}
