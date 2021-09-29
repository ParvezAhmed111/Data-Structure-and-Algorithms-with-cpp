//Print vertical order of a Binary Tree
#include<bits/stdc++.h>
using namespace std;

struct Node{
    int key;
    struct Node *left, *right;

    Node(int val){
        key= val;
        left=NULL;
        right=NULL;
    }
};

void getVerticalOrder(Node *root, int hdis, map<int, vector<int>> &m){
    if(root == NULL) return;

    m[hdis].push_back(root->key); 
    getVerticalOrder(root->left, hdis-1, m);
    getVerticalOrder(root->right, hdis+1, m);

}


int main(){
    struct Node *root= new Node(10);
    root->left= new Node(7);
    root->right = new Node(4);
    root->left->left = new Node(3);
    root->left->right = new Node(11);
    root->right->left = new Node(14);
    root->right->right = new Node(6);

    map<int, vector<int>> m;
    int hdis= 0;

    getVerticalOrder(root, hdis, m);

    for(auto i: m){
        for(auto j: i.second){
            cout<<j<<" ";
        }
        cout<<endl;
    }

    // map<int, vector<int>> :: iterator it;
    // for(it= m.begin(); it!=m.end(); it++){
    //     for(int i=0; i<(it->second).size(); i++){
    //         cout<<it->second[i]<<" ";
    //     }
    //     cout<<endl;
    // }

    return 0;
}