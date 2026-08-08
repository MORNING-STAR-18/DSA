// #include<iostream>
// using namespace std;
// int binary_to_decimal(string &s){
//     int n=s.size();
//     int result=0;
//     for(int i=n-1;i>=0;i--){
//         char ch=s[i];
//         int num=ch-'0';
//         result+=num*(1<<(n-i-1));
//     }
//     return result;

// }
// int main(){
//     string s;
//     cout<<"enter a binary string";
//     cin>>s;
//     cout<<binary_to_decimal(s);
// }
#include<iostream>
using namespace std;
int main(){
    string s="abcd";
    cout<<int(s[0]);
}