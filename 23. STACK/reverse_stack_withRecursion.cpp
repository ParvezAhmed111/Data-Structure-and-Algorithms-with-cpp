#include<iostream>
#include<stack>

using namespace std;

void insertAtBottom(stack <int> &st, int ele){

    if(st.empty()){
        st.push(ele);
        return;
    }

    int topele=st.top();
    st.pop();
    insertAtBottom(st, ele);
    
    st.push(topele);
}


void reverse(stack <int> &st){

    if(st.empty()){
        return;
    }

    int ele=st.top();
    st.pop();
    reverse(st);
    insertAtBottom(st, ele);

}

int main(){

    // int n; cin>>n;
    // int val;

    stack <int> st;

    // for(int i=0; i<n; i++){
    //     cin>>val;
    //     st.push(val);
    // }
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    st.push(5);

    // cout<<"Original stack: ";
    // while(!st.empty()){
    //     cout<<st.top()<<" ";
    //     st.pop();
    // }
    // cout<<endl;

    cout<<"Reversed stack: ";
    reverse(st);
    while(!st.empty()){
        cout<<st.top()<<" ";
        st.pop();
    }
    cout<<endl;
    

    
    

    return 0;
}