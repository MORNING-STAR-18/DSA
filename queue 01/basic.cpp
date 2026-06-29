#include<iostream>
#include<queue>
#include<stack>
using namespace std;
void display(queue<int>&q){
    int n=q.size();
    for(int i=0;i<n;i++){
        int x=q.front();
        cout<<x<<" ";
        q.pop();
        q.push(x);
    }
    cout<<endl;
}
void reverse(queue<int>&q){
    stack<int>st;
    int n=q.size();
    for(int i=0;i<n;i++){
        st.push(q.front());
        q.pop();
    }
    for(int i=0;i<n;i++){
        q.push(st.top());
        st.pop();
    }
}
void removeateven(queue<int>&q){
    int n=q.size();
    for(int i=0;i<n;i++){
        if(i%2==0) q.pop();
        else{
            int x=q.front();
            q.pop();
            q.push(x);
        }
    }
}
int main(){
    queue<int>q;
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    q.push(50);
    // cout<<q.front();
    // cout<<endl<<q.size();
    q.pop();
    // cout<<endl<<q.size();
    // cout<<endl<<q.front();
    // cout<<endl<<q.back();
    display(q);
    // // reverse(q);
    // removeateven(q);
    // display(q);
}