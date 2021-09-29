#include<bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    struct Node* left;
    struct Node* right;

    Node(int val){
        data=val;
        left=NULL;
        right=NULL;
    }
};

//Count no of Nodes in a Binary Tree
int countNode(Node* root){
    if(root==NULL){
        return 0;
    }
    return countNode(root->left) + countNode(root->right) + 1;
}

//Sum of all Nodes in a Binary Tree
int sumNode(Node* root){
    if(root==NULL){
        return 0;
    }
    return sumNode(root->left) + sumNode(root->right) + root->data;
}

int main(){
    struct Node* root= new Node(1);
    root->left= new Node(2);
    root->right= new Node(3);
    root->left->left=new Node(4);
    root->left->right=new Node(5);
    root->right->left=new Node(6);
    root->right->right=new Node(7);

    /*
           1
         /  \
       2     3
      / \   / \
     4   5 6   7

    */

    cout<<countNode(root)<<endl;
    cout<<sumNode(root)<<endl;
    return 0;
}
