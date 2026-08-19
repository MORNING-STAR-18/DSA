#include<iostream>
#include<vector>
using namespace std;
vector<int> st;
void build_tree(int arr[], int i, int lo, int hi){
    if(lo == hi){
        st[i] = arr[lo];
        return;
    }
    int mid = lo + (hi - lo) / 2;
    build_tree(arr, 2 * i + 1, lo, mid);
    build_tree(arr, 2 * i + 2, mid + 1, hi);
    st[i] = max(st[2 * i + 1], st[2 * i + 2]);
}
int get_max(int i, int lo, int hi, int &l, int &r){
    if(l > hi || r < lo) return -1e9;
    if(lo >= l && hi <= r) return st[i];
    int mid = lo + (hi - lo) / 2;
    int leftmax = get_max(2 * i + 1, lo, mid, l, r);
    int rightmax = get_max(2 * i + 2, mid + 1, hi, l, r);
    return max(leftmax, rightmax);
}
int main(){
    int arr[] = {1, 4, 2, 8, 4, 9, 3};
    int n = sizeof(arr) / 4;
    st.resize(4 * n);
    build_tree(arr, 0, 0, n - 1);
    int l, r;
    cout << "enter the range" << endl;
    cin >> l >> r;
    cout << get_max(0, 0, n - 1, l, r) << endl;
}