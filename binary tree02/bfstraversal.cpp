#include<iostream>
#include<queue>
#include<climits>
using namespace std;
class Node{
public:
    int val;
    Node* left;
    Node* right;
    Node(int val){
        this->val=val;
        this->right=NULL;
        this->left=NULL;
    }
};
void nlevel(Node* root,int curr,int level){
    if(root==NULL) return;
    if(curr==level){
        cout<<root->val<<" ";
        return;
    }
    nlevel(root->left,curr+1,level);
    nlevel(root->right,curr+1,level);
}
void nlevelrev(Node* root,int curr,int level){
    if(root==NULL) return;
    if(curr==level){
        cout<<root->val<<" ";
        return;
    }
    nlevelrev(root->right,curr+1,level);
    nlevelrev(root->left,curr+1,level);
}
int levels(Node* root){
    if(root==NULL) return 0;
    return 1+max(levels(root->left),levels(root->right));
}
void levelorder(Node* root){
    int n=levels(root);
    for(int i=1;i<=n;i++){
        nlevel(root,1,i);
        cout<<endl;
    }
}
void levelorderqueue(Node* root){// this techinqe is bfs(breadth first search)
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
    Node* a=new Node(1);
    Node* b=new Node(2);
    Node* c=new Node(3);
    Node* d=new Node(4);
    Node* e=new Node(5);
    Node* f=new Node(6);
    Node* g=new Node(7);
    a->left=b;
    a->right=c;
    b->left=d;
    b->right=e;
    c->left=f;
    c->right=g;
    // nlevel(a,1,2);
    levelorder(a);
    levelorderqueue(a);
}