// #include<iostream>
// using namespace std;
// int fact(int n){
//     if(n==1||n==0){
//         return 1;
//     }
//     return n*fact(n-1);
// }
// int main(){
//     int n;
//     cout<<"enter the number";
//     cin>>n;
//     cout<<"factorial of "<<n<<" is "<<fact(n);
// }

// #include<iostream>
// using namespace std;
// int  print(int n){
//     if(n==0) return 0;
//     cout<<n<<endl;;
//     print(n-1);
// }
// int main(){
//     int n;
//     cout<<"enter the number ";
//     cin>>n;
//     print(n);
// }

// #include<iostream>
// using namespace std;
// void print(int n,int i){
//     if(n==0) return;
//     cout<<i<<endl;
//     print(n-1,i+1);
// }
// int main(){
//     int n;
//     cout<<"enter the number ";
//     cin>>n;
//     int i=1;
//     print(n,i);
// }

// #include<iostream>
// using namespace std;
// void print(int n){
//     if(n==0) return;
//     print(n-1);
//     cout<<n<<endl;
// }
// int main(){
//     int n;
//     cout<<"enter the number";
//     cin>>n;
//     print(n);
// }

// #include<iostream>
// using namespace std;
// int sum(int n){
//     if(n==0) return 0;
//     return n+=sum(n-1);
// }
// int main(){
//     int n;
//     cout<<"enter the number";
//     cin>>n;
//     cout<<sum(n);
// }

// #include<iostream>
// using namespace std;
// int sum(int n){
//     int i=n;
//     if(n==0) return 0;
//     return i+=sum(n-1);
// }
// int main(){
//     int n;
//     cout<<"enter the number ";
//     cin>>n;
//     int i=n;
//     cout<<sum(n);
// }

// #include<iostream>
// using namespace std;
// int power(int a,int b){
//     if(b==0) return 1;
//     return a*=power(a,b-1);
// }
// int main(){
//     int a,b;
//     cout<<"enter base";
//     cin>>a;
//     cout<<"enter exponent";
//     cin>>b;
//     cout<<a<<" to the power "<<b<< " is "<<power(a,b);
// }