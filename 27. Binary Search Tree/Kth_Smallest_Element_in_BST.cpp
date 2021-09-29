//Leetcode 230
#include<bits/stdc++.h>
using namespace std;

int main(){

    string in1;
    string in2;

    getline(cin, in1 );
    getline(cin, in2 );

    istringstream is1( in1 );
    istringstream is2( in2 );

    vector <int> inorder( ( istream_iterator<int>( is1 ) ), istream_iterator<int>() );
    vector <int> preorder( ( istream_iterator<int>( is2 ) ), istream_iterator<int>() );
    
    
    int k; cin>>k;


    // for(auto i: inorder) cout<<i<<" ";
    // for(auto i: preorder) cout<<i<<" ";


    cout<<inorder[k-1];




    return 0;
}