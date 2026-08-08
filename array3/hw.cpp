// 1
// #include<iostream>
// #include<vector>
// using namespace std;
// int main(){
//     vector<int>v;
//     int n,count=0;
//     cout<<"declare the size of array";
//     cin>>n;
//     cout<<"enter the number"<<endl;
//     for(int i=0;i<n;i++){
//         int q;
//         cin>>q;
//         v.push_back(q);
//     }
//     int x;
//     cout<<"enter the number you want to find sum";
//     cin>>x;
//     for(int i=0;i<v.size()-2;i++){
//         for(int j=i+1;j<v.size()-1;j++){
//             for(int k=j+1;k<v.size();k++){
//                 if(v[i]+v[j]+v[k]==x){
//                 count++;
//                 cout<<i<<" "<<j<<" "<<k<<endl;
//                 }             
//             }
//         }
//     }
//     cout<<count;
// }

// 2
// #include<iostream>
// #include<vector>
// using namespace std;
// int main(){
//     vector<int>v;
//     int n;
//     cout<<"declare the size of array";
//     cin>>n;
//     cout<<"enter element in array";
//     for(int i=0;i<n;i++){
//         int q;
//         cin>>q;
//         v.push_back(q);
//     }
//     int max=v[0];
//     for(int i=1;i<n;i++){
//         if(max<v[i]) max=v[i];
//     }
//     int fact=1;
//     for(int i=1;i<=max;i++){
//         fact*=i;
//     }
//     cout<<fact;
// }


// #include<iostream>
// #include<vector>
// using namespace std;
// int main(){
//     vector<int>v;
//     int n;
//     cout<<"declare the size of array";
//     cin>>n;
//     cout<<"enter the number"<<endl;
//     for(int i=0;i<=n-1;i++){
//         int q;
//         cin>>q;
//         v.push_back(q);
//     }
//     int x;
//     for(int i=0;i<v.size();i++){
//         int y=0;
//         for(int j=0;j<v.size();j++){
//         if(v[i]==v[j]&&i!=j){
//             // x=v[i];
//             // break;
//         }
//         else{
//             x=v[i];
//             y++;
//         if(y==n) {
//         cout<<x;
//         // break;
//         return 0;
//         } 
//     }       
//         } 
//     }
    
//     // cout<<x;
// }

// 3
// #include<iostream>
// #include<vector>
// using namespace std;
// int main(){
//     vector<int>v1;
//     vector<int>v2;
//     int n,m;
//     cout<<"declare the size of first array";
//     cin>>n;
//     cout<<"enter the number in first array"<<endl;
//     for(int i=0;i<n;i++){
//         int q;
//         cin>>q;
//         v2.push_back(q);
//     }
//     cout<<"declare the size of second array";
//     cin>>m;
//     cout<<"enter number in second array"<<endl;
//     for(int i=0;i<m;i++){
//         int k;cin>>k;
//         v2.push_back(k);
//     }
//     if(m<n) cout<<"not a subset";
//     for(int i=0;i<v1.size();i++){
//         for(int j=0;j<v2.size();j++){
//             if(v1[i]==v2[j]){
//                 break;
//             }
//         }
//         // cout<<"subset";
//     }
// }

// 4
// #include<iostream>
// #include<vector>
// using namespace std;
// int main(){
//     vector<int>v1;
//     vector<int>v2;
//     int n,m;
//     cout<<"decalre the size of array";
//     cin>>n;
//     cout<<"enter the number";
//     for(int i=0;i<n;i++){
//         int q;
//         cin>>q;
//         v1.push_back(q);
//     }
//     cout<<"decalre the size of array";
//     cin>>m;
//     cout<<"enter the number";
//     for(int i=0;i<m;i++){
//         int k;
//         cin>>k;
//         v2.push_back(k);
//     }
//     int a=0;
//     if(m>n){
//     for(int i=0;i<n;i++){
//         for(int j=0;j<m;j++){
//             if(v1[i]==v2[j]){
//                 a++;
//                 break;
//             }
//         }
//     }
//      if(a==v1.size()) cout<<"1st is subset of 2nd";
//      else cout<<"not a subest";
//     }
//     if(m<n){
//     for(int i=0;i<n;i++){
//         for(int j=0;j<m;j++){
//             if(v2[i]==v1[j]){
//                 a++;
//                 break;
//             }
//         }
//     }
//      if(a==v2.size()) cout<<"2nd is subset of first";
//      else cout<<"not a subest";
// }
// else{
// for(int i=0;i<n;i++){
//         for(int j=0;j<m;j++){
//             if(v2[i]==v1[j]){
//                 a++;
//                 break;
//             }
//         }
//     }
//     if(a==v2.size()) cout<<"both array is subest of each other";
//      else cout<<"not a subeset";
// }
// }