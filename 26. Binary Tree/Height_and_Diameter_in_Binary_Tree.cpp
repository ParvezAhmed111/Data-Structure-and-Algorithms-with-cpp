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

//Height of a BT   
//TC=O(n)
int calcHeight(Node* root){
    if(root==NULL){
        return 0;
    }

    int lHeight= calcHeight(root->left);
    int rHeight= calcHeight(root->right);

    return max(lHeight, rHeight)+1;
}
//Diameter of a BT    
//TC=O(n^2)
int calcDiameter(Node* root){
    if(root==NULL){
        return 0;
    }

    int lHeight= calcHeight(root->left);
    int rHeight= calcHeight(root->right);

    int currDiameter= lHeight + rHeight + 1;

    int lDiameter= calcDiameter(root->left);
    int rDiameter= calcDiameter(root->right);

    return max(currDiameter, max(lDiameter, rDiameter));
}
//OPTIMIZED WAY-> Diameter of a BT    
//TC=O(n)

int calDiam(Node* root, int* height){
    //base condition
    if (root==NULL){
        *height=0;
        return 0;
    }

    int lh=0, rh=0;
    int lDiam=calDiam(root->left, &lh);
    int rDiam=calDiam(root->right, &rh);

    int currDiam= lh + rh + 1;
    *height= max(lh, rh) + 1;

    return max(currDiam, max(lDiam, rDiam));
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

    Height = 3;
    Diameter= 4->2->1->3->7     i.e. 5
    */

    cout<<"Height is: "<<calcHeight(root)<<endl;
    cout<<"Diameter is: "<<calcDiameter(root)<<endl;

    //Diameter of a Binary Tree - OPTIMIZED
    int height =0;
    cout<<"Diameter (OPTIMIZED) is: "<<calDiam(root, &height)<<endl;
    return 0;
}
