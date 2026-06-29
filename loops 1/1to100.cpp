// #include<iostream>
// using namespace std;
// int main(){
//     for(int i=1;i<=100;i++){
//         cout<<i<<endl;
//     }
// }
#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
    string s="iudfuhg";
    sort(s.begin(),s.end());
    cout<<s;
}