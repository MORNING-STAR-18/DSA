#include<iostream>
#include<vector>
using namespace std;
int main(){
    // vector<int> v(5);//intial size =5,each elemnet has value 0;
    // cout<<v.size()<<endl;
    // cout<<v.capacity()<<endl;
    // cout<<v[4];
    vector<int> v(5,7);//initial size =5,each element has value 7;
    cout<<v.size()<<endl;
    cout<<v.capacity()<<endl;
    cout<<v[4];
}