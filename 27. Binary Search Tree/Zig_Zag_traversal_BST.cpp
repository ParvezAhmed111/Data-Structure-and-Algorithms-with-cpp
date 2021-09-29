#include<bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    Node *left, *right;
    Node(int val){
        data= val;
        left=NULL;
        right=NULL;
    }
};

//Zig Zag Traversal in BST

void ZigZag(Node* root){
    //base condition
    if(root==NULL) return;
    stack<Node*> currlevel;
    stack<Node*> nextlevel;

    bool leftToRight = true;
    currlevel.push(root);
    
    while(!currlevel.empty()){
        Node* temp = currlevel.top();
        currlevel.pop();

        if(temp){
            cout<<temp->data<<" ";
            
            //Left to right
            if(leftToRight){
                if(temp->left){
                    nextlevel.push(temp->left);
                }
                if(temp->right){
                    nextlevel.push(temp->right);
                }
            }
            //Right to Left
            else{
                if(temp->right){
                    nextlevel.push(temp->right);
                }
                if(temp->left){
                    nextlevel.push(temp->left);
                }
            }
        }
        if(currlevel.empty()){
            leftToRight = !leftToRight;
            swap(currlevel, nextlevel);
        }
    }
}


int main(){
    Node *root= new Node(12);
    root->left= new Node(9);
    root->right= new Node(15);
    root->left->left= new Node(5);
    root->left->right= new Node(10);
    
    /*   Binary Search Tree
                12
               / \
              9   15
             / \   
            5   10  
    */

   ZigZag(root);
    
    return 0;
}