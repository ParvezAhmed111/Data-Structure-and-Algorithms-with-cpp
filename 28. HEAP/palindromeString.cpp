#include<bits/stdc++.h>
using namespace std;

bool isPalindrome(string s){

    bool check= true;
    int n= s.length();
    for(int i=0; i<n/2; i++){
        if(s[i] != s[n-i-1]){
            check= false;
            break;
        }
    }
    return check;
}

int main(){
    string str; cin>>str;

    if(isPalindrome(str)) cout<<"true";
    else cout<<"false";

    return 0;
}