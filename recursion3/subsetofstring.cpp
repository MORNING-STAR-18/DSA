#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
// void printsubset(string ans,string original){
//     if(original==""){
//         cout<<ans<<endl;
//         return;
//     }
//     char ch=original[0];
//     printsubset(ans+ch,original.substr(1));
//     printsubset(ans,original.substr(1));
// }
void storesubset(string ans,string original,vector<string>&v){
    if(original==""){
        // if(ans.size()>1)
        v.push_back(ans);
        return;
    }
    char ch=original[0];
    storesubset(ans+ch,original.substr(1),v);
    storesubset(ans,original.substr(1),v);
}
int main(){
    string str;
    cout<<"enter a string ";
    cin>>str;
    vector<string>v;
    // printsubset("",str);
    storesubset("",str,v);
    sort(v.begin(), v.end(), [](string &a, string &b){
    return a.size() > b.size();
});

    for(string ele:v){
        cout<<ele<<endl;
    }
}