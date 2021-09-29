#include<bits/stdc++.h>
using namespace std;

int main(){
    int n; cin>>n;
    stack<int> st;
    for(int i=0; i<n; i++){
        int val; cin>>val;
        st.push(val);
    }
    stack<int> newst;
    int no, new_no;
    while(!st.empty()){
        if(no > st.top()){
            no=st.top();
            newst.push(no);
            st.pop();
        }
        if(new_no < st.top()){
            new_no=st.top();
            newst.push(no);
            st.pop();
        }
        st.pop();
    }
    int a= st.size()- newst.size();
    int ans= abs(a);
    cout<<ans<<endl;
    return 0;
}