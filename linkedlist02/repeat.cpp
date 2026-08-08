#include<iostream>
using namespace std;
class node{
public:
    int val;
    node* next;
    node(int val){
        this->val=val;
        this->next=NULL;
    }
};
void deleatnode(node* c){
    c->val=c->next->val;
    c->next=c->next->next;
}
void display(node* head){
    node* temp=head;
    while(temp!=NULL){
        cout<<temp->val<<" ";
        temp=temp->next;
    }
    cout<<endl;
}
node* middle(node* head){
    node* slow=head;
    node* fast=head;
    while(fast!=NULL&&fast->next->next!=NULL){
        slow=slow->next;
        fast=fast->next->next;
    }
    return slow;
}
node* deleatfromlast(node* head,int idx){
    node* fast=head;
    node* slow=head;
    for(int i=1;i<=idx+1;i++){
        if(fast==NULL) return head->next;
        fast=fast->next;
    }
    while(fast!=NULL){
        slow=slow->next;
        fast=fast->next;
    }
    slow->next=slow->next->next;
    return head;
}
int main(){
    node* a =new node(10);
    node* b =new node(20);
    node* c =new node(30);
    node* d =new node(40);
    a->next=b;
    b->next=c;
    c->next=d;
    node* head=a;
    display(head);
    // deleatnode(c);
    // display(head);
    // head=middle(a);
    // display(head);
    head=deleatfromlast(head,2);
    display(head);  
}