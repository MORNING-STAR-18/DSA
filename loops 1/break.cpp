 #include<iostream>
 using namespace std;
     int main(){
        int n;
        cout<<"enter a number";
        cin>>n;
        if(n%1==0 &&n%n==0){
            cout<<"number is prime";
        }
        else{
            cout<<"not a prime";
        }
    }