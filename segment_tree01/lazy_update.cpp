#include<iostream>
#include<vector>
using namespace std;
vector<int> st;
vector<int> lazy;
void build_tree(int arr[], int i, int lo, int hi){
    if(lo == hi){
        st[i] = arr[lo];
        return;
    }
    int mid = lo + (hi - lo) / 2;
    build_tree(arr, 2 * i + 1, lo, mid);
    build_tree(arr, 2 * i + 2, mid + 1, hi);
    st[i] = st[2 * i + 1] +  st[2 * i + 2];
}
int get_sum(int i, int lo, int hi, int l, int r){
    if(lazy[i] != 0){
        int rangesum = hi - lo + 1;
        st[i] += rangesum * lazy[i];
        if(lo != hi){
            lazy[2 * i + 1] += lazy[i];
            lazy[2 * i + 2] += lazy[i];
        }
        lazy[i] = 0;
    }
    if(l > hi || r < lo) return 0;
    if(lo >= l && hi <= r) return st[i];
    int mid = lo + (hi - lo) / 2;
    int leftsum = get_sum(2 * i + 1, lo, mid, l, r);
    int rightsum = get_sum(2 * i + 2, mid + 1, hi, l, r);
    return leftsum + rightsum;
}
void update_range(int i, int lo, int hi, int l, int r, int val){
    if(lazy[i] != 0){
        int rangesum = hi - lo + 1;
        st[i] += rangesum * lazy[i];
        if(lo != hi){
            lazy[2 * i + 1] += lazy[i];
            lazy[2 * i + 2] += lazy[i];
        }
        lazy[i] = 0;
    }
    if(l > hi || r < lo) return;
    if(lo >= l && hi <= r){
        int range_sum = hi - lo + 1;
        st[i] += range_sum * val;
        if(lo != hi){
            lazy[2 * i + 1] += val;
            lazy[2 * i + 2] += val;
        }
        return;
    }
    int mid = lo + (hi - lo) / 2;
    update_range(2 * i + 1, lo, mid, l, r, val);
    update_range(2 * i + 2, mid + 1, hi, l, r, val);
    st[i] = st[2 * i + 1] +  st[2 * i + 2];
}
int main(){
    int arr[] = {1, 4, 2, 8, 4, 9, 3};
    int n = sizeof(arr) / 4;
    st.resize(4 * n);
    lazy.resize(4 * n, 0);
    build_tree(arr, 0, 0, n - 1);
    int l, r;
    cout << get_sum(0, 0, n - 1, 1, 3) << endl;
    update_range(0, 0, n - 1, 2, 5, 10);
    cout << get_sum(0, 0, n - 1, 1, 3) << endl;
}