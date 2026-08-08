#include<iostream>
using namespace std;
int main(){
   float x,y,z;
   cout<<"enter the number";
   cin>>x;
   y=(int)x;
   if (y<0) y=y-1;
   z= x-y;
   cout<<"the fractional part of given number is"<<z;
}
