#include<bits/stdc++.h>
using namespace std;
#define int long long
const int N=1e5+2, M=1e9+7;
int a[N], tree[4*N];

void build(int node, int start, int end){
    if(start==end){
        tree[node] = a[start];
        return;
    }

    int mid= (start+end)/2;
    build(2*node, start, mid);
    build(2*node+1, mid+1, end);

    tree[node]= tree[2*node] + tree[2*node+1]; 
}

int query(int node, int start, int end, int l, int r){
    //case 1--> no overlap 
    //(if l and r do not overlap)    l..r  start..end
    if(start > r || end < l) return 0;

    //case 2--> complete overlap
    //l  start   end   r
    if(l <= start && end <= r) return tree[node];

    //case 3--> partial overlap
    // start l end r    or      l start r end
    int mid= (start+end)/ 2;
    int q1= query(2*node, start, mid, l, r);
    int q2= query(2*node+1, mid+1, end, l, r);

    return q1+q2;
}

int32_t main(){
    int n; cin>>n;
    for(int i=0; i<n; i++){
        cin>>a[i];
    }
    build(1, 0, n-1);

    while(1){
        int type; cin>>type;
        if(type==-1) break;
        if(type==1){
            int l, r;
            cin>>l>>r;
            int ans= query(1, 0, n-1, l, r);
            cout<<ans<<endl;
        }
    }
    return 0;
}