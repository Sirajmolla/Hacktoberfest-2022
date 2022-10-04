#include <iostream>
#include<deque>
using namespace std;
class node{
    public:
        int data;
        node* left;
        node* right;
        node(int data){
            this->data=data;
            left==NULL;
            right=NULL;
        }
};
// inorder of bst is always sorted
node* build(){
    int d;
    cin>>d;
    node* root=new node(d);
    int op;     //no of option
    cin>>op;
    if(op==0){
        root->left=root->right=NULL;
        return root;
    }
    else if(op==1){
        root->left=build();
        root->right=NULL;
        return root;
    }
    else{
        root->left=build();
        root->right=build();
        return root;
    }
 
}
void print(node * root ){
    if(root==NULL){
        return;
    }
    cout<<root->data<<" ";
    print(root->left);
    print(root->right);
    return;
}
int level_sum(node* root , int level){
    deque<node*> dq;
    dq.push_back(root);
    dq.push_back(NULL);
    int sum=0;
    while(!dq.empty() ){
        node* ff=dq.front();
        if(ff==NULL){
            dq.pop_front();
            level--;
            if(!dq.empty()){
                 dq.push_back(NULL);
            }
        }
        else{
            if(level==0){
                sum+=ff->data;
            }
            dq.pop_front();
            if(ff->left){
                dq.push_back(ff->left);
            }
            if(ff->right){
                dq.push_back(ff->right);
            }
        }
    }
return sum;
}
 
 
int main() {
    node* root=build();
    int l;
    cin>>l;
    //print(root);
    cout<<level_sum(root,l);
}
 
