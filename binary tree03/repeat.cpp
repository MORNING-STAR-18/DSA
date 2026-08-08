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
        this->left=NULL;
        this->right=NULL;
    }
};
int level(Node* root){
    if(root==NULL) return 0;
    return 1+max(level(root->left),level(root->right));
}
void nlevel(Node* root,int l,int c){
    if(root==NULL) return;
    if(l==c){
        cout<<root->val<<" ";
        return;
    }
    nlevel(root->left,l,c+1);
    nlevel(root->right,l,c+1);
}
void levelorder(Node* root){
    int n=level(root);
    for(int i=1;i<=n;i++){
        nlevel(root,i,1);
        cout<<endl;
    }
}
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
        if(j!=n&&arr[j]!=INT_MIN) r=new Node(arr[j]);
        else r=NULL;
        temp->left=l;
        temp->right=r;
        if(l!=NULL) q.push(l);
        if(r!=NULL) q.push(r);
        i+=2;
        j+=2;
    }
    return root;
}
void leftboundary(Node* root){
    if(root->left==NULL && root->right==NULL) return;
    cout<<root->val<<" ";
    if(root->left==NULL) leftboundary(root->right);
    else leftboundary(root->left);
}
void leaf(Node* root){
    if(root==NULL) return;
    if(root->left==NULL && root->right==NULL){
        cout<<root->val<<" ";
        return;
    }
    leaf(root->left);
    leaf(root->right);
}
void rightboundary(Node* root){
    if(root->left==NULL && root->right==NULL) return;
    if(root->right==NULL) rightboundary(root->left);
    else rightboundary(root->right);
    cout<<root->val<<" ";
}
int main(){
    int arr[]={1,2,3,4,5,INT_MIN,6,7,INT_MIN,8,INT_MIN,9,10,INT_MIN,11,INT_MIN,12,INT_MIN,13,INT_MIN,14,15,16,INT_MIN,17,INT_MIN,INT_MIN,18,INT_MIN,19,INT_MIN,INT_MIN,INT_MIN,20,21,22,23,INT_MIN,24,25,26,27,INT_MIN,INT_MIN,28,INT_MIN,INT_MIN};
    int n=sizeof(arr)/sizeof(arr[0]);
    Node* root=construct(arr,n);
    levelorder(root);
    cout<<endl;
    leftboundary(root);
    leaf(root);
    rightboundary(root->right);
    //1 2 4 7 11 15 19 24 16 25 26 27 13 28 23 18 14 10 6 3 
}