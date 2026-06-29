#include<iostream>
using namespace std;
int main(){
    int a,b;
    char op;
    cout<<"enter a problem";
    cin>>a>>op>>b;
    // if(op=='+') cout<<a+b;
    // if(op=='-') cout<<a-b;
    // if(op=='*') cout<<a*b;
    // if(op=='/') cout<<a/b;
    switch(op){
        case '+':
        cout<<a+b;
        break;
    }
    switch(op){
        case '-':
        cout<<a-b;
        break;
    }
    switch(op){
        case '*':
        cout<<a*b;
        break;
    }
    switch(op){
        case '/':
        cout<<a/b;
        break;
    }
}