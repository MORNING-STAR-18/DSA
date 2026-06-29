#include<iostream>
using namespace std;
int set_bit(int n){
    return __builtin_popcount(n);
}
int set_bit2(int n){
    int count=0;
    while(n>0){
        count++;
        n=(n&(n-1));
    }
    return count;

}
int main(){
    int n;
    cout<<"enter the number you want to count no of set bit in it";
    cin>>n;
    cout<<set_bit(n)<<endl;
    cout<<set_bit2(n);
}