#include<iostream>
#include<vector>
using namespace std;
bool is_it_safe(vector<vector<int>> &grid, int i, int j, int n){
    return i >= 0 && j >= 0 && i < n && j < n && grid[i][j] == -1;
}
void display(vector<vector<int>> &grid, int n){
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cout << grid[i][j] << " ";
        }
        cout << endl;
    }
}
void f(vector<vector<int> > &grid, int i, int j, int n, int count){
    if(count == n * n - 1){
        grid[i][j] = count;
        display(grid, n);
        cout<< endl << endl;
        grid[i][j] = -1;
        return ;
    }
    if(is_it_safe(grid, i - 2, j + 1, n)){
        grid[i][j] = count;
        f(grid, i - 2, j + 1, n, count + 1);
        grid[i - 2][j + 1] = -1;
    }
    if(is_it_safe(grid, i - 2, j - 1, n)){
        grid[i][j] = count;
        f(grid, i - 2, j - 1, n, count + 1);
        grid[i - 2][j - 1] = -1;
    }
    if(is_it_safe(grid, i + 2, j + 1, n)){
        grid[i][j] = count;
        f(grid, i + 2, j + 1, n, count + 1);
        grid[i + 2][j + 1] = -1;
    }
    if(is_it_safe(grid, i + 2, j - 1, n)){
        grid[i][j] = count;
        f(grid, i + 2, j - 1, n, count + 1);
        grid[i + 2][j - 1] = -1;
    }
    if(is_it_safe(grid, i - 1, j + 2, n)){
        grid[i][j] = count;
        f(grid, i - 1, j + 2, n, count + 1);
        grid[i - 1][j + 2] = -1;
    }
    if(is_it_safe(grid, i - 1, j - 2, n)){
        grid[i][j] = count;
        f(grid, i - 1, j - 2, n, count + 1);
        grid[i - 1][j - 2] = -1;
    }
    if(is_it_safe(grid, i + 1, j - 2, n)){
        grid[i][j] = count;
        f(grid, i + 1, j - 2, n, count + 1);
        grid[i + 1][j - 2] = -1;
    }
    if(is_it_safe(grid, i + 1, j + 2, n)){
        grid[i][j] = count;
        f(grid, i + 1, j + 2, n, count + 1);
        grid[i + 1][j + 2] = -1;
    }
}
void knights_tour(int n, int i, int j){
    vector<vector<int>> grid(n , vector<int> (n, -1));
    f(grid, i, j, n, 0);
}
int main(){
    int n;
    cin >> n;
    knights_tour(n, 0, 0);
    return 0;
}