// #include<iostream>
// using namespace std;
// void hanoi(int n,char a,char b,char c){
//     if(n==0) return;
//     hanoi(n-1,a,c,b);
//     cout<<a<<"->"<<c<<endl;
//     hanoi(n-1,b,a,c);
// }
// int main(){
//     int n;
//     cout<<"enter no of rings";
//     cin>>n;
//     hanoi(n,'a','b','c');
// }

// #include<iostream>
// using namespace std;
// void print(int arr[],int n){
//     if(n==-1) return;
//     print(arr,n-1);
//     cout<<arr[n]<<" ";
// }
// int main(){
//     int n;
//     cout<<"enter size of array";
//     cin>>n;
//     int arr[n];
//     cout<<"enter element in array";
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
//     print(arr,n-1);
// }

// #include<iostream>
// using namespace std;
// void maxm(int arr[],int n,int max){
//     if(n==0){
//         cout<<max;
//         return;
//     }
//     if(max<arr[n-1]) max=arr[n-1];
//     maxm(arr,n-1,max);
// }
// int main(){
//     int n;
//     cout <<"enter size of array";
//     cin>>n;
//     int arr[n];
//     cout<<"enter a element in array";
//     cout<<endl;
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
//     int max=arr[0];
//     maxm(arr,n,max);
// }

// #include<iostream>
// using namespace std;
// void removechar(string str,string s){
//     if(str==""){
//         cout<<s;
//         return;
//     }
//     char ch=str[0];
//     if(ch=='a')removechar(str.substr(1),s);
//     else removechar(str.substr(1),s+ch);
// }
// int main(){
//     string str;
//     cout<<"enter a string";
//     cin>>str;
//     removechar(str,"");
// }

// #include<iostream>
// #include<vector>
// using namespace std;
// void subset(vector<int>v,int arr[],int n,int idx){
//     if(idx==n){
//         for(int i=0;i<v.size();i++){
//             cout<<v[i]<<" ";
//         }
//         cout<<endl;
//         return ;
//     }
//     subset(v,arr,n,idx+1);
//     v.push_back(arr[idx]);
//     subset(v,arr,n,idx+1);
// }
// int main(){
//     int n;
//     cout<<"enter size of array";
//     cin>>n;
//     int arr[n];
//     cout<<"enter element in array";
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
//     vector<int>v;
//     subset(v,arr,n,0);
// }

// #include<iostream>
// using namespace std;
// void subset(string original,string ans){
//     if(original==""){
//         cout<<ans;
//         cout<<endl;
//         return;
//     }
//     char ch=original[0];
//         subset(original.substr(1),ans+ch);
//         subset(original.substr(1),ans);
// }
// void subset2(string original,string ans,int idx){
//     if(idx==original.size()){
//         cout<<ans<<endl;
//         return;
//     }
//     char ch=original[idx];
//     subset2(original,ans+ch,idx+1);
//     subset2(original,ans,idx+1);
// }
// int main(){
//     string s;
//     cout<<"enter a string ";
//     cin>>s;
//     // subset(s,"");
//     subset2(s,"",0);
// }

// #include<iostream>
// #include<vector>
// using namespace std;
// void subseq(vector<int>ans,int arr[],int n,int idx,int k){
//     if(idx==n){
//         if(ans.size()==k){
//             for(int i=0;i<ans.size();i++){
//                 cout<<ans[i];
//             }
//             cout<<endl;
//         }
//         return;
//     }
//     subseq(ans,arr,n,idx+1,k);
//     ans.push_back(arr[idx]);
//     subseq(ans,arr,n,idx+1,k);
// }
// int main(){
//     int n,k;
//     cout<<"enter size of array";
//     cin>>n;
//     int arr[n];
//     cout<<"enter a element in array";
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
//     cout<<"enter size of subsequence";
//     cin>>k;
//     vector<int>v;
//     subseq(v,arr,n,0,k);
// }

// #include<iostream>
// #include<vector>
// using namespace std;
// void store(vector<string>&v,string original,string ans){
//     if(original==""){
//         v.push_back(ans);
//         return;
//     }
//     char ch=original[0];
//     store(v,original.substr(1),ans+ch);
//     store(v,original.substr(1),ans);
// }
// int main(){
//     string str;
//     cout<<"enter a string";
//     cin>>str;
//     vector<string>v;
//     store(v,str,"");
//     for(string ele:v){
//         cout<<ele<<endl;
//     }
// }

// #include<iostream>
// using namespace std;
// substr(string original,string ans){
//     if(original==""){
//         cout<<ans<<endl;
//         return;
//     }
//     char ch=original
//     substr()
// }
// int main(){
//     string str;
//     cout<<"enter a string ";
//     cin>>str;
//     substr(str,"");
// }

// #include<iostream>
// using namespace std;
// void prem(string str,string ans){
//     if(str==""){
//         cout<<ans<<endl;
//         return ;
//     }
//     for(int i=0;i<str.size();i++){
//         char ch=str[i];
//         string left=str.substr(0,i);
//         string right=str.substr(i+1);
//         prem(left+right,ans+ch);
//     }
// }
// int main(){
//     string str;
//     cout<<"enter a string";
//     cin>>str;
//     prem(str,"");
// }

// #include<iostream>
// using namespace std;
// void dub(string str,string ans,bool flag){
//     if(str==""){
//         cout<<ans<<endl;
//         return;
//     }
//     char ch=str[0];
//     if(str.size()==1){
//         dub(str.substr(1),ans+ch,true);
//         dub(str.substr(1),ans,true);
//         return ;
//     }
//     char dh=str[1];
//     if(ch==dh){
//         if(flag==true) dub(str.substr(1),ans+ch,true);
//         dub(str.substr(1),ans,false);
//     }
//     else{
//         if(flag==true)dub(str.substr(1),ans+ch,true);
//         dub(str.substr(1),ans,true);
//     }
// }
// int main(){
//     string str;
//     cout<<"enter a stirng ";
//     cin>>str;
//     dub(str,"",true);
// }

