#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
    cout<<"enter a string";
    string str ,s;
    cin>>str;
    for(int i=0;i<str.size();i++){
        if(str[i]>='x'){
            s.push_back(str[i]);
        }
    }
    // sort without libraray
    sort(s.begin(),s.end());
    cout<<s;
}