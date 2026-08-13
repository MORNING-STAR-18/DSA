#include<iostream>
using namespace std;
void per(string &str, int i){
    if(i == str.size() - 1){
        cout << str << endl;
        return;
    }
    for(int idx = i; idx < str.size(); idx ++){
        swap(str[idx],str[i]);
        per(str, i + 1);
        swap(str[idx], str[i]);
    }
}
int main(){
    string str = "abc";
    per(str, 0);
}