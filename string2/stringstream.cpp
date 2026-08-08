#include<iostream>
#include<sstream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    string str="sumit rajput";
    stringstream ss(str);
    string temp;
    
    while(ss>>temp){
        cout<<temp<<endl;
    }
}