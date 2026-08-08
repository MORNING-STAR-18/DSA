#include<iostream>
#include<stack>
using namespace std;
int main(){
    int arr[]={100,80,60,70,60,75,85};
    int n=sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    stack<int>st;
    int pge[n];
    pge[0] =-1;
    // using stack pop ans push
    st.push(0);
    for(int i=0;i<n;i++){
        //pop all the element smmaller than arr
        while(st.size()>0 && arr[st.top()]<=arr[i]){
            st.pop();
        }
        //mark the ans in nge array
        if(st.size()==0) pge[i]=-1;
        else pge[i]=st.top();
        pge[i]=i-pge[i];
        //push the arr[i]
        st.push(i);
    }
    for(int i=0;i<n;i++){
        cout<<pge[i]<<" ";
    }
    cout<<endl;
}