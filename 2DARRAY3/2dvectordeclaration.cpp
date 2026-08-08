#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<vector<int>>v(3,vector<int>(5,0));
    for(int i=0;i<3;i++){
        for(int j=0;j<5;j++){
            cout<<v[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
    cout<<v.size()<<endl;//for rows
    cout<<v[0].size();//for coloums
}
// #include<iostream>
// #include<vector>
// using namespace std;
// int main(){
//     vector<vector<char>>v(5,vector<char>(6,0));
//     int x=65;
//     for(int i=0;i<5;i++){
//         for(int j=0;j<6;j++){
//             if(i==4&&j==2) break;
//             v[i][j]=char(x++);
//         }
//     }
//     for(int i=0;i<5;i++){
//         for(int j=0;j<6;j++){
//             cout<<v[i][j];
//         }
//         cout<<endl;
//     }
// }