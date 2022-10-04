#include <iostream>
#include<queue>
#include<climits>
using namespace std;
 
class node{
    public:
        int data;
        node*left;
        node*right;
 
        node(int d){
            data = d;
            left = NULL;
            right = NULL;
        }
};
 
//Accepts the old root node & data and returns the new root node 
node* insertInBST(node *root,int data){
    //Base Case
    if(root==NULL){
        return new node(data);
    }
    //Rec Case - Insert in the Subtree and Update Pointers
    if(data<=root->data){
        root->left = insertInBST(root->left,data);
    }
    else{
        root->right = insertInBST(root->right,data);
    }
    return root;
}
 
node* build(){
    //Read a list of numbers till -1 and also these numbers will be inserted into BST
    int d;
    cin>>d;
 
    node*root = NULL;
 
    while(d!=-1){
        root = insertInBST(root,d);
        cin>>d;
    }
    return root;
}
//Print the BST Level By Level
void bfs(node *root){
    queue<node*> q;
    q.push(root);
    q.push(NULL);
 
    while(!q.empty()){
        node* f = q.front();
        if(f==NULL){
            cout<<endl;
            q.pop();
            if(!q.empty()){
                q.push(NULL);
            }
        }
        else{
            cout<<f->data<<",";
            q.pop();
 
            if(f->left){
                q.push(f->left);
            }
            if(f->right){
                q.push(f->right);
            }
        }
    }
    return;
}
bool isBST( node* root , int min_value=INT_MIN, int max_value=INT_MAX){  // min and max value are defaulted set if no parameter is passed
    if(root==NULL){
        return true;
    }
    if(root->data >=min_value && root->data <=max_value && isBST(root->left,min_value,root->data) && isBST(root->right,root->data,max_value)){
        return true;
    }
    return false;
}
 
class LList{
    public:
        node* head;
        node* tail;
};
LList tree2list(node* root){
    LList l;
    if(root==NULL){
        l.head = l.tail = NULL;
 
        return l;
    }
    // leaf node
    if(root->left==NULL && root->right==NULL){
        l.head=l.tail=root;
 
        return l;
    }
    //left is not null
    if(root->left!=NULL && root->right==NULL){
        LList left_LL=tree2list(root->left);
        left_LL.tail->right=root;
 
        l.head=left_LL.head;
        l.tail=root;
 
        return l;
    }
    // right is not null
    if( root->left==NULL && root->right!=NULL){
        LList right_LL=tree2list(root->right);
        root->right=right_LL.head;
 
        l.head=root;
        l.tail=right_LL.tail;
 
        return l;
    }
    // left and right both are present
    LList left_LL=tree2list(root->left);
    LList right_LL=tree2list(root->right);
 
    left_LL.tail->right=root;
    root->right=right_LL.head;
 
    l.head=left_LL.head;
    l.tail=right_LL.tail;
 
    return l;
 
}
 
int main(){ 
    node*root = build();
    bfs(root);
    LList l=tree2list(root);
    node* temp=l.head;
    while(temp!=NULL){
        cout<<temp->data<<"->";
        temp=temp->right;
    }
return 0;
}
 
// special note
/*
when we have to costruct a bst from preorder 
we have to find inorder 
which is nothing than sorting of preorder 
coz inorder of bst is akways ascending
*/
