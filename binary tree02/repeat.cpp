// #include<iostream>
// using namespace std;
// class Node{
// public:
//     int val;
//     Node* left;
//     Node* right;
//     Node(int val){
//         this->val=val;
//         this->left=NULL;
//         this->right=NULL;
//     }
// };
// void preorder(Node* root){
//     if(root==NULL) return;
//     cout<<root->val<<" ";
//     preorder(root->left);
//     preorder(root->right);
// }
// void inorder(Node* root){
//     if(root==NULL) return;
//     inorder(root->left);
//     cout<<root->val<<" ";
//     inorder(root->right);
// }
// void postorder(Node* root){
//     if(root==NULL) return;
//     postorder(root->left);
//     postorder(root->right);
//     cout<<root->val<<" ";
// }
// int main(){
//     Node* a=new Node(1);
//     Node* b=new Node(2);
//     Node* c=new Node(3);
//     Node* d=new Node(4);
//     Node* e=new Node(5);
//     Node* f=new Node(6);
//     Node* g=new Node(7);
//     a->left=b;
//     a->right=c;
//     b->left=d;
//     b->right=e;
//     c->left=f;
//     c->right=g;
//     preorder(a);
//     cout<<endl;
//     inorder(a);
//     cout<<endl;
//     postorder(a);
// }

// #include<iostream>
// #include<queue>
// using namespace std;
// class Node{
// public:
//     int val;
//     Node* left;
//     Node* right;
//     Node(int val){
//         this->val=val;
//         this->left=NULL;
//         this->right=NULL;
//     }
// };
// void nlevel(Node* root,int x,int k){
//     if(root==NULL) return;
//     if(x==k){
//         cout<<root->val<<" ";
//         return;
//     }
//     nlevel(root->left,x+1,k);
//     nlevel(root->right,x+1,k);
// }
// int level(Node* root){
//     if(root==NULL) return 0;
//     return 1+max(level(root->left),level(root->right));
// }
// void levelorder(Node* root){
//     int n=level(root);
//     for(int i=1;i<=n;i++){
//         nlevel(root,1,i);
//         cout<<endl;
//     }
// }
// void levelorderqueue(Node* root){
//     queue<Node*>q;
//     q.push(root);
//     while(q.size()>0){
//         Node* temp=q.front();
//         q.pop();
//         cout<<temp->val<<" ";
//         if(temp->left!=NULL) q.push(temp->left);
//         if(temp->right!=NULL) q.push(temp->right);
//     }
// }
// int main(){
//     Node* a=new Node(1);
//     Node* b=new Node(2);
//     Node* c=new Node(3);
//     Node* d=new Node(4);
//     Node* e=new Node(5);
//     Node* f=new Node(6);
//     Node* g=new Node(7);
//     a->left=b;
//     a->right=c;
//     b->left=d;
//     b->right=e;
//     c->left=f;
//     c->right=g;
//     // nlevel(a,1,3);
//     levelorder(a);
//     levelorderqueue(a);
// }

#include<iostream>
#include<climits>
#include<queue>
using namespace std;
class Node{
public:
    int val;
    Node* left;
    Node* right;
    Node(int val){
        this->val=val;
        this->left=NULL;
        this->right=NULL;
    }
};
Node* construct(int arr[],int n){
    queue<Node*>q;
    Node* root=new Node(arr[0]);
    q.push(root);
    int i=1;
    int j=2;
    while(q.size()>0 && i<n){
        Node* temp=q.front();
        q.pop();
        Node* l;
        Node* r;
        if(arr[i]!=INT_MIN) l=new Node(arr[i]);
        else l=NULL;
        if(j!=n,arr[j]!=INT_MIN) r=new Node(arr[i]);
        else r=NULL;
        temp->left=l;
        temp->right=r;
        if(left!=NULL) q.push(l);
        if(right!=NULL) q.push(r);
    }
    return root;
}
void levelorderqueue(Node* root){
    queue<Node*> q;
    q.push(root);
    while(q.size()>0){
        Node* temp=q.front();
        q.pop();
        cout<<temp->val<<" ";
        if(temp->left!=NULL) q.push(temp->left);
        if(temp->right!=NULL) q.push(temp->right);
    }
}
int main(){
    int arr[]={1,2,3,4,5,INT_MIN,6,INT_MIN,INT_MIN,7,8,9};
    int n=sizeof(arr)/sizeof(arr[0]);
    Node* root=construct(arr,n);
    levelorderqueue(root);
}