// 1
// #include<iostream>
// using namespace std;
// int main(){
//     string str;
//     getline(cin,str);
//     for(int i=0;str[i]!='\0';i++){
//         if(i%2!=0) str[i]='#';
//     }
//     cout<<str;
// }

// 2
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"declare the size of string";
//     cin>>n;
//     char str[n];
//     for(int i=0;i<n;i++){
//         cin>>str[i];
//     }
//     int count=0;
//     for(int i=0;i<n;i++){
//         if(str[i]!='a'&&str[i]!='e'&&str[i]!='i'&&str[i]!='o'&&str[i]!='u')
//         count++;
//     }
//     cout<<count;
// }

// 3
// #include<iostream>
// using namespace std;
// int main(){
//     string str;
//     cout<<"enter a string";
//     getline(cin,str);
//     int n=str.size();
//     bool flag=false;
//     int i=0;
//     int j=n-1;
//     while(i<j){
//         if(str[i]!=str[j]){
//             flag=true;
//         break;
//         }
//         else{
//             i++;
//             j--;
//         }
//     }
//     if(flag==false) cout<<"palindrome";
//     else cout<<"not a palindrome";
// }

// 4
// #include<iostream>
// #include<algorithm>
// using namespace std;
// int main(){
//     string str;
//     getline(cin,str);
//     int n=str.size();
//     reverse(str.begin()+n/2,str.end());
//     cout<<str;

// }

// 5
// #include<iostream>
// using namespace std;
// int main(){
//     int x;
//     cout<<"enter a number";
//     cin>>x;
//         string str=to_string(x);
//         cout<<str;
//     }
