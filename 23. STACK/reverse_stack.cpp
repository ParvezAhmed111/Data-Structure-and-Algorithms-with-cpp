#include<iostream>
#include<stack>

using namespace std;

int main(){

    int n; cin>>n;
    int val;

    stack <int> st;

    for(int i=0; i<n; i++){
        cin>>val;
        st.push(val);
    }

    stack <int> rev;
    while(!st.empty()){
        rev.push(st.top());
        st.pop();
    }
    while(!rev.empty()){
        cout<<rev.top()<<endl;
        rev.pop();
    }

    
    

    return 0;
}