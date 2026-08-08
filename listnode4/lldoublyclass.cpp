#include<iostream>
using namespace std;
class Node{
public:
    int val;
    Node* next;
    Node* prev;
    Node(int val){
        this->val=val;
        this->next=NULL;
        this->prev==NULL;
    }
};
class Dll{
public:
    Node* head;
    Node* tail;
    int size;
    Dll(){
        head=tail=NULL;
        size=0;
    }
    void insertattail(int val){
        Node* temp=new Node(val);
        if(size==0) head=tail=temp;
        else{
            tail->next=temp;
            temp->prev=tail;//extra
            tail=temp;
        }
        size++;
    }
    void insertathead(int val){
        Node* temp=new Node(val);
        if(size==0) head=tail=temp;
        else{
            temp->next=head;
            head->prev=temp;//extra
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
            t->prev=temp;//extra
            t->next->prev=t;//extra
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
            if(idx<size/2){
                Node* temp=head;
                for(int i=1;i<=idx;i++){
                    temp=temp->next;
                }
                return temp->val;
            }
            else{
                Node* temp=tail;
                for(int i=1;i<size-idx;i++){
                    temp=temp->prev;
                }
                return temp->val;
            }
        }
    }
    void deleatathead(){
        if(size==0){
            cout<<"list is empty!!";
        }
        head=head->next;
        if(head!=NULL) head->prev=NULL;//extras
        if(head==NULL) tail=NULL;//extra
        size--;
    }
    void deleatattail(){
        if(size==0){
            cout<<"list is empty!!";
        }
        else if(size==1){//extras
            deleatathead();
            return;
        }
        Node* temp=tail->prev;
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
            temp->next->prev=temp;
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
    Dll list;
    list.insertattail(10);
    list.insertattail(20);
    list.insertattail(30);
    list.display();
    list.insertattail(40);
    list.display();
    list.insertathead(50);
    list.display();
    list.insertatidx(2,60);
    list.display();
    list.deleatattail();
    list.display();
    list.deleatathead();
    list.display();
    list.insertattail(90);
    list.display();
    list.deleatatidx(3);
    list.display();
    list.insertattail(40);
    list.insertattail(50);
    list.display();
    cout<<list.getidx(5);
}