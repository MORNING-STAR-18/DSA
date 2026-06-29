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
class Deque{
public:
    Node* head;
    Node* tail;
    int s;
    Deque(){
        head=tail=NULL;
        s=0;
    }
    void pushback(int val){
        Node* temp=new Node(val);
        if(s==0) head=tail=temp;
        else{
            tail->next=temp;
            temp->prev=tail;//extra
            tail=temp;
        }
        s++;
    }
    void pushfront(int val){
        Node* temp=new Node(val);
        if(s==0) head=tail=temp;
        else{
            temp->next=head;
            head->prev=temp;//extra
            head=temp;
        }
        s++;
    }
    void popfront(){
        if(s==0){
            cout<<"list is empty!!";
        }
        head=head->next;
        if(head!=NULL) head->prev=NULL;//extras
        if(head==NULL) tail=NULL;//extra
        s--;
    }
    void popback(){
        if(s==0){
            cout<<"list is empty!!";
            return;
        }
        else if(s==1){//extras
            popfront();
            return;
        }
        Node* temp=tail->prev;
        temp->next=NULL;
        tail=temp;
        s--;
    }
    int front(){
        if(s==0){
            cout<<"Queue is empty!!";
        }
        return head->val;
    }
    int back(){
        if(s==0){
            cout<<"Queue is empty!!";
        }
        return tail->val;
    }
    int size(){
        return s;
    }
    bool empty(){
        if(s==0) return true;
        else return false;
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
    Deque dq;
    dq.pushback(10);
    dq.pushback(20);
    dq.pushback(30);
    dq.pushback(40);
    dq.display();
    dq.popback();
    dq.display();
    dq.popfront();
    dq.display();
    dq.pushfront(50);
    dq.display();
    cout<<dq.front()<<endl<<dq.back()<<endl;
}