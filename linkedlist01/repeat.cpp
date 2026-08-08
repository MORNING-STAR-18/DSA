// #include<iostream>
// using namespace std;
// class student{
// public:
//     string name;
//     int rollno;
//     float marks;
//     student(string name,int rollno,float marks){
//         this->name=name;
//         this->rollno=rollno;
//         this->marks=marks;
        
//     }
// };
// void change(student &s){
//     s.name="morning";
// }
// void chnage2(student *s){
//     s->name="morning";
// }
// int main(){
//     student s("morning star",10,21.2);
//     // cout<<s.name<<endl;
//     // change(s);
//     // cout<<s.name<<endl;
//     // student *ptr=&s;
//     // (*ptr).name="morning";
//     // cout<<s.name;
//     // ptr->name="morning";
//     // cout<<ptr->name;
//     chnage2(&s);
//     cout<<s.name;
// }


// #include<iostream>
// using namespace std;
// class Node{
// public:
//     int val;
//     Node* next;
//     Node(int val){
//         this->val=val;
//         this->next=NULL;
//     }
// };
// int main(){
//     Node a(10);
//     Node b(20);
//     Node c(30);
//     Node d(40);
//     a.next=&b;
//     b.next=&c;
//     c.next=&d;
//     // cout<<(*((*((*(a.next)).next)).next)).next;
//     // cout<<(a.next)->next->next->val;
//     Node temp=a;
//     while(1){
//         cout<<temp.val<<" ";
//         if(temp.next==NULL) break;
//         temp=*(temp.next);
//     }
// }

// #include<iostream>
// using namespace std;
// class Node{
// public:
//     int val;
//     Node* next;
//     Node (int val){
//         this->val=val;
//         this->next=NULL;
//     }
// };
// void display(Node* head){
//     Node *temp= head;
//     while(temp==NULL){
        
//     }
// }
// int main(){

// }

#include<iostream>
#include<algorithm>
#include<math.h>
using namespace std;
int main(){
    int n;
    cout<<"enter the size of array";
    cin>>n;
    reverse(n);
    cout<<n;
}