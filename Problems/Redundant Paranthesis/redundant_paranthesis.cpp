/* 
Given a valid mathematical expression, find whether it have redundant paranthesis || not.
It contains the following operat||s '+', '-'. '*', '/'.

redundant -> extra
paranthesis-> brackets

EX:
Input 1:  A="((a+b))"
Output:   1
    ((a+b)) has redundant braces, so answer will be 1

Input 2:  A="(a+(a+b))"
Output:   0
    (a+(a+b)) doesn't have redundant braces, so answer will be 0.

*/

#include<bits/stdc++.h>
using namespace std;

int main(){
    string s; cin>>s;
    stack<char> st;
    bool ans= false;

    for(int i=0; i<s.size(); i++){
        if(s[i]=='+' or s[i]=='-' or s[i]=='*' or s[i]=='/'){
            st.push(s[i]);
        }
        else if(s[i]=='('){
            st.push(s[i]);
        }
        else if(s[i]==')'){
            if(st.top()=='('){
                ans=true;
            }

            while(st.top()=='+' or st.top()=='-' or st.top()=='*' or st.top()=='/'){
                st.pop();
            }
            st.pop();
        }

    }
    cout<<ans;
    
    return 0;



}
