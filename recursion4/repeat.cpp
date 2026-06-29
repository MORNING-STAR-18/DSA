// #include<iostream>
// #include<vector>
// using namespace std;
// void sub(int arr[],vector<int>v,int n,int idx){
//     if(idx==n){
//         for(int i=0;i<v.size();i++){
//             cout<<v[i];
//         }
//         cout<<endl;
//         return ;
//     }
//     sub(arr,v,n,idx+1);
//     if(v.size()==0||arr[idx-1]==v[v.size()-1]){
//         v.push_back(arr[idx]);
//         sub(arr,v,n,idx+1);
//     }   
// }
// int main(){
//     int n;
//     cout<<"enter size of array";
//     cin>>n;
//     int arr[n];
//     cout<<"enter element in array";
//     cout<<endl;
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
//     // for(int i=0;i<n;i++){
//     //     for(int j=i;j<n;j++){
//     //         for(int k=i;k<=j;k++){
//     //             cout<<arr[k];
//     //         }
//     //         cout<<endl;
//     //     }
//     // }
//     vector<int>v;
//     sub(arr,v,n,0);
// }

// #include<iostream>
// using namespace std;
// void pali(string str,int i,int n){
//     if(i>=n){
//         cout<<"palindrome";
//         return;
//     }
//     if(str[i]==str[n]){
//         pali(str,i+1,n-1);
//     }
//     else{
//         cout<<"not a palindrome";
//         return;
//     }
// }
// int main(){
//     string str;
//     cout<<"enter  a string ";
//     cin>>str;
//     int n=str.size();
//     pali(str,0,n-1);
// }

// #include<iostream>
// using  namespace std;
// int hcf(int a,int b){
//     for(int i=min(a,b);i>=2;i--){
//         if(a%i==0&&b%i==0) return i;
//     }
//     return 1;
// }
// int gcd(int a,int b){
//     if(b%a==0) return a;
//     return gcd(b%a,a);
// }
// int main(){
//     int a,b;
//     cout<<"enter two number you want to find the hcf";
//     cin>>a>>b;
//     // cout<<hcf(a,b);
//     cout<<gcd(a,b);
// }

// #include<iostream>
// using namespace std;
// void binary(string str,int n){
//     if(str.size()==n){
//         cout<<str<<endl;
//         return ;
//     }
//     binary(str+'0',n);
//     if(str.size()==0||str[str.size()-1]=='0') binary(str+'1',n);
// }
// int main(){
//     int n;
//     cout<<"enter the length of binary string";
//     cin>>n;
//     binary("",n);
// }

// #include<iostream>
// #include<vector>
// using namespace std;
// void comb(vector<int>&v,vector<int>ans,int target,int idx){
//     if(target==0){
//         for(int i=0;i<ans.size();i++){
//             cout<<ans[i]<<" ";
//         }
//         cout<<endl;
//         return;
//     }
//     if(target<0) return;
//     for(int i=idx;i<v.size();i++){
//         ans.push_back(v[i]);
//         comb(v,ans,target-v[i],i);
//         ans.pop_back();
//     }
// }
// int main(){
//     int n;
//     cout<<"enter the size of array";
//     cin>>n;
//     vector<int>v(n);
//     cout<<"enter the elemnt in array"<<endl;
//     for(int i=0;i<n;i++){
//         cin>>v[i];
//     }
//     int x;
//     cout<<"enter a target";
//     cin>>x;
//     vector<int>ans;
//     comb(v,ans,x,0);
// }

// #include<iostream>
// using namespace std;
// void pare(string ans,int n,int open,int close){
//     if(close==n){
//         cout<<ans<<endl;
//         return;
//     }
//     if(open<n) pare(ans+'(',n,open+1,close);
//     if(open>close) pare(ans+')',n,open,+close+1);
// }
// int main(){
//     int n;
//     cout<<"enter no of parathesis";
//     cin>>n;
//     pare("",n,0,0);
// }

// #include<iostream>
// using namespace std;
// string count(int n){
//     if(n==1) return "1";
//     string str=count(n-1);
//     int freq=1;
//     string ztr="";
//     char ch=str[0];
//     for(int i=1;i<=str.size();i++){
//         char dh=str[i];
//         if(ch==dh) freq++;
//         else{
//             ztr+=to_string(freq)+ch;
//             ch=dh;
//             freq=1;
//         }
//     }
//     return ztr;
// }
// int main(){
//     int n;
//     cout<<"enter a number you want to count and say";
//     cin>>n;
//     cout<<count(n);
// }

// #include<iostream>
// using namespace std;
// void perm(string str,int k,string ans){
//     if(str.size()==0){
//         cout<<ans;
//         return;
//     }
//     int fact=1;
//     for(int i=2;i<=str.size()-1;i++){
//         fact*=i;
//     }
//     int idx=k/fact;
//     if(k%fact==0)idx--;
//     char ch=str[idx];
//     string left=str.substr(0,idx);
//     string right=str.substr(idx+1);
//     int q;
//     if(k%fact==0) q=fact;
//     else q=k%fact;
//     perm(left+right,q,ans+ch);

// }
// int main(){
//     int n;
//     cout<<"enter no of element in string ";
//     cin>>n;
//     string str;
//     for(int i=1;i<=n;i++){
//         str+=to_string(i);
//     }
//     int k;
//     cout<<"enter the no of subset";
//     cin>>k;
//     perm(str,k,"");
// }

// #include<iostream>
// using namespace std;
// int gar(int n,int k){
//     if(n==1) return 0;
//     if(k%2==0){
//         int prevans=gar(n-1,k/2);
//         if(prevans==0) return 1;
//         else return 0;
//     }
//     else{
//         return gar(n-1,k/2+1);
//     }
// }
// int main(){
//     int n,k;
//     cout<<"enter the row ";
//     cin>>n;
//     cout<<"enter the coloum";
//     cin>>k;
//     cout<<gar(n,k);
// }

#include<iostream>
using namespace std;
int gar(int n,int k){
    if(n==1) return 0;
    if(k%2==0){
        int prevans=gar(n-1,k/2);
        if(prevans==0) return 1;
        else return 0;
    }
    else{
        return gar(n-1,k/2);
    }
}
int main(){
    int n;
    cout<<"enter the no of rows";
    cin>>n;
    int k;
    cout<<"enter the no of coloums";
    cin>>k;
    cout<<gar(n,k);
}