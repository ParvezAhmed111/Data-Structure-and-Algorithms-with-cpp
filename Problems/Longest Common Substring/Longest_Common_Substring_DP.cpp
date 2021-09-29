#include<bits/stdc++.h>
using namespace std;

int LCS(string s1, string s2){
    int x=s1.length()+1;
    int y=s2.length()+1;

    int dp[x][y];
    int Max=0;

    for(int i=0; i<x; i++){
        for(int j=0; j<y; j++){
            
            if (i == 0 || j == 0)
                dp[i][j] = 0;

            else if(s1[i-1] == s2[j-1]){
                dp[i][j]=dp[i-1][j-1]+1;
            }
            else{
                dp[i][j]=0;
            }

            Max=max(Max, dp[i][j]);

            // if(dp[i][j]>Max){
            //     Max=dp[i][j];
            // }
            
        }

    }
    return Max;

}

int main(){
    string s1; getline(cin,s1);
    string s2; getline(cin,s2);
    

    cout<<LCS(s1,s2);


    return 0;
}