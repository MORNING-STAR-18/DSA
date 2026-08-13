#include<iostream>
#include<vector>
using namespace std;
int ans = 0;
bool can_we_go(int n, int i, int j, vector<vector<int>> &grid){
    if(i >= 0 && j >= 0 && i <= n - 1 && j <= n - 1 && grid[i][j] == 0) return true;
    return false;
}
void ftd(vector<vector<int>> &grid, int i, int j, int n){
    if(i == n - 1 && j == n - 1) {
        ans += 1;
        return;
    }
    grid[i][j] = 2;
    if(can_we_go(n, i, j - 1, grid)){
        ftd(grid, i, j - 1, n);
    }
    if(can_we_go(n, i - 1, j, grid)){
        ftd(grid, i - 1, j, n);
    }
    if(can_we_go(n, i, j + 1, grid)){
        ftd(grid, i, j + 1, n);
    }
    if(can_we_go(n, i + 1, j, grid)){
        ftd(grid,i + 1, j, n);
    }
    grid[i][j] = 0;
}
int rat_in_maze(vector<vector<int>> &grid, int n){
    ans = 0;
    ftd(grid, n, 0, 0);
    return ans;
}
int main(){
    vector<vector<int>> grid(7, vector<int> (7));
    for(int i = 0; i < 7; i++){
        for(int j = 0; j < 7; j++){
            cin >> grid[i][j];
        }
    }
    cout << rat_in_maze(grid, 7);
}