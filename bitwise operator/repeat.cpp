// #include<iostream>
// #include<algorithm>
// using namespace std;
// string decimal_to_string(int n){
//     string ans="";
//     while(n>0){
//         if(n%2==0) ans+='0';
//         else ans+='1';
//         n/=2;
//     }
//     reverse(ans.begin(),ans.end());
//     return ans;
    
// }
// int main(){
//     int n;
//     cout<<"enter a number ";
//     cin>>n;
//     cout<<decimal_to_string(n);
// }

// #include<iostream>
// using namespace std;
// int binary_to_string(string s){
//     int result=0;
//     int n=s.size();
//     for(int i=n-1;i>=0;i--){
//         char ch=s[i];
//         int num=s[i]-'0';
//         result+=num*(1<<(n-i-1));
//     }
//     return result;
// }
// int main(){
//     string s;
//     cout<<"enter a binary string";
//     cin>>s;
//     cout<<binary_to_string(s);
// }

// #include<iostream>
// using namespace std;
// void set_bit(int n){
//     cout<<__builtin_popcount(n);
// }
// void set_bit2(int n){
//     int count=0;
//     while(n>0){
//         count++;
//         n=n&(n-1);
//     }
//     cout<<count;
// }
// int main(){
//     int n;
//     cout<<"enter a number";
//     cin>>n;
//     set_bit(n);
// }

// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"enter a number ";
//     cin>>n;
//     int x;
//     while(n>0){
//         x=n;
//         n=n&(n-1);
//     }
//     cout<<x;
// }

#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter a number";
    cin>>n;
    int x=n;
    n=n|(n>>1);
    n=n|(n>>2);
    n=n|(n>>4);
    n=n|(n>>8);
    n=n|(n>>16);
    n=(n+1)/2;
    n^=x;
    cout<<n;
}