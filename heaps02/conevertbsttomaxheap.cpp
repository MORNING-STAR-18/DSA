#include<iostream>
#include<vector>
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
void inorder(Node* root,vector<int>&dec){
    if(root==NULL) return;
    inorder(root->right,dec);
    dec.push_back(root->val);
    inorder(root->left,dec);
}
void print(vector<int>dec){
    for(int i=0;i<dec.size();i++){
        cout<<dec[i]<<" ";
    }  
    cout<<endl; 
}
void preorder(Node* &root,vector<int>&dec,int &i){
    if(root==NULL) return;
    root->val=dec[i++];
    preorder(root->left,dec,i);
    preorder(root->right,dec,i);
}
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
int main(){
    Node* a=new Node(10);
    Node* b=new Node(5);
    Node* c=new Node(16);
    Node* d=new Node(1);
    Node* e=new Node(8);
    Node* f=new Node(12);
    Node* g=new Node(20);
    a->left=b;
    a->right=c;
    b->left=d;
    b->right=e;
    c->left=f;
    c->right=g;
    levelorder(a);
    vector<int>dec;
    inorder(a,dec);
    print(dec);
    int i=0;
    preorder(a,dec,i);
    levelorder(a);
}