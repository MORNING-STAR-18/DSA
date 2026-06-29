#include<iostream>
#include<queue>
#include<climits>
#include<unordered_map>
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
        if(j!=n && arr[j]!=INT_MIN) r=new Node(arr[j]);
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
void nlevel(Node* root,int curr,int level){
    if(root==NULL) return;
    if(curr==level){
        cout<<root->val<<" ";
        return;
    }
    nlevel(root->left,curr+1,level);
    nlevel(root->right,curr+1,level);
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
void topview(Node* root){
    pair<Node*,int>p;
    queue<pair<Node*,int>>q;
    unordered_map<int,int>m;
    p.first=root;
    p.second=0;
    q.push(p);
    while(q.size()>0){
        Node* temp=(q.front()).first;
        int level=(q.front()).second;
        q.pop();
        if(m.find(level)==m.end()){
            m[level]=temp->val;
        }
        if(temp->left!=NULL){
            pair<Node*,int>r;
            r.first=temp->left;
            r.second=level-1;
            q.push(r);
        }
        if(temp->right!=NULL){
            pair<Node*,int>r;
            r.first=temp->right;
            r.second=level+1;
            q.push(r);
        }
        
    }
    int mx=INT_MIN;
    int mn=INT_MAX;
    for(auto x:m){
        mx=max(mx,x.first);
        mn=min(mn,x.first);
    }
    for(int i=mn;i<=mx;i++){
        cout<<m[i]<<" ";
    }
}
int main(){
    int arr[]={1,2,3,4,5,INT_MIN,6,INT_MIN,INT_MIN,7,8,};
    int n=sizeof(arr)/sizeof(arr[0]);
    Node* root=construct(arr,n);
    levelorder(root);
    topview(root);
}