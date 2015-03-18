#include <cstdio>

struct node{
    int data;
    node* lchild;
    node* rchild;
};

void search(node* root, int x, int newdata){
    if(root == NULL){
        return ;
    }
    if(root->data == x){
        root->data = newdata;
    }
    search(root->lchild, x, newdata);
    search(root->rchild, x, newdata);
}

void insert(node* &root, int x){
    if(root == NULL){
        root = new node;
        root->data = x;
        root->lchild = root->rchild = NULL;
        return;
    }
    if()
}

node* Create(int data[], int n){
    node* root = new node;
    root->data = data[0];
    root->lchild = root->rchild = NULL;
    for(int i=1; i<n; i++){
        insert(root, data[i]);
    }
    return root;
}
