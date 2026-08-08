// #include<iostream>
// #include<queue>
// #include<stack>
// using namespace std;
// void display(queue<int>&q){
//     int n=q.size();
//     int x=0;
//     while(x!=n){
//         cout<<q.front()<<" ";
//         q.push(q.front());
//         q.pop();
//         x++;
//     }
//     cout<<endl;
// }
// void reverse(queue<int>&q){
//     stack<int>st;
//     while(q.size()!=0){
//         st.push(q.front());
//         q.pop();
//     }
//     while(st.size()!=0){
//         q.push(st.top());
//         st.pop();
//     }
// }
// void removeateven(queue<int>&q){
//     int i=0;
//     int n=q.size();
//     while(i!=n){
//         if(i%2!=0){
//             q.push(q.front());
//         }
//         q.pop();
//         i++;
//     }
// }
// int main(){
//     queue<int>q;
//     q.push(10);
//     q.push(20);
//     q.push(30);
//     q.push(40);
//     q.push(50);
//     // cout<<q.front()<<endl;
//     // cout<<q.back()<<endl;
//     display(q);
//     // reverse(q);
//     // display(q);
//     removeateven(q);
//     display(q);
// }

// #include<iostream>
// #include<queue>
// using namespace std;
// class Queue{
// public:
//     int f;
//     int b;
//     vector<int>arr;
//     Queue(int val){
//         f=0;
//         b=0;
//         vector<int>v(val);
//         arr=v;
//     }
//     void push(int val){
//         if(b==arr.size()){
//             cout<<"arr is full"<<endl;
//             return;
//         }
//         arr[b]=val;
//         b++;
//     }
//     void pop(){
//         if(f-b==0){
//             cout<<"arr is empty"<<endl;
//             return;
//         }
//         f++;
//     }
//     int  front(){
//         if(f-b==0){
//             cout<<"arr is empty"<<endl;
//             return -1;
//         }
//         return arr[f];
//     }
//     int back(){
//         if(f-b==0){
//             cout<<"arr is empty"<<endl;
//             return -1;
//         }
//         return arr[b];
//     }
//     int size(){
//         return b-f;
//     }
//     bool emepty(){
//         if(b-f==0) return true;
//         return false;
//     }
//     void display(){
//         for(int i=f;i<b;i++){
//             cout<<arr[i]<<" ";
//         }
//         cout<<endl;
//     }
// };
// int main(){
//      Queue q(5);
//     q.push(10);
//     q.push(20);
//     q.push(30);
//     q.push(40);
//     q.display();
//     q.push(50);
//     q.push(60);
//     q.display();
//     q.pop();
//     q.display();
// }

// #include<iostream>
// using namespace std;
// class Node{
// public:
//     int val;
//     Node *next;
//     Node(int val){
//         this->val=val;
//         this->next=NULL;
//     }
// };
// class Queue{
// public:
//     Node* head;
//     Node* tail;
//     int s;
//     Queue(){
//         head=tail=NULL;
//         s=0;
//     }
//     void push(int val){
//         Node* temp=new Node(val);
//         if(s==0) head=tail=temp;
//         else{
//             tail->next=temp;
//             tail=temp;
//         }
//         s++;
//     }
//     void pop(){
//         if(s==0){
//             cout<<"queue is empty"<<endl;
//             return;
//         }
//         head=head->next;
//         s--;
//     }
//     int  front(){
//         if(s==0){
//             cout<<"queue is empty"<<endl;
//             return -1;
//         }
//         return head->val;   
//     }
//     int back(){
//         if(s==0){
//             cout<<"queue is empty"<<endl;
//             return -1;
//         }
//         return tail->val;
//     }
//     void display(){
//         Node* temp=head;
//         while(temp){
//             cout<<temp->val<<" ";
//             temp=temp->next;
//         }
//         cout<<endl;
//     }
//     int size(){
//         return s;
//     }
//     bool empty(){
//         if(s==0) return true;
//         else return false;
//     }
// };
// int main(){
//     Queue q;
//     q.push(10);
//     q.push(20);
//     q.push(30);
//     q.push(40);
//     q.display();
//     q.push(50);
//     q.push(60);
//     q.display();
//     q.pop();
//     q.display();
// }


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
        this->prev=NULL;
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
    void push_back(int val){
        Node* temp=new Node(val);
        if(s==0) head=tail=temp;
        else{
            tail->next=temp;
            temp->prev=tail;
            tail=temp;
        }
        s++;
    }
    void push_front(int val){
        Node* temp=new Node(val);
        if(s==0) head=tail=temp;
        else{
            temp->next=head;
            head->prev=temp;
            head=temp;
        }
        s++;
    }
    void pop_front(){
        if(s==0){
            cout<<"deque is emepty";
            return;
        }
        head=head->next;
        if(head!=NULL) head->prev=NULL;
        else tail=NULL;
        s--;
    }
    void pop_back(){
        if(s==0){
            cout<<"deque is empty";
            return;
        }
        tail=tail->prev;
        if(tail!=NULL) tail->next=NULL;
        else head=NULL;
        s--;
    }
    int front(){
        if(s==0){
            cout<<"Deque is empty";
        }
        return head->val;
    }
    int back(){
        if(s==0){
            cout<<"Deque is empty";
            return -1;
        }
        return tail->val;
    }
    int size(){
        return s;
    }
    int empty(){
        if(s==0) return true;
        else return false;
    }
    void display(){
        Node* temp=head;
        while(temp){
            cout<<temp->val<<" ";
            temp=temp->next;
        }
        cout<<endl;
    }
};
int main(){
    Deque dq;
    dq.push_back(10);
    dq.push_back(20);
    dq.push_back(30);
    dq.push_back(40);
    dq.display();
    dq.pop_back();
    dq.display();
    dq.pop_front();
    dq.display();
    dq.push_front(50);
    dq.display();
    cout<<dq.front()<<endl<<dq.back()<<endl;
}