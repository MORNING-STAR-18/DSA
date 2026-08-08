// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"enter a no you want to find max of power of two";
//     cin>>n;
//     int temp;
//     while(n>0){
//         temp=n;
//         n=n&(n-1);
//     }
//     cout<<temp;
// }

#include<iostream>
using namespace std;
int maxpower(int n){
    n=n|(n>>1);
    n=n|(n>>2);
    n=n|(n>>4);
    n=n|(n>>8);
    n=n|(n>>16);
    return (n+1)/2;//covertin all digit of binary in  1 in every place and then add with number 1 add divide by 2
}
int main(){
    int n;
    cout<<"enter a number you want to find max power";
    cin>>n;
    cout<<maxpower(n);
}