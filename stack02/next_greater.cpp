#include<iostream>
#include<stack>
using namespace std;
int main(){
    int arr[]={3,1,2,7,4,6,2,3};
    int n=sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    stack<int>st;
    int nge[n];
    nge[n-1] =-1;
    // using stack pop ans push
    st.push(arr[n-1]);
    for(int i=n-1;i>=0;i--){
        //pop all the element smmaller than arr
        while(st.size()>0&&st.top()<=arr[i]){
            st.pop();
        }
        //mark the ans in nge array
        if(st.size()==0) nge[i]=-1;
        else nge[i]=st.top();
        //push the arr[i]
        st.push(arr[i]);
    }
    for(int i=0;i<n;i++){
        cout<<nge[i]<<" ";
    }
    cout<<endl;
}