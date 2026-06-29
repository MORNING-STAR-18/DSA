// #include<iostream>
// using namespace std;
// void greeting(){
//     cout<<" hello world"<<endl;
//     cout<<"hello mc"<<endl;
// }
// int main(){
//     greeting();
//     greeting();
//     greeting();

// }

// #include<iostream>
// using namespace std;
// void startraingle(int x){
//     for(int i=1;i<=x;i++){
//         for(int j=1;j<=i;j++){
//             cout<<"*";
//         }
//         cout<<endl;
//     }

// }
// int main(){
//     startraingle(3);
//     startraingle(5);
//     startraingle(4);
// }

// #include<iostream>
// using namespace std;
// int sum(int x,int y){
//     return x+y;
// }
// int main(){
//     cout<<sum(65,74);
// }

// #include<iostream>
// using namespace std;
// int w(int x,int y){
//     int a;
//     if(x<y) a=x;
//     else a=y;
//     return a;
// }
// int main(){
//     int x,y;
//     cin>>x>>y;
//     cout<<w(x,y);

// }

// #include<iostream>
// using namespace std;
// int fact(int x){
//     int f=1;
//     for(int i=1;i<=x;i++){
//         f*=i;
//     }
//     return f;
// }
// int main(){
//     int n,r;
//     cout<<"enter value of n";
//     cin>>n;
//     cout<<"enter value of r";
//     cin>>r;
//     int nfact=fact(n);
//     int rfact=fact(r);
//     int nrfact=fact(n-r);
//     int ncr=nfact/(rfact*nrfact);
//     cout<<ncr;
// }

// #include<iostream>
// using namespace std;
// int fact(int x){
//     int f=1;
//     for(int i=1;i<=x;i++){
//         f*=i;
//     }
//     return f;
// }
// int combination(int n,int r){
//     int ncr=fact(n)/(fact(r)*fact(n-r));
//     return ncr;
// }
// int main(){
//     int n;
//     cin>>n;
//     for(int i=0;i<=n;i++){
//         for(int j=0;j<=i;j++){
//             cout<<combination(i,j)<<" ";
//         }
//         cout<<endl;
//     }
// }


