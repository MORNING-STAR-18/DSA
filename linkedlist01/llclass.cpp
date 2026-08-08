#include<iostream>
using namespace std;
class Node{                                         
public:
    int val;
    Node*next;
    Node(int val){
        this->val=val;
        this->next=NULL;
    }
};
class linkedlist{
public:
    Node* head;
    Node* tail;
    int size;
    linkedlist(){
        head=tail=NULL;
        size=0;
    }
    void insertattail(int val){
        Node* temp=new Node(val);
        if(size==0) head=tail=temp;
        else{
            tail->next=temp;
            tail=temp;
        }
        size++;
    }
    void insertathead(int val){
        Node* temp=new Node(val);
        if(size==0) head=tail=temp;
        else{
            temp->next=head;
            head=temp;
        }
        size++;
    }
    void insertatidx(int idx,int val){
        if(idx<0||idx>size) cout<<"invalid index";
        else if(idx==0) insertathead(val);
        else if(idx==size) insertattail(val);
        else{
            Node* t=new Node(val);
            Node* temp=head;
            for(int i=1;i<=idx-1;i++){
                temp=temp->next;
            }
            t->next=temp->next;
            temp->next=t;
            size++;
            
        }
    }
    int getidx(int idx){
        if(idx<0||idx>=size){
            cout<<"invalid statement";
            return -1;
        }
        else if(idx==0) return head->val;
        else if(idx==size-1) return tail->val;
        else{
            Node* temp=head;
            for(int i=1;i<=idx;i++){
                temp=temp->next;
            }
            return temp->val;
        }
    }
    void deleatathead(){
        if(size==0){
            cout<<"list is empty!!";
        }
        head=head->next;
        size--;
    }
    void deleatattail(){
        if(size==0){
            cout<<"list is empty!!";
        }
        Node* temp=head;
        while(temp->next!=tail){
            temp=temp->next;
        }
        temp->next=NULL;
        tail=temp;
        size--;
    }
    void deleatatidx(int idx){
        if(size==0){
            cout<<"list is empty";
            return ;
        }
        else if(idx<0||idx>=size){
            cout<<"invalid index";
            return;
        }
        else if(idx==0) return deleatathead();
        else if(idx==size-1) return deleatattail();
        else{
            Node* temp=head;
            for(int i=1;i<=idx-1;i++){
                temp=temp->next;
            }
            temp->next=temp->next->next;
            size--;
        }
    }
    void display(){
        Node* temp=head;
        while(temp!=NULL){
            cout<<temp->val<<" ";
            temp=temp->next;
        }
        cout<<endl;
    }

};
int main(){
    linkedlist ll;
    ll.insertattail(10);
    ll.display();
    ll.insertattail(20);
    ll.display();
    cout<<ll.size<<endl;
    ll.insertathead(50);
    ll.display();
    ll.insertatidx(1,30);
    ll.display();
    cout<<ll.getidx(1)<<endl;
    // ll.deleatathead();
    // ll.display();
    // ll.deleatattail();
    // ll.display();
    // ll.deleatatidx(2);
    ll.display();
    ll.deleatval(50);
    ll.display();
}

