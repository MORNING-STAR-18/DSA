// #include<iostream>
// #include<stack>
// using namespace std;
// bool isbalanced(string s){
//     if(s.size()%2!=0) return false;
//     stack<char>ch;
//     for(int i=0;i<s.size();i++){
//         if(s[i]=='(')ch.push(s[i]);
//         else{
//             if(ch.size()==0) return false;
//             else ch.pop();
//         }
//     }
//     if(ch.size()==0) return true;
//     else return false;
// }
// int main(){
//     string s;
//     cout<<"enter a string";
//     cin>>s;
//     cout<<isbalanced(s);
// }

// #include<iostream>
// #include<stack>
// using namespace std;
// string dublicates(string &s){
//     stack<char>st;
//     for(int i=s.size()-1;i>=0;i--){
//         if(st.size()==0) st.push(s[i]);
//         if(s[i]!=st.top()) st.push(s[i]);
//     }
//     s="";
//     while(st.size()>0){
//         s+=st.top();
//         st.pop();
//     }
//     return s;
// }
// int main(){
//     string s;
//     cout<<"enter a string";
//     cin>>s;
//     cout<<dublicates(s);
// }

// #include<iostream>
// #include<stack>
// using namespace std;
// int main(){
//     int n;
//     cout<<"enter the size of aray";
//     cin>>n;
//     int arr[n];
//     cout<<"enter a element in array";
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
//     stack<int>st;
//     int nge[n];
//     nge[n-1]=-1;
//     st.push(arr[n-1]);
//     for(int i=n-2;i>=0;i--){
//         while(st.size()>0&&st.top()<=arr[i]){
//             st.pop();
//         }
//         if(st.size()==0) nge[i]=-1;
//         else nge[i]=st.top();
//         st.push(arr[i]);
//     }
//     for(int i=0;i<n;i++){
//         cout<<nge[i]<<" ";
//     }
// }

// #include<iostream>
// #include<stack>
// using namespace std;
// int main(){
//     int n;
//     cout<<"enter the size of array";
//     cin>>n;
//     int arr[n];
//     cout<<"enter the element in array";
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
//     int pge[n];
//     pge[0]=-1;
//     stack<int>st;
//     st.push(arr[0]);
//     for(int i=1;i<n;i++){
//         while(st.size()>0&&st.top()<=arr[i]) st.pop();
//         if(st.size()==0) pge[i]=-1;
//         else pge[i]=st.top();
//         st.push(arr[i]);
//     }
//     for(int i=0;i<n;i++){
//         cout<<pge[i]<<" ";
//     }
// }

#include<iostream>
#include<stack>
using namespace std;
int main(){
    int arr[]={100,80,60,70,60,75,85};
    int n=sizeof(arr)/sizeof(arr[0]);
    stack<int>st;
    int pge[n];
    pge[0]=1;
    st.push(0);
    for(int i=1;i<n;i++){
        while(st.size()>0&&arr[st.top()]<=arr[i]) st.pop();
        if(st.size()==0) pge[i]=-1;
        else pge[i]=st.top();
        pge[i]=i-pge[i];
        st.push(i);
    }
    for(int i=0;i<n;i++){
        cout<<pge[i]<<" ";
    }
}