#include<bits/stdc++.h>
using namespace std;

void print_lcs(string s1, string s2){
    int x=s1.length()+1;
    int y=s2.length()+1;

    int dp[x][y];
    for(int i=0; i<x; i++){
        for(int j=0; j<y; j++){
            
            if (i == 0 || j == 0)
                dp[i][j] = 0;

            else if(s1[i-1] == s2[j-1]){
                dp[i][j]=dp[i-1][j-1]+1;
            }
            else{
                dp[i][j]=max(dp[i-1][j], dp[i][j-1]);
            }
        }
    }

    //print lcs
    int index= dp[x-1][y-1];
    char lcs[index+1];
    lcs[index]=0;

    int i=x-1, j=y-1;   //x-1 y-1 length of s1 and s2
    while(i>0 && j>0){
        if(s1[i-1]==s2[j-1]){
            lcs[index-1]=s1[i-1];
            i--;j--;index--;
        }
        else if(dp[i-1][j]>dp[i][j-1]){
            i--;
        }
        else{
            j--;
        }

    }
    cout<<dp[x-1][y-1]<<" "<<lcs<<endl;
}

int main(){
    string s1; getline(cin,s1);
    string s2; getline(cin,s2);
    

    print_lcs(s1,s2);

    

    return 0;
}