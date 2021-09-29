#include<bits/stdc++.h>
using namespace std;

// class BstNode{
//     public:
//     int data;
//     BstNode* right;
//     BstNode* left;

//     //constructor
//     BstNode(int val){
//         data=val;
//         right=NULL;
//         left=NULL;
//     }
// };

struct BstNode{
    int data;
    BstNode* right;
    BstNode* left;
};

BstNode* GetNewNode(int data){
    BstNode* newNode= new BstNode();
    newNode->data= data;
    newNode->left=NULL;
    newNode->right=NULL;
    return newNode;
}

BstNode* Insert(BstNode* root, int data){
    if(root==NULL){ //empty tree
        root= GetNewNode(data);
    }
    else if(data <= root->data){
        root->left= Insert(root->left, data);
    }
    else{
        root->right= Insert(root->right, data);
    }
    return root;
}

bool Search(BstNode* root, int data){
    if(root==NULL) return false;

    if(root->data==data) return true;
    else if(data <= root->data) return Search(root->left, data);
    else return Search(root->right, data);
}


int main(){
    BstNode* root= NULL;
    
    root= Insert(root, 15);
    root= Insert(root, 10);
    root= Insert(root, 20);
    root= Insert(root, 25);
    root= Insert(root, 8);
    root= Insert(root, 12);

    int n; cin>>n;
    if(Search(root, n)){
        cout<<"Found"<<endl;
    }
    else{
        cout<<"Not Found"<<endl;
    }

    return 0;
}





