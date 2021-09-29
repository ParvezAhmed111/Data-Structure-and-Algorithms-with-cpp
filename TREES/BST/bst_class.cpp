#include<bits/stdc++.h>
using namespace std;

class BstNode{
    public:
    int data;
    BstNode* right;
    BstNode* left;

    //constructor
    BstNode(int val){
        data=val;
        right=NULL;
        left=NULL;
    }
};

void Insert(BstNode* &root, int data){
    BstNode* newNode= new BstNode(data);

    if(root==NULL){ //empty tree
        Insert();
    }
    else if(data <= root->data){
        root->left= Insert(root->left, data);
    }
    else{
        root->right= Insert(root->right, data);
    }
    return root;
}