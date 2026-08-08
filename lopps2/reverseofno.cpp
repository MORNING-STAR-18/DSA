 #include<iostream>
 using namespace std;
     int main(){
        int n;
        cout<<"enter a number";
        cin>>n;
        int lastno=0;
        int reverseno=0;
        while(n>0){
           reverseno=reverseno*10;
           lastno=n%10;
           reverseno+=lastno;
           n/=10;
        }
        cout<<reverseno;
    }