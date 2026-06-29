// #include<iostream>
// using namespace std;
// int main(){
//     char str[5]={'a','b','c','d','e'};
//     for(int i=0;str[i]!='\0';i++){
//         cout<<str[i];
//     }
// }

// #include<iostream>
// using namespace std;
// int main(){
//     string s;
//     cin>>s;
//     cout<<s[1];
// }

// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     char str[n];
//     for(int i=0;i<n;i++){
//         cin>>str[i];
//     }
//     int count=0;
//     for(int i=0;i<n;i++){
//         if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u') count++;
//     }
//     cout<<count;
// }

// #include<iostream>
// using namespace std;
// int main(){
//     string s;
//     cin>>s;
//     s[1] ='a';
//     cout<<s;
// }

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
//     for(int i=0;i<n;i++){
//         if(i%2==0) str[i]='a';
//     }
//     for(int i=0;i<n;i++){
//         cout<<str[i];
//     }
// }

// #include<iostream>
//  #include<algorithm>
// #include<string>
// using namespace std;
// int main(){
//     // string str="sumit rajput";
//     // cout<<str.size();
//     // str.push_back('a');
//     // cout<<str;
//     // str.pop_back();
//     // str.pop_back();
//     // cout<<str;
//     // string s="sumit";
//     // string t=" rajput";
//     // s+=t;
//     // cout<<s;
//     string str="abcdef";
//     // reverse(str.begin(),str.end());
//     // reverse(str.begin()+2,str.end()-1);
//     reverse(str.begin()+2,str.begin()+5);
//     cout<<str;
// }

// #include<iostream>
// #include<algorithm>
// using namespace std;
// int main(){
//     string str;
//     cin>>str;
//     int n=str.size();
//     reverse(str.begin(),str.begin()+n/2);
//     cout<<str;
// }

// #include<iostream>
// #include<algorithm>
// using namespace std;
// int main(){
//     string str;
//     cout<<"enter a string of legth grater than 5";
//     cin>>str;
//     reverse(str.begin()+1,str.begin()+5);
//     cout<<str;

// }

// #include<iostream>
// using namespace std;
// int main(){
//     string str;
//     cout<<"enter a string";
//     cin>>str;
//     cout<<str.substr(1)<<endl;
//     cout<<str.substr(3,1);
// }

// #include<iostream>
// using namespace std;
// int main(){
//     string str;
//     cout<<"enter a string";
//     cin>>str;
//     int n=str.size();
//     cout<<str.substr(n/2,n/2);
// }

// #include<iostream>
// using namespace std;
// int main(){
//     int x;
//     x=12345;
//     string str=to_string(x);
//     cout<<str;
// }

// #include<iostream>
// using namespace std;
// int main(){
//     int x;
//     cout<<"enter numbers";
//     cin>>x;
//     string str=to_string(x);
//     cout<<str.size();
// }

// #include<iostream>
// using namespace std;
// int main(){
//     string str;
//     cout<<"enter a sentence";
//     getline(cin,str);
//     cout<<str<<endl; 
//     // cout<<str;
// }
