//n=5

// 1 2 3 4 5 
// 2     5
// 3   5
// 4 5
// 5 

#include<bits/stdc++.h>
using namespace std;

int main(){
    int n; cin>>n;

    for(int i=1; i<=n; i++){
        for(int j=i; j<=n; j++){
            if(j==i || j==n || i==1 || i==n){
                cout<<j<<" ";
            }
            else{
                cout<<"  ";
            }
        }cout<<endl;
    }

    return 0;
}