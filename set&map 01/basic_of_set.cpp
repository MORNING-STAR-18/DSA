#include<iostream>
#include<unordered_set>
using namespace std;
int main(){
    unordered_set<int>s;
    s.insert(1);
    s.insert(2);
    s.insert(3);
    s.insert(4);
    s.insert(5);
    s.insert(1);
    s.erase(2);
    int target=4;
    //s.find()-> it seraches in the set, and if 
    //it is not find then it return the last element 
    if(s.find(target)!=s.end()){//means target exist
        cout<<"exists"<<endl;
    } 
    else cout<<"target doesnt exist"<<endl;
    // s.erase(2);
    cout<<s.size()<<endl;
    //for each loop
    for(int ele:s){ //menas for ele in s
        cout<<ele<<" ";
    }
}