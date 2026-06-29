// #include<iostream>
// #include<math.h>
// using namespace std;
// bool isprime(int n){
//     for(int i=2;i<=sqrt(n);i++){
//         if(n%i==0) return false;
//     }
//     return true;
// }
// void printfactor(int n){
//     for(int i=1;i<=sqrt(n);i++){
//         if(n%i==0){
//             cout<<i<<" ";
//             if(i*i!=n) cout<<n/i<<" ";
//         }
//     }
// }
// int main(){
//     int n;
//     cout<<"enter a number";
//     cin>>n;
//     // cout<<isprime(n);
//     printfactor(n);
// }

#include<iostream>
#include<math.h>
using namespace std;
bool isprime(int n){
    for(int i=2;i<=sqrt(n);i++){
        if(n%i==0) return false;
    }
    return true;
}
int main(){
    int n;
    cout<<"enter the size of array";
    cin>>n;
    int  arr[n][n];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>arr[i][j];
        }
    }
    int i=0;
    int j=0;
    int m=0;
    while(i<n){
        bool flag=false;
        int x=arr[i][j];
        for(int i=0;i<=sqrt(x);i++){
            if(n%i==0){
                flag=true;
                break;
            }
        }
        if(flag==false){
            m=max(m,x);
        }
        if(j!=n-1+i) j=n-1+i;
        else{
            i++;
            j=i;
        }

    }

}