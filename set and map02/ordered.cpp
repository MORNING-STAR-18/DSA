#include<iostream>
#include<set>
#include<map>
using namespace std;
int main(){
    // set<int>s;
    // s.insert(5);
    // s.insert(3);
    // s.insert(7);
    // for(int ele:s){
    //     cout<<ele<<" ";//sorted value come
    // }
    // map<int,int>m;
    // m[2]=20;
    // m[1]=30;
    // m[3]=10;
    // for(auto x:m){
    //     cout<<x.first<<" ";//come in sorted key 
    // }
    map<string,int>m;
    m["morning star"]=18;
    m["sumit"]=23;
    m["rajput"]=17;
    for(auto x:m){
        cout<<x.first<<" ";//come in sorted way alphabetically
    }
}