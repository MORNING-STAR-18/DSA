#include<iostream>
#include<vector>
using namespace std;
vector<vector<string>> grid;
vector<vector<string>> result;
bool can_place(int row, int col, int n){
    for(int i = row - 1; i >= 0; i--){
        if(grid[i][col] == "Q") return false;
    }
    for(int i = row - 1, j = col - 1; i >= 0 && j >= 0; i--, j--){
        if(grid[i][j] == "Q") return false;
    }
    for(int i = row - 1, j = col + 1; i >= 0 && j < n; i --, j ++){
        if(grid[i][j] == "Q") return false;
    }
    return true;
}
void f(int row, int n){
    if(row == n){
        vector<string> temp;
        for(int i = 0; i < n; i++){
            string res = "";
            for(int j = 0; j < n; j++){
                res += grid[i][j];
            }
            temp.push_back(res);
        }
        result.push_back(temp);
        return;
    }
    for(int col = 0; col < n; col ++){
        if(can_place(row, col, n)){
            grid[row][col] = "Q";
            f(row + 1, n);
            grid[row][col] = ".";
        }
    }
}
vector<vector<string>> nqueen(int n){
    grid.clear();
    result.clear();
    grid.resize(n, vector<string> (n, "."));
    f(0, n);
    return result;

}
int main(){
    nqueen(9);
}