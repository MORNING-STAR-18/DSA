// #include<stdio.h>
// int main(){
//     int a,b,sum;
//     printf("enter 1st hours");
//     scanf("%d",&a);
//     printf("enter 2nd hours");
//     scanf("%d",&b);
//     sum=a+b;
//     printf("sum of given two hours%d",sum);
// }

// #include<stdio.h>
// int main(){
//     int a,b,c,sum,average;
//     printf("enter 1st no");
//     scanf("%d",&a);
//      printf("enter 2nd no");
//     scanf("%d",&b);
//      printf("enter 3rd no");
//     scanf("%d",&c);
//     sum=a+b+c;
//     average=sum/3;
//     printf("sum of given no%d",sum);
//     printf("\n");
//     printf("average of given no%d",average);
// }

// #include<stdio.h>
// int main(){
//     printf("%d",sizeof(int));
//     printf("\n");
//     printf("%d",sizeof(float));
//     printf("\n");
//     printf("%d",sizeof(char));
// }

// #include<stdio.h>
// int main(){
//     int temp,a,b;
//     printf("enter two no");
//     scanf("%d %d",&a,&b);
//     temp=a;
//     a=b;
//     b=temp;
//     printf("%d %d",a,b);
// }

// #include<stdio.h>
// int main(){
//     float n,m;
//     printf("enter ruppes");
//     scanf("%f",&n);
//     m=n*0.011;
// printf("dollar of given ruppes is %f",m);
// }

// #include<stdio.h>
// int main(){
//     float n,m;
//     printf("enter dollar");
//     scanf("%f",&n);
//     m=n*88.79;
//     printf("ruppess of given dollar %f",m);
// }

// #include<stdio.h>
// int main(){
//     float n,m;
//     printf("enter celsius");
//     scanf("%f",&n);
//     m=32+1.8*n;
//     printf("farenheight of given celsius is%f",m);
// }

// #include<stdio.h>
// int main(){
//     char ch;
//     printf("enter a charchetr");
//     scanf("%c",&ch);
//     printf("ascii value of %c is %d",ch,ch);
// }

// #include<stdio.h>
// int main(){
//     int n;
//     printf("enter value of n");
//     scanf("%d",&n);
//     for(int i=1;i<=n;i++){
//         printf("%d ",i);
//     }
// }

// #include<stdio.h>
// int main(){
//     for(int i=65;i<=90;i++){
//         printf("%c %d",(char)i, i);
//         printf("\n");
//     }
// }

// #include<stdio.h>
// int main(){
//     int n;
//     printf("enter the term");
//     scanf("%d",&n);
//     for(int i=1;i<=2*n-1;i+=2){
//         printf("%d ",i);
//     }
// }

// #include<stdio.h>
// int main(){
//     int n,a;
//     printf("enter no of term");
//     scanf("%d",&n);
//     printf("enter first term");
//     scanf("%d",&a);
//     for(int i=a;i>=a-(n-1)*3;i-=3){
//         printf("%d ",i);
//     }
// }

// #include<stdio.h>
// int main(){
//     int n,r=0,sum=0,l=0;
//     printf("enter a number");
//     scanf("%d",&n);
//     while(n>0){
//     r*=10;
//     l=n%10;
//     r=r+l;
//     n/=10;
//     }
//     printf("reverse of given no is%d",r);
// }

// #include<stdio.h>
// int main(){
//     int n,count=0,temp;
//     printf("enter the number");
//         scanf("%d",&n);
//         temp=n;
//         while(n>0){
//             n/=10;
//             count++;
//         }
//         printf("total no of digit in %d is %d",temp ,count);
// }

// #include<stdio.h>
// int main(){
//     int n,sum=0,r=0;
//     printf("enter the number");
//     scanf("%d",&n);
//     int temp=n;
//     while(n>0){
//         r=n%10;
//         sum+=r;
//         n/=10;
//     }
//     printf("sum of digits of %d is %d",temp,sum);
// }

// #include<stdio.h>
// int main(){
//     int fact=1,n;
//     printf("enter a number");
//     scanf("%d",&n);
//     for(int i=1;i<=n;i++){
//         fact*=i;
//     }
//     printf("factorial of %d is %d",n,fact);
// }

// #include<stdio.h>
// int main(){
//     int n;
//     printf("enter the number");
//     scanf("%d",&n);
//     int temp=n;
//     for(int i=2;i<=n-1;i++){
//         if(n%i!=0){
//         printf("%d is a prime no",temp);
//         break;
//         }
//     }
// }

//  #include<stdio.h>
// int main(){
//     int n;
//     printf("enter the number");
//     scanf("%d",&n);
//     if(n%2==0){
//         printf("%d is even",n);
//     }
//     else{
//         printf("%d is odd",n);
//     }
// }

// #include<stdio.h>
// int main(){
//     int a,b,c;
//     printf("enter three no\n");
//     scanf(" %d %d %d",&a,&b,&c);
//     if(a>b&&a>c)
//     printf("%d is greatest",a);
//     if(b>a&&b>c)
//     printf("%d is greatest",b);
//     if(c>a&&c>b)
//     printf("%d is greatest",c);
// }

// #include<stdio.h>
// int main(){

// }()

// #include<stdio.h>
// int main(){
//     int a,b,c;
//     printf("enter 1st number");
//     scanf("%d",&a);
//     printf("enter second number");
//     scanf("%d",&b);
//     printf("enter thrid number");
//     scanf("%d",&c);
//     if(a>b&&a>c)
//     printf("%d is greater",a);
//     if(b>a&&b>c)
//     printf("%d is greater",b);
//     if(c>a&&c>b)
//     printf("%d is greater",c);
// }

// #include<stdio.h>
// int main(){
//     int n;
//     printf("enter a number");
//     scanf("%d",&n);
//     if(n>0)
//     printf("%d is a positive number",n);
//     if(n<0)
//     printf("%d is a negative number",n);
//     if(n==0)
//     printf("%d is zero",n);
// }

// #include<stdio.h>
// int main(){
//     int a,b,c;
//     printf("enter 1st side of traingle");
//     scanf("%d",&a);
//     printf("enter 2nd side of traingle");
//     scanf("%d",&b);
//     printf("enter thrid side of traingle");
//     scanf("%d",&c);
//     if(a+b>c && b+c>a && c+a>b){
//         printf("valid traingle");
//     }
//     else {
//         printf("invlaid traingle");
//     }
// }

// #include<stdio.h>
// int main(){
//     int i=65;
//     char j='A';
//     if(i==j){
//         printf("this place is beautiful\n");
//     }
//     else{
//         printf("this place is not beautiful\n");
//     }
//     return 0;
// }

// #include<stdio.h>
// int main(){
//     int a=30,b=40;
//     if(a==b);
//     printf("%d %d\n",a, b);
//     return 0;
// }

// #include<stdio.h>
// int main(){
//     int n;
//     printf("enter a number");
//     scanf("%d",&n);
//     if(n%2==0) printf("even");
//     else printf("odd");
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
//     // int x=1;
//     int y=0;
//     for(int i=n-1;i>=0;i++){
//         // int x=1;
//         // x*=arr[i];
//         y=y*2+arr[i];
//     }
//     printf("decimal of given binary no is:%d",y);
// }