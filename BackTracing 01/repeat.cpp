#include<iostream>
#include<unordered_set>
using namespace std;
void per(string s, int idx){
    if(idx >= s.size()){
        cout << s << endl;
        return;
    }
    unordered_set<char> vis;
    for(int i = idx; i < s.size(); i ++){
        if(vis.count(s[i])) continue;
        vis.insert(s[i]);
        swap(s[i], s[idx]);
        per(s, idx + 1);
        swap(s[i], s[idx]);
    }
}
int main(){

}