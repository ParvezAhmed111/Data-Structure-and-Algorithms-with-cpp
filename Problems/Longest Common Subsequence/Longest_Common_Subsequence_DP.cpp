#include<bits/stdc++.h>
using namespace std;

// int longest_common_subsequence(string s1, string s2){
//     int x=s1.length()+1;
//     int y=s2.length()+1;

//     int dp[x][y];
//     int Max=0;
//     int i, j;
//     for(i=0; i<x; i++){
//         for(j=0; j<y; j++){
            
//             if (i == 0 || j == 0)
//                 dp[i][j] = 0;

//             else if(s1[i-1] == s2[j-1]){
//                 dp[i][j]=dp[i-1][j-1]+1;
//             }
//             else{
//                 dp[i][j]=max(dp[i-1][j], dp[i][j-1]);
//             }
//         }
//     }
//     return dp[x-1][y-1];

// }

int lcs(string s1, string s2, int m, int n){
            
    int ans;
    if (m == 0 || n == 0)
        return 0;

    if(s1[m-1] == s2[n-1]){
        ans=1+ lcs(s1, s2, m-1, n-1);
    }
    else{
        ans=max(lcs(s1, s2, m, n-1), lcs(s1, s2, m-1, n));
    }
    return ans;
}


int main(){
    string s1; getline(cin,s1);
    string s2; getline(cin,s2);
    

    // cout<<longest_common_subsequence(s1,s2);

    int m=s1.length();
    int n=s2.length();
    cout<<lcs(s1,s2, m, n);


    return 0;
}