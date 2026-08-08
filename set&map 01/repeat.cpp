// #include<iostream>
// #include<unordered_set>
// using namespace std;
// int main(){
//     unordered_set<int>s;
//     s.insert(1);
//     s.insert(2);
//     s.insert(3);
//     s.insert(4);
//     s.insert(5);
//     s.insert(5);
//     int target=2;
//     if(s.find(target)!=s.end()){
//         cout<<"present"<<endl;
//     }
//     else cout<<"not present"<<endl;
//     for(auto ele:s) cout<<ele<<" ";
//     cout<<endl<<s.size()<<endl;
//     s.erase(2);
//     s.erase(10);
//     cout<<s.size()<<endl;
//     for(auto ele:s) cout<<ele<<" ";
// }

#include<iostream>
#include<unordered_map>
using namespace std;
int main(){
    unordered_map<string,int>m;
    m["morning star"]=18;
    m["sumit"]=23;
    m["rajput"]=17;
    for(auto p:m) cout<<p.first<<" "<<p.second<<endl;
    cout<<m.size()<<endl;
    cout<<m["morning star"];
}