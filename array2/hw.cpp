// 1
// #include<iostream>
// #include<vector>
// using namespace std;
// int main(){
//     vector<int>v;
//     int n;
//     cout<<"declare the size of vector";
//     cin>>n;
//     cout<<"enter the element";
//     for(int i=0;i<=n-1;i++){
//         int q;
//         cin>>q;
//         v.push_back(q);
//     }
//     int count=0,x;
//     cout<<"enter the number you find how many grater than this";
//     cin>>x;
//     for(int i=0;i<v.size();i++){
//         if(v[i]>x) count++;
//     }
//     cout<<"total number greater than given no is "<<count;
// }

// 2
// #include<iostream>
// #include<vector>
// #include<climits>
// using namespace std;
// int main(){
//     vector<int>v;
//     int n;
//     cout<<"declare the size of vector";
//     cin>>n;
//     cout<<"enter the number";
//     for(int i=0;i<=n-1;i++){
//         int q;
//         cin>>q;
//         v.push_back(q);
//     }
//     int max=INT_MIN;
//     for(int i=0;i<v.size();i++){
//         if(max<v[i]) max=v[i];
//         }
//     cout<<max<<endl;
//     int smax=INT_MIN;
//     for(int i=0;i<v.size();i++){
//         if(smax<v[i]&&v[i]!=max) smax=v[i];
//     }
//     cout<<smax<<endl;
//     int tmax=INT_MAX;
//     for(int i=0;i<v.size();i++){
//         if(tmax<v[i]&&v[i]!=smax,max) tmax=v[i];
//      }
//     cout<<tmax;
// }


// 3
// #include<iostream>
// #include<vector>
// #include<algorithm>
// using namespace std;
// int main(){
//     vector<int>v;
//     int n,x=0;
//     cout<<"declare the size of vector";
//     cin>>n;
//     cout<<"enter the number";
//     for(int i=0;i<=n-1;i++){
//         int q;
//         cin>>q;
//         v.push_back(q);
//     }
//     bool flag=false;
//     for(int i=0;i<v.size()-1;i++){
//         if(v[i]>v[i+1]){
//         flag=true;
//         break;
//         }
//     }
//     if(flag==true) cout<<"not sorted";
//     else  cout<<"sorted";
// }


// 4
// #include<iostream>
// #include<vector>
// using namespace std;
// int main(){
//     vector<int>v;
//     int n,a=0,b=0;
//     cout<<"decalre the size of array";
//     cin>>n;
//     cout<<"enter a number";
//     for(int i=0;i<=n-1;i++){
//         int q;
//         cin>>q;
//         v.push_back(q);
//     }
//     for(int i=0;i<v.size();i++){
//         if(i%2==0){
//             a=a+v[i];
//         }
//         else{
//             b=b+v[i];
//         }
//     }
//     int q=a-b;
//     cout<<q;
// }

// 6
#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>v;
    int n,x;
    cout<<"declare the size of vector";
    cin>>n;
    cout<<"enter the number";
    for(int i=0;i<=n-1;i++){
        int q;
        cin>>q;
        v.push_back(q);
    }
    for(int i=0;i<v.size();i++){
        for(int j=0;j<v.size();j++){
            if(v[i]==v[j]) {
                break;
            }
            else {
            cout<<v[i];
            break;
            }
        }
    }
}

























// 7
// #include<iostream>
// #include<vector>
// using namespace std;
// int main(){
//     vector<int>v;
//     int n;
//     cout<<"declare the size of array";
//     cin>>n;
//     cout<<"enter a number";
//     for(int i=0;i<n;i++){
//         int q;
//         cin>>q;
//         v.push_back(q);
//     }
//     bool flag=true;
//     for(int i=0;i<v.size();i++){
//         for(int j=0;j<v.size();j++){
//             if(i+j==v.size()-1&& v[i]!=v[j]){
//              flag=false;
//              break;
//         }
       
//     }
// }
//      if(flag==true) cout<<"palindrome";
//         else cout<<"not a palindrome";
// }
