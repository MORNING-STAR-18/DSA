// #include<iostream>
// using namespace std;
// int  odd(int a,int b){
//     if(a%2==0) a+=1;
//     if(b%2==0) b-=1;
//     if(a>=b+1) return 0;
//     return a+=odd(a+2,b);
// }
// int main(){
//     int a,b;
//     cout<<"enter the first number";
//     cin>>a;
//     cout<<"enter the last";
//     cin>>b;
//     cout<<odd(a,b);
// }


// 2
// #include<iostream>
// using namespace std;
// int stair(int n){
//     if(n==1) return 1;
//     if(n==2) return 2;
//     if(n==3) return 4;
//     return stair(n-1)+stair(n-2)+stair(n-3);
// }
// int main(){
//     int n;
//     cout<<"enter number of stair";
//     cin>>n;
//     cout<<stair(n);
// }

// 3
#include<iostream>
using namespace std;
int power(int n){
    if(n==1) return true;
    if(n%2==0){
        power(n/2);
    }
    else return false;
}
int main(){
    int n;
    cout<<"enter a number";
    cin>>n;
    cout<<power(n);
}