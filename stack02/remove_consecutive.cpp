#include<iostream>
#include<stack>
using namespace std;
string consecutive(string& s){
    stack<char>st;
    st.push(s[s.size()-1]);
    for(int i=s.size()-2;i>=0;i--){
        if(s[i]!=st.top()) st.push(s[i]);
    }
    s="";
    while(st.size()>0){
        s+=st.top();
        st.pop();
    }
    return s;
}
int main(){
    string s="aaabbcddaabffg";
    cout<<consecutive(s);
}