// #include<iostream>
// #include<vector>
// using namespace std;
// int main(){
//     vector<vector<int>>v(3,vector<int>(4,10));
//     for(int i=0;i<3;i++){
//         for(int j=0;j<4;j++){
//             cout<<v[i][j]<<" " ;
//         }
//         cout<<endl;
//     }
//     cout<<endl;
//     cout<<v.size();
//     cout<<endl;
//     cout<<v[0].size();
// }

// #include<iostream>
// using namespace std;
// void change(int arr[3][3]){
//     arr[0][0]=10;
// }
// int main(){
//     int arr[3][3]={{1,2,3},{4,5,6},{7,8,9}};
//     cout<<arr[0][0]<<endl;;
//     change(arr);
//     cout<<arr[0][0];
// }

// #include<iostream>
// #include<vector>
// using namespace std;
// void change(vector<vector<int>>&v4){
//     v4[0][0]=10;
// }
// int main(){
//     vector<int>v1;
//     v1.push_back(4);
//     v1.push_back(5);
//     vector<int>v2;
//     v2.push_back(6);
//     v2.push_back(7);
//     v2.push_back(8);
//     v2.push_back(9);
//     vector<int>v3;
//     v3.push_back(10);
//     v3.push_back(11);
//     v3.push_back(12);
//     v3.push_back(13);
//     v3.push_back(14);
//     vector<vector<int>>v4;
//     v4.push_back(v1);
//     v4.push_back(v2);
//     v4.push_back(v3);
//     cout<<v4[0][0]<<endl;;
//     change(v4);
//     cout<<v4[0][0];
// }

// #include<iostream>
// #include<vector>
// using namespace std;
// int main(){
//     int m,n;
//     cout<<"enter no of rows";
//     cin>>m;
//     vector<vector<int>>v;
//     for(int i=0;i<m;i++){
//         vector<int>a(i+1);
//         v.push_back(a);
//     }
//     for(int i=0;i<m;i++){
//         for(int j=0;j<=i;j++){
//             if(j==0||j==i) v[i][j]=1;
//             else{
//                 v[i][j]=v[i-1][j-1]+v[i-1][j];
//             }
//         }
//     }
//     for(int i=0;i<m;i++){
//         for(int j=0;j<=i;j++){
//             cout<<v[i][j]<<" ";
//         }
//         cout<<endl;
//     }
// }

// #include<iostream>
// #include<vector>
// using namespace std;
// int main(){
//     int m,n,sum=0;
//     cout<<"enter no of rows";
//     cin>>m;
//     cout<<"enter no of coloums";
//     cin>>n;
//     vector<vector<int>>v(m,vector<int>(n));
//     for(int i=0;i<m;i++){
//         for(int j=0;j<n;j++){
//             cin>>v[i][j];
//         }
//     }
//     for(int i=0;i<m;i++){
//         for(int j=0;j<n;j++){
//             cout<<v[i][j]<<" ";
//         }
//         cout<<endl;
//     }
//     cout<<endl;
//     for(int i=0;i<m;i++){
//         if(v[i][0]==0){
//             for(int j=0;j<n;j++){
//                 if(v[i][j]==0) v[i][j]=1;
//                 else v[i][j]=0;
//             }
//         }
//     }
//     for(int j=0;j<n;j++){
//         int noz=0;
//         int noo=0;
//         for(int i=0;i<m;i++){
//             if(v[i][j]==0) noz++;
//             else noo++;
//         }
//         if(noz>noo){
//             for(int i=0;i<m;i++){
//                 if(v[i][j]==0) v[i][j]=1;
//                 else v[i][j]=0;
//             }
//         }
//     }
//     for(int i=0;i<m;i++){
//         int x=1;
//         for(int j=n-1;j>=0;j--){
//             sum+=v[i][j]*x;
//             x*=2;
//         }
//     }
//     cout<<sum;
//     // return 0;
// }

// #include<iostream>
// #include<vector>
// using namespace std;
// int main(){
//     int m,n;
//     cout<<"enter number of rows";
//     cin>>m;
//     cout<<"enter number of coloums";
//     cin>>n;
//     vector<vector<int>>v(m,vector<int>(n));
//     for(int i=0;i<m;i++){
//         for(int j=0;j<n;j++){
//             cin>>v[i][j];
//         }
//     }
//     int x;
//     cout<<"enter a number you want to serach";
//     cin>>x;
//     int i=0;
//     int j=n-1;
//     bool flag=false;
//     while(i<m&&j>=0){
//         if(v[i][j]==x){
//             flag=true;
//             break;
//         }
//         else if(v[i][j]>x){
//             j--;
//         }
//         else{
//             i++;
//         }
//     }
//     if(flag==true) cout<<"element present";
//         else cout<<"not present";
// }