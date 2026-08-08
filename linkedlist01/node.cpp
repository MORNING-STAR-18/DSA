#include<iostream>
using namespace std;
class Node{
public:
    int val;
    Node*next;//its stoe the adress of next datatype;
    Node(int val){//its a constructor
        this->val=val;
        this->next=NULL;//we put null in next which store address of next data type
    }
};
int main(){
    Node a(20);
    Node b(10);
    Node c(30);
    Node d(40);
    a.next=&b;
    b.next=&c;
    c.next=&d;
    // cout<<(a.next)->val;
    // cout<<((a.next)->next)->val;//its value of c
    // cout<<(((a.next)->next)->next)->val;//its value of d
    // cout<<(*((*((*(a.next)).next)).next)).val;//value of d;
    Node temp=a;
    while(1){
        cout<<temp.val<<" ";
        if(temp.next==NULL) break;
        temp=*(temp.next);
    }
}