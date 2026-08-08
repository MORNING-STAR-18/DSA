#include<iostream>
#include<unordered_map>
using namespace std;
int main(){
    unordered_map<string,int>m;//map<key,value>m
    pair<string,int> p1;
    // p1.first="morning star";
    // p1.second=18;
    // m.insert(p1);
    // pair<string,int> p2;
    // p2.first="sumit";
    // p2.second=23;
    // m.insert(p2);
    // pair<string,int> p3;
    // p3.first="rajput";
    // p3.second=17;
    // m.insert(p3);
    m["morning star"]=18;
    m["sumit"]=23;
    m["rajput"]=17;
    // for(pair<string,int>p:m){
    //     cout<<p.first<<" "<<p.second<<endl;
    // }
    for(auto p:m){//samme as first for loop 
        cout<<p.first<<" "<<p.second<<endl;
    }
    cout<<m.size()<<endl;
    m.erase("morning star");
    for(auto p:m){//samme as first for loop 
        cout<<p.first<<" "<<p.second<<endl;
    }
    cout<<m["rajput"]<<endl;//its give me value of that key;
    cout<<m.size();
}