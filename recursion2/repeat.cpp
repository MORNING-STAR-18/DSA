// #include<iostream>
// using namespace std;
// int fibbo(int n){
//     if(n==1||n==2) return 1;
//     return fibbo(n-1)+fibbo(n-2);
// }
// int main(){
//     int n;
//     cout<<"enter the size";
//     cin>>n;
//     cout<<fibbo(n);
// }

// #include<iostream>
// using namespace std;
// int pow(int a,int b){
//     if(b==1) return a;
//     int ans;
//     ans=pow(a,b/2);
//     if(b%2==0) return ans*ans;
//     else return ans*ans*a;
// }
// int main(){
//     int a,b;
//     cout<<"enter base";
//     cin>>a;
//     cout<<"enter exponent";
//     cin>>b;
//     cout<<pow(a,b);
// }

// #include<iostream>
// using namespace std;
// int stair(int n){
//     if(n==2)return 2;
//     if(n==1)return 1;
//     return stair(n-1)+stair(n-2);
// }
// int main(){
//     int n;
//     cout<<"enter the number of stair";
//     cin>>n;
//     cout<<stair(n);
// }

// #include<iostream>
// using namespace std;
// int printpath(int sr,int sc,int er,int ec){
//     if(sc>ec||sr>er) return 0;
//     if(sr==er&&sc==ec) return 1;
//     int rightways=printpath(sr,sc+1,er,ec);
//     int downways=printpath(sr+1,sc,er,ec);
//     return rightways+downways;
// }
// void path(int sr,int sc,int er,int ec,string s){
//     if(sc>ec||sr>er) return;
//     if(sr==er&&sc==ec){
//         cout<<s<<endl;
//         return;
//     }
//     path(sr,sc+1,er,ec,s+'r');
//     path(sr+1,sc,er,ec,s+'d');
// }
// int printpath2(int sr,int sc){
//     if(sc<0||sr<0) return 0;
//     if(sr==0&&sc==0) return 1;
//     int rightways=printpath2(sr,sc-1);
//     int downways=printpath2(sr-1,sc);
//     return rightways+downways;
// }
// int main(){
//     int m,n;
//     cout<<"enter no of rows";
//     cin>>m;
//     cout<<"enter no of coloums";
//     cin>>n;
//     //cout<<printpath(0,0,m-1,n-1);
//     // path(0,0,m-1,n-1,"");
//     cout<<printpath2(m-1,n-1);
// }

// #include<iostream>
// using namespace std;
// void pip(int n){
//     if(n==0) return;
//     cout<<"pre "<<n<<endl;
//     pip(n-1);
//     cout<<"in "<<n<<endl;
//     pip(n-1);
//     cout<<"post "<<n<<endl;
// }
// int main(){
//     int n;
//     cout<<"enter a number";
//     cin>>n;
//     pip(3);
// }
