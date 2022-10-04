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
int main(){ 
    node*root = build();
    bfs(root);
 
    cout<<"isBST : "<<isBST(root);
 
return 0;
}
