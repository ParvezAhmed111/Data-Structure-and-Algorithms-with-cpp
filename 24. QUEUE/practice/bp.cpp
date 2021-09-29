#include<bits/stdc++.h>
using namespace std;
#define int long long
const int N=1e5+3, M=1e9+7;

bool isValid(string s){
    int n= s.length();
    stack<char> st;
    bool ans= true;

    for(int i=0; i<n; i++){
        if(s[i]=='{' || s[i]=='(' || s[i]=='['){
            st.push(s[i]);
        }
        else if(s[i]==')'){
            if(!st.empty() and st.top()=='('){
                st.pop();
            }
            else{
                ans=false;
                break;
            }
        }
        else if(s[i]=='}'){
            if(!st.empty() and st.top()=='{'){
                st.pop();
            }
            else{
                ans=false;
                break;
            }
        }
        else if(s[i]==']'){
            if(!st.empty() and st.top()=='['){
                st.pop();
            }
            else{
                ans=false;
                break;
            }
        }
    }

    if(!st.empty()) ans=false;
    return ans;
}
    
int32_t main(){
    string s; cin>>s;
    if(isValid(s)) cout<<"Valid";
    else cout<<"Invalid";
    
    return 0;
}