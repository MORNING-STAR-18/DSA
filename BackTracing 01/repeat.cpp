// #include<iostream>
// #include<unordered_set>
// using namespace std;
// void per(string &s, int idx){
//     if(idx >= s.size()){
//         cout << s << endl;
//         return;
//     }
//     unordered_set<char> vis;
//     for(int i = idx; i < s.size(); i ++){
//         if(vis.count(s[i])) continue;
//         vis.insert(s[i]);
//         swap(s[i], s[idx]);
//         per(s, idx + 1);
//         swap(s[i], s[idx]);
//     }
// }
// int main(){
//     string s = "ABC";
//     per(s, 0);
// }


#include<iostream>
#include<vector>
using namespace std;
vector<vector<char>> grid;
bool can_place(int row, int col){
    for(int i = row - 1; i >= 0; i--){
        if(grid[i][col] == 'Q') return false;
    }
    for(int i = row - 1, j = col - 1; i >= 0 && j >= 0; i--,j--){
        if(grid[i][j] == 'Q') return false;
    }
    for(int i = row - 1, j = col - 1; i >= 0 && j >= 0; i --, j++){
        if(grid[i][j] == 'Q') return false;
    }
    return true;
}
void f(int row, int n){
    if(row >= n){
        for(int i = 0; i < grid.size())
    }
}
int main (){

}