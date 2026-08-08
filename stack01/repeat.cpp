#include<iostream>
#include<stack>
using namespace std;
void pushatbottom(stack<int>&st,int val){
    stack<int>temp;
    while(st.size()>0){
        temp.push(st.top());
        st.pop();
    }
    st.push(val);
    while(temp.size()>0){
        st.push(temp.top());
        temp.pop();
    }
}

void pushatidx(stack<int>&st,int val,int idx){
    stack<int>temp;
    while(st.size()>idx){
        temp.push(st.top());
        st.pop();
    }
    st.push(val);
    while(temp.size()>0){
        st.push(temp.top());
        temp.pop();
    }
}
void displayrev(stack<int>&st){
    if(st.size()==0) return;
    int x=st.top(); 
    st.pop();
    displayrev(st);
    cout<<x<<" ";
    st.push(x);
}
void pushatbottomrec(stack<int>&st,int val){
    if(st.size()==0){
        st.push(val);
        return;
    }
    int x=st.top();
    st.pop();
    pushatbottomrec(st,val);
    st.push(x);
}
void rverse(stack<int>&st){
    if(st.size()==1) return;
    int x=st.top();
    st.pop();
    rverse(st);
    pushatbottomrec(st,x);

}

void display(stack<int>&st){
    stack<int>temp;
    while(st.size()>0){
        temp.push(st.top());
        st.pop();
    }
    while(temp.size()>0){
        cout<<temp.top()<<" ";
        st.push(temp.top());
        temp.pop();
    }
    cout<<endl;
}
int main(){
    stack<int>st;
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    st.push(50);
    display(st);
    // pushatbottom(st,100);
    // display(st);
    // pushatidx(st,200,2);
    // display(st);
    // stack<int>temp1;
    // stack<int>temp2;
    // while(st.size()>0){
    //     temp1.push(st.top());
    //     st.pop();
    // }
    // while(temp1.size()>0){
    //     temp2.push(temp1.top());
    //     temp1.pop();
    // }
    // while(temp2.size()>0){
    //     st.push(temp2.top());
    //     temp2.pop();
    // }
    // display(st);
    // pushatbottomrec(st,100);
    // displayrev(st);
    rverse(st);
    display(st);
}