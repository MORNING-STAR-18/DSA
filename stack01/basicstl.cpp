#include<iostream>
#include<stack>
using namespace std;
int main(){
    stack<int>st;
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    st.push(50);
    //printing in revewrse order->empting the stack
    // while(st.size()!=0){
    //     cout<<st.top()<<endl;
    //     st.pop();
    // }
    
    //we will use extra the stAck its also print in reverse order
    // stack<int>temp;
    // while(st.size()>0){
    //     cout<<st.top()<<" ";
    //     temp.push(st.top());
    //     st.pop();
    // }
    // //putting the element back in original stack
    // while(temp.size()>0){
    //     st.push(temp.top());
    //     temp.pop();
    // }
    // cout<<endl<<st.top();

    //print in original order
    stack<int>temp;
    while(st.size()>0){
        temp.push(st.top());
        st.pop();
    }
    while(temp.size()>0){
        cout<<temp.top()<<" ";//change
        st.push(temp.top());
        temp.pop();
    }
    cout<<endl<<st.top();

}