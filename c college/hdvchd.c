// #include<stdio.h>
// int main(){
//     int n;
//     printf("enter size of array");
//     scanf("%d",&n);
//     int arr[n];
//     for(int i=0;i<n;i++){
//         scanf("%d",&arr[i]);
//     }
//     int y=0;
//     int x=1;
//     for(int i=n-1;i>=0;i--){
//         y+=arr[i]*x;
//         x*=2;
//     }
//     printf("%d",y);
// }

// #include<stdio.h>
// int main(){
//     int arr[6]={1,2,3,4,5};
//     for(int i=4;i>=0;i--){
//         int temp=arr[i];
//         arr[i]=arr[i+1];
//         arr[i+1]=temp;
//     }
//     for(int i=0;i<6;i++){
//         printf(" %d",arr[i]);
//     }
// }

// #include<stdio.h>
// #include<limits.h>
// int main(){
//     int n;
//     printf("declare the size of array");
//     scanf("%d",&n);
//     int arr[n];
//     for(int i=0;i<n;i++){
//         scanf("%d",&arr[i]);
//     }
//     int max=INT_MIN;
//     for(int i=0;i<n;i++){
//         if(arr[i]>max) max=arr[i];
//     }
//     int smax=INT_MIN;
//     for(int i=0;i<n;i++){
//         if(arr[i]>smax&&arr[i]!=max) smax=arr[i];
//     }
//     printf("second maximum in array is:%d",smax);
//     int min=INT_MAX;
//     for(int i=0;i<n;i++){
//         if(arr[i]<min) min=arr[i];
//     }
//     int smin=INT_MAX;
//     for(int i=0;i<n;i++){
//         if(arr[i]<smin&&arr[i]!=min) smin=arr[i];
//     }
//     printf("second minimum in array is:%d",smin);
// }


// #include<stdio.h>
// int main(){
//     int n;
//     printf("enter size of array");
//     scanf("%d",&n);
//     int arr[n];
//     printf("enter numbers in array\n");
//     for(int i=0;i<n;i++){
//         scanf("%d",&arr[i]);
//     }
//     for(int i=0;i<n-1;i++){
//         for(int j=i+1;j<n;j++){
//             if(arr[i]>arr[j]){
//                 int temp=arr[i];
//                 arr[i]=arr[j];
//                 arr[j]=temp;
//             }
//         }
//     }
//     for(int i=0;i<n;i++){
//         printf(" %d",arr[i]);
//     }
// }

// #include<stdio.h>
// int main(){
//     int arr[100]={1,2,3,4,5};
//     int x;
//     printf("enter a number you want to add in array");
//     scanf("%d",&x);
//     int y;
//     printf("enter the position you want to add number");
//     scanf("%d",&y);
//     for(int i=4;i>=y-1;i--){
//     int temp=arr[i];
//     arr[i]=arr[i+1];
//     arr[i+1]=temp;
//     // arr[i+1]=arr[i];
//     }
//     arr[y-1]=x;
//     for(int i=0;i<=5;i++){
//         printf(" %d",arr[i]);
//     }
// }

// #include<stdio.h>
// int main(){
//     int n;
//     printf("declare the size of array");
//     scanf("%d",&n);
//     int arr[n];
//     for(int i=0;i<n;i++){
//         scanf("%d",&arr[i]);
//     }
//     int x;
//     printf("enter the position you wnt to deleat");
//     scanf("%d",&x);
//     int y=x;
//     for(int i=x-1;i<n-1;i++){
//         arr[i]=arr[i+1];
//     }
//     n--;
//     for(int i=0;i<n;i++){
//         printf(" %d",arr[i]);
//     }
// }

// #include<stdio.h>
// int main(){
//     int n,m,a,b;
//     printf("declare the size of row of first array");
//     scanf("%d",&m);
//     printf("declare the size of coloums of first array");
//     scanf("%d",&n);
//     int arr1[m][n];
//     printf("declare the size of row of second array");
//     scanf("%d",&a);
//     printf("declare the size of coloums of second array");
//     scanf("%d",&b);
//     int arr2[a][b];
//     if(n==a){
//         printf("enter element in 1st array");
//         for(int i=0;i<m;i++){
//             for(int j=0;j<n;j++){
//                 scanf("%d",&arr1[i][j]);
//             }
//         }
//         printf("enter element in 2nd  array");
//         for(int i=0;i<a;i++){
//             for(int j=0;j<b;j++){
//                 scanf("%d",&arr2[i][j]);
//             }
//         }
//         int arr3[m][b];
//         for(int i=0;i<m;i++){
//                 for(int j=0;j<b;j++){
//                     arr3[i][j]=0;
//                     for(int k=0;k<n;k++){
//                     arr3[i][j]+=arr1[i][k]*arr2[k][j];
//                 }
//             }
//         }
//         for(int i=0;i<m;i++){
//             for(int j=0;j<b;j++){
//                 printf(" %d",arr3[i][j]);
//             }
//             printf("\n");
//         }
//     }
// }

// #include<stdio.h>
// #include<string.h>
// int main(){
//     int x=0;
//     char str[100]="sumit";
//     for(int i=0;str[i]!='\0';i++){
//         if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u'){
//             x++;
//         }
//     }
//     printf("%d",x);
// }

// #include<stdio.h>
// int main(){
//     int n,m,i,j;
//     char a[100]="sumit";
//     char b[100]=" kumar";
//     for( i=0;a[i]!='\0';i++);
//     for(j=0;b[j]!='\0';j++){
//         a[i+j]=b[j];
//     }
//     // a[i+j]='\0';
//     for(int i=0;a[i]!='\0';i++){
//         printf("%c",a[i]);
//     }
// }

// #include<stdio.h>
// #include<string.h>
// int main(){
//     // int n;
//     // printf("declare the size of string");
//     // scanf("%d",&n);
//     // char a[n];
//     // for(int i=0;i<n;i++){
//     //     scanf("%d",&a[i]);
//     // }
//     char a[100]="suumt";
//     int max=0;
//     for(int i=0;a[i]!='\0';i++){
//         int count=1;
//         for(int j=i+1;a[j]!='\0';j++){
//             if(a[j]==a[i]){
//                 count++;
//             }
//         }
//         if(count>max) max=count;
//     }
//     for(int i=0;a[i]!='\0';i++){
//         int count=1;
//         for(int j=i+1;a[j]!='\0';j++){
//             if(a[j]==a[i]) count++;
//         }
//         if(count==max){
//             printf(" %c %d",a[i],max);
//         }
//     }
// }

// #include<stdio.h>
// int main(){
//     int n,m;
//     printf("declare the size of row");
//     scanf("%d",&m);
//     printf("declare the size of coloums");
//     scanf("%d",&n);
//     int arr[m][n];
//     for(int i=0;i<m;i++){
//         for(int j=0;j<n;j++){
//             scanf("%d",&arr[i][j]);
//         }
//     }
//     int minr=0,minc=0;
//     int maxr=m-1,maxc=n-1;
//     while(minr<=maxr&&minc<=maxc){
//         for(int j=minc;j<=maxc;j++){
//             printf(" %d",arr[minr][j]);
//         }
//         printf("\0");
//         minr++;
//         if(minr>maxr||minc>maxc){
//             break;
//         }
    
//     for(int i=minr;i<=maxr;i++){
//         printf(" %d",arr[i][maxc]);
//     }
//     printf("\0");
//     maxc--;
//     if(minr>maxr||minc>maxc){
//             break;
//         }
//     for(int j=maxc;j>=minc;j--){
//         printf(" %d",arr[maxr][j]);
//     }
//     printf("\0");
//     maxr--;
//     if(minr>maxr||minc>maxc){
//             break;
//         }
//     for(int i=maxr;i>=minr;i--){
//         printf(" %d",arr[i][minc]);
//     }
//     printf("\0");
//     minc++;
// }
// }

// #include<stdio.h>
// int main(){
//     int n,m;
//     printf("enter the rows");
//     scanf("%d",&m);
//     printf("enter the coloums");
//     scanf("%d",&n);
//     int arr[m][n];
//     for(int i=0;i<m;i++){
//         for(int j=0;j<n;j++){
//             scanf("%d",&arr[i][j]);
//         }
//     }
//      for(int i=0;i<m;i++){
//         for(int j=0;j<n;j++){
//             printf(" %d",arr[i][j]);
//         }
//         printf("\n");
//     }
//     printf("\n");
//     for(int j=0;j<n;j++){
//         for(int i=0;i<n;i++){
//             printf(" %d",arr[i][j]);
//         }
//         printf("\n");
//     }
// }

// #include<stdio.h>
// int main(){
//     int n;
//     printf("decalre the size of array");
//     scanf("%d",&n);
//     int arr[n][n];
//     for(int i=0;i<n;i++){
//         for(int j=0;j<n;j++){
//             scanf("%d",&arr[i][j]);
//         }
//     }
//     for(int i=0;i<n;i++){
//         for(int j=i+1;j<n;j++){
//             int temp=arr[i][j];
//             arr[i][j]=arr[j][i];
//             arr[j][i]=temp;
//         }
//     }
//     for(int i=0;i<n;i++){
//         for(int j=0;j<n;j++){
//             printf(" %d",arr[i][j]);
//         }
//         printf("\n");
//     }
// }

// #include<stdio.h>
// int main(){
//     int n,m;
//     printf("enter the rows");
//     scanf("%d",&m);
//     printf("enter the coloums");
//     scanf("%d",&n);
//     int arr[m][n];
//     for(int i=0;i<m;i++){
//         for(int j=0;j<n;j++){
//             scanf("%d",&arr[i][j]);
//         }
//     }
//      for(int i=0;i<m;i++){
//         for(int j=0;j<n;j++){
//             printf(" %d",arr[i][j]);
//         }
//         printf("\n");
//     }
//     printf("\n");
//     int t[n][m];
//     for(int i=0;i<n;i++){
//         for(int j=0;j<m;j++){
//             t[i][j]=arr[j][i];
//         }
//     }
//     for(int i=0;i<n;i++){
//         for(int j=0;j<m;j++){
//             printf(" %d",t[i][j]);
//         }
//         printf("\n");
//     }
// }

// #include<stdio.h>
// int main(){
//     int n;
//     printf("decalre the rows /coloums");
//     scanf("%d",&n);
//     int arr[n][n];
//     printf("enter the element\n");
//     for(int i=0;i<n;i++){
//         for(int j=0;j<n;j++){
//             scanf("%d",&arr[i][j]);
//         }
//     }
//     for(int i=0;i<n;i++){
//         for(int j=0;j<n;j++){
//             printf(" %d",arr[i][j]);
//         }
//         printf("\n");
//     }
//     printf("\n");
//     int t[n][n];
//     for(int i=0;i<n;i++){
//         for(int j=0;j<n;j++){
//             t[i][j]=arr[j][i];
//         }
//     }
//     for(int k=0;k<n/2;k++){
//         for(int i=n-k-1;i>n-k-2;i--){
//             for(int j=0;j<n;j++){
//                 int temp=t[k][j];
//                 t[k][j]=t[i][j];
//                 t[i][j]=temp;
//             }
//         }
//     }
//     for(int i=0;i<n;i++){
//         for(int j=0;j<n;j++){
//             printf(" %d",t[i][j]);
//         }
//         printf("\n");
//     }
// }

// #include<stdio.h>
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
//     int n,r;
//     printf("enter the value of n");
//     scanf("%d",&n);
//     for(int i=0;i<=n;i++){
//         for(int j=0;j<=i;j++){
//             printf(" %d",combination(i,j));
//         }
//         printf("\n");
//     }
// }

// #include<stdio.h>
//     void startraingle(int x){
//         for(int i=1;i<=x;i++){
//             for(int j=1;j<=i;j++){
//                 printf("*");
//             }
//             printf("\n");
//         }
//     }
//     int main(){
//         startraingle(3);
//         startraingle(4);
//     }


// #include<stdio.h>
// int main(){
//     int n,binary[32],i=0;
//    printf("enter decimal no");
//    scanf("%d",&n);
//    int temp=n;
//    while(temp>0){
//     binary[i]=temp%2;
//     temp/=2;
//     i++;
//    }
//    printf("binary no is");
//    for(int j=i-1;j>=0;j--){
//     printf(" %d",binary[j]);
//    }
// }

// #include<stdio.h>
// int main(){
//     char op;
//     float a,b,result;
//     printf("enter operator");
//     scanf("%c",&op);
//     printf("enter fisrt number");
//     scanf("%f",&a);
//     printf("enter second number");
//     scanf("%f",&b);
//     switch(op){
//         case'+':
//         result=a+b;
//         printf("%f",result);
//         break;
//         case'-':
//         result=a-b;
//         printf("%f",result);
//         break;
//         case'*':
//         result=a*b;
//         printf("%f",result);
//         break;
//         case'/':
//         if(b!=0){
//             result=a/b;
//             printf("%f",result);
//             break;
//         }
//         else {
//         printf("error");
//         break;
//         }
//         default:
//         printf("invalid operation");
//     }
// }

// #include<stdio.h>
// int main(){
//     int n;
//     printf("decalre the size of rows");
//     scanf("%d",&n);
//     int arr[n][n];
//     for(int i=0;i<n;i++){
//         for(int j=0;j<n;j++){
//             scanf("%d",&arr[i][j]);
//         }
//     }
//     for(int i=0;i<n;i++){
//         for(int j=0;j<n;j++){
//             printf(" %d",arr[i][j]);
//         }
//         printf("\n");
//     }
//     printf("\n");
//    for(int i=0;i<n;i++){
//         for(int j=i+1;j<n;j++){
//             int temp=arr[i][j];
//             arr[i][j]=arr[j][i];
//             arr[j][i]=temp;
//         }
//    }
//    for(int i=0;i<n;i++){
//         for(int j=0;j<n;j++){
//             printf(" %d",arr[i][j]);
//         }
//         printf("\n");
//     }
//     printf("\n");
//     for(int k=0;k<n;k++){
//         int i=0;
//         int j=n-1;
//         while(i<j){
//             int temp=arr[k][i];
//             arr[k][i]=arr[k][j];
//             arr[k][j]=temp;
//             i++;
//             j--;
//         }
//     }
//     for(int i=0;i<n;i++){
//         for(int j=0;j<n;j++){
//             printf(" %d",arr[i][j]);
//         }
//         printf("\n");
//     }

// }

// #include<stdio.h>
// int main(){
//     int n;
//     printf("enter no of rows");
//     scanf("%d",&n);
//     int z=0;
//     for(int i=1;i<=2*n-1;i++){
//         if(i<=n){
//         printf("%c",i+64);
//         z++;
//         }
//         else{  
//             printf("%c",z+63);
//             z--; 
//         }
//     }
//     printf("\n");
//     int x=n-1;
//     for(int i=1;i<=x;i++){
//         int y=0;
//         for(int j=1;j<=x-i+1;j++){
//             printf("%c",j+64);
//             y++;
//         }
//         for(int k=1;k<=2*i-1;k++){
//             printf(" ");
//         }
//         for(int q=y;q>=1;q--){
//             printf("%c",q+64);
//         }
//         printf("\n");
//     }
// }

// #include<stdio.h>
// int main(){
//     int n,m,a,b;
//     printf("enter number of rows of 1 matrix");
//     scanf("%d",&m);
//     printf("enter number of coloums of 1 matrix");
//     scanf("%d",&n);
//     printf("enter number of rows of 2 matrix");
//     scanf("%d",&a);
//     printf("enter number of coloums of 2nd matrix");
//     scanf("%d",&b);
//     if(m==a){
//     int arr1[m][n];
//     int arr2[a][b];
//     for(int i=0;i<m;i++){
//         for (int j=0;j<n;j++){
//             scanf("%d",&arr1[i][j]);
//         }
//     }
//     for(int i=0;i<a;i++){
//         for(int j=0;j<b;j++){
//             scanf("%d",&arr2[i][j]);
//         }
//     }
//     int arr3[m][b];
//     for(int i=0;i<m;i++){
//         for(int j=0;j<b;j++){
//             arr3[i][j]=0;
//             for(int k=0;k<n;k++){
//                 arr3[i][j]+=arr1[i][k]*arr2[k][j];
//             }
//         }
//     }
//     for(int i=0;i<m;i++){
//         for(int j=0;j<b;j++){
//             printf(" %d",arr3[i][j]);
//         }
//         printf("\n");
//     }
// }
// }

// #include<stdio.h>
// int main(){
//     int a=1,b=0,n;
//     printf("enter number of term");
//     scanf("%d",&n);
//     for(int i=1;i<=n;i++){
//         b+=a;
//         int temp=a;
//         a=b;
//         b=temp;
//         printf(" %d",b);
//     }
// }

// #include<stdio.h>
// int main(){
//     char ch;
//     printf("enter a alphabet");
//     scanf("%c",&ch);
//     switch(ch){
//         case('a'):
//         case('e'):
//         case('i'):
//         case('o'):
//         case('u'):
//         case('A'):
//         case('E'):
//         case('I'):
//         case('O'):
//         case('U'):
//         printf("it is a vovel");
//         break;
//         default:
//         printf("it is a constant");
//     }
// }

// #include<stdio.h>
// int main(){
//     int a,b,hcf,lcm,x,y;
//     printf("enter two number");
//     scanf("%d %d",&a,&b);
//     x=a;
//     y=b;
//     while(y!=0){
//        int temp=y;
//         y=x%y;
//         x=temp;
//     }
//     hcf=x;
//     lcm=(a*b)/hcf;
//     printf("hcf is %d\n",hcf);
//     printf("lcm is:%d",lcm);
// }

// #include<stdio.h>
// int main(){
//     char str[100];
//     printf("enter a string");
//     gets(str);
//     printf("%s",str);
// }

// #include<stdio.h>
// int main(){
//     int i;
//     char ch[100]="sumit";
//     char b[100];
//     for( i=0;ch[i]!='\0';i++){
//         b[i]=ch[i];
//     }
//     // b[i]='\0';
//     for(int i=0;ch[i]!='\0';i++){
//         printf("%c",b[i]);
//     }
// }

// #include<stdio.h>
// int main(){
//     int n;
//     printf("enter a number");
//     scanf("%d",&n);
//     int revrese=0;
//     int lastno=0; 
//     while(n>0){
//         revrese*=10;
//         lastno=n%10;
//         revrese+=lastno;
//         n/=10;
//     }
//     printf("%d",revrese);
// }

#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n;
    
}