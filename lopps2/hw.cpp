// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"enter a number";
//     cin>>n;
//     int lastno;
//     int sum=0;
//     while(n>0){
//         if(n%2==0){
//         lastno=n%10;
//         sum+=lastno;
//         n/=10;
//         }
//         else{
//             n/=10;
//         }

//     }
//     cout<<sum;
// }

// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"enter a number";
//     cin>>n;
//     int a= n;
//     int lastno=0;
//     int reverseno =0;
//     while(a>0){
//         reverseno =reverseno*10;
//         lastno=a%10;
//         reverseno=reverseno+lastno;
//         a/=10;
//     }
//     cout<<"sum"<<n+reverseno;
// }
 
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"enter a number";
//     cin>>n;
//     int product=1;
//         for(int i=1;i<=n;i++){
//             product*=i;
//         cout<<product<<endl;
//     }
// }

// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"enter a number";
//     cin>>n;
//     int a=1,b=0,sum;
//     for(int i=1;i<=n;i++){
//         sum=a+b;
//         a=b;
//         b=sum;
//         cout<<sum<<endl;
//     }
// }

// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     int  sum,lastno=0;
//    for(int i=1;i<=500;i++){
//     n=i;
//     sum=0;
//      while (n>0){
//         lastno=n%10;
//         sum+=lastno*lastno*lastno;
//         n/=10;}
//         if(sum==i){
//             cout<<sum<<endl;
//         }
//     }
// }
   

