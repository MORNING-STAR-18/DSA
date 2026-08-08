#include<iostream>
#include<queue>
#include<stack>
using namespace std;
int main(){
    queue<int>q;
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    q.push(50);
    int k;
    cout<<"enter the number of element reverse from queue";
    cin>>k;
    stack<int>st;
    int i=0;
    while(i!=k){
        st.push(q.front());
        q.pop();
        i++;
    }
    while(st.size()>0){
        q.push(st.top());
        st.pop();
    }
    int n=q.size();
    k=n-k;
    while(k!=0){
        q.push(q.front());
        q.pop();
        k--;
    }
    for(int i=0;i<n;i++){
        cout<<q.front()<<" ";
        q.push(q.front());
        q.pop();
    }
}