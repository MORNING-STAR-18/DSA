// 1
// #include<iostream>
// #include<vector>
// using namespace std;
// void subset(vector<int>&v,vector<int>ans,int idx){
//     if(idx==v.size()){
//         for(int i=0;i<ans.size();i++){
//             cout<<v[i]<<" ";
//         }
//         cout<<endl;
//         return;
//     }
//     if(v.size()==0||v[idx]!=ans[idx]){
//     subset(v,ans,idx+1);
//     ans.push_back(v[idx]);
//     }
//     subset(v,ans,idx+1);
// }
// int main(){
//     int n;
//     cout<<"enter the size of array";
//     cin>>n;
//     vector<int>v(n);
//     cout<<"enter element in array";
//     cout<<endl;
//     for(int i=0;i<n;i++){
//         cin>>v[i];
//     }
//     vector<int>ans;
//     subset(v,ans,0);
// }


// 5
// #include<iostream>
// using namespace std;
// string  binary(int n,string ans){
//     if(n==0){
//         return ans;
//     }
//     ans=binary(n/2,ans);
//     return ans+=to_string(n%2);
// }
// int main(){
//     int n;
//     cout<<"enter a number ";
//     cin>>n;
//     string s="";
//     cout<<binary(n,s);
//     char ch=s[0];
//     cout<<ch;
// }


// 4
// #include<iostream>
// using namespace std;
// void fact(int n,int x){
//     if(n==1||n==0){
//         cout<<x;
//         return;
//     }
//     x*=n;
//     fact(n-1,x);
// }
// int main(){
//     int n;
//     cout<<"enter  a number you want to factorial";
//     cin>>n;
//     fact(n,1);
// }


// 4(more optimised)
// #include<iostream>
// using namespace std;
// int fact(int n){
//     if(n==1||n==0) return 1;
//     n=n*fact(n-1);
// }
// int main(){
//     int n;
//     cout<<"enter the number you want to find the fact";
//     cin>>n;
//     cout<<fact(n);
// }

// 3
// #include<iostream>
// #include<vector>
// using namespace std;
// void sub1(string str,vector<string>&s1,string ans,int idx){
//     if(idx==str.size()){
//         if(ans!=""){
//             s1.push_back(ans);
//             return;
//         }
//         else return;
//     }
//     sub1(str,s1,ans,idx+1);
//     if(ans==""||str[idx-1]==ans[ans.size()-1]){
//         sub1(str,s1,ans+str[idx],idx+1);
//     }
// }
// void sub2(string ztr,vector<string>&s2,string ans,int idx){
//     if(idx==ztr.size()){
//         if(ans!=""){
//             s2.push_back(ans);
//             return;
//         }
//         else return;
//     }
//     sub2(ztr,s2,ans,idx+1);
//     if(ans==""||ztr[idx-1]==ans[ans.size()-1]){
//         sub2(ztr,s2,ans+ztr[idx],idx+1);
//     }
// }
// int main(){
//     string str,ztr;
//     cout<<"enter first string ";
//     cin>>str;
//     cout<<"enter second string";
//     cin>>ztr;
//     vector<string>s1,s2;
//     sub1(str,s1,"",0);
//     sub2(ztr,s2,"",0);
//     bool flag=false;
//     string max="";
//     for(int i=s1.size()-1;i>=0;i--){
//         for(int j=s2.size()-1;j>=0;j--){
//             if(s1[i]==s2[j]){
//                 if(max=="") max=s1[i];
//                 else{
//                     if(s1[i].size()>max.size()) max=s1[i];
//                 }
//                 flag=true;
//             }
//         }
//     }
//     if(flag==true) cout<<max;
//     else cout<<"no common substring in both string";
// }


// 2
// #include<iostream>
// #include<vector>
// #include<algorithm>
// using namespace std;
// void dub(vector<int>&original,vector<int>ans,int idx,bool flag){
//     if(idx==original.size()){
//         for(int i=0;i<ans.size();i++){
//             cout<<ans[i]<<" ";
//         }
//         cout<<endl;
//         return;
//     }
//     if(idx==original.size()-1){
//         dub(original,ans,idx+1,true);
//         if(flag==true){
//         ans.push_back(original[idx]);
//         dub(original,ans,idx+1,true);
//         }
//         return;
//     }
//     int n=original[idx];
//     int m=original[idx+1];
//     if(n==m){
//         dub(original,ans,idx+1,false);
//         if(flag==true){
//             ans.push_back(original[idx]);
//             dub(original,ans,idx+1,true);
//         }
//     }
//     else{
//         dub(original,ans,idx+1,true);
//         if(flag==true){
//             ans.push_back(original[idx]);
//             dub(original,ans,idx+1,true);
//         }
//     }
// }
// int main(){
//     int n;
//     cout<<"enter the sizes of array";
//     cin>>n;
//     vector<int>v(n);
//     cout<<"enter a element in array";
//     for(int i=0;i<n;i++){
//         cin>>v[i];
//     }
//     sort(v.begin(),v.end());
//     vector<int>ans;
//     dub(v,ans,0,true);
// }


#include<iostream>
#include<vector>
using namespace std;
void bin(int n,vector<int>&ans){
    if(n==0) return;
    bin(n/2,ans);
    ans.push_back(n%2);
}
int main(){
    int n;
    cout<<"enter the number";
    cin>>n;
    vector<int>s;
    bin(n,s);
    for(int i=0;i<s.size();i++){
        cout<<s[i];
    }
}