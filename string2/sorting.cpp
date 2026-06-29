// #include<iostream>
// #include<algorithm>
// using namespace std;
// int main(){
//     string s;
//     getline(cin,s);
//     sort(s.begin(),s.end());//acii value ke order mai sort kar ke de dega
//     cout<<s;
// }
#include<iostream>
#include<sstream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    string str="sumit rajput";
    stringstream ss(str);
    string temp;
    
    while(ss>>temp){
        cout<<temp<<endl;
    }
}