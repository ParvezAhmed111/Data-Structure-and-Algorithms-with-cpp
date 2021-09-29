#include<bits/stdc++.h>
using namespace std;

int solve(int r, int c, int A[r][c], int B){
    int r=A.
}

int main(){
    int r, c, n;
    cin>>r>>c>>n;

    int dp[r][c];
    for(int i=0; i<r; i++){
        for(int j=0; j<c; j++){
            cin>>dp[i][j];
        }
    }

    cout<<solve(r,c,dp,n);

    return 0;
}