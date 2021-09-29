#include<bits/stdc++.h>
using namespace std;

bool dist(string a, string b){
    int count=0;
    for(int i=0;i<a.length();i++){
        if(a[i]!=b[i]) count++; 
    }
    
    if(count!=1) 
        return false;
    else 
        return true;
}

int WordHopper(string start, string end, vector<string> &dictV){
    if(start==end) return 1;
    
    if(dist(start,end)) return 2;
    
    int n=dictV.size();
    vector<bool> visit(n,false);
    queue<pair<int,string> > q;
    
    q.push(make_pair(1,start));
    while(!q.empty()){
        
        pair<int,string> pos=q.front();
        q.pop();
        int level=pos.first;
        if(dist(pos.second,end)) return pos.first;
        level++;
        for(int i=0;i<n;i++){
            if(!visit[i] && dist(dictV[i],pos.second)){
                //cout<<level<<" ";
                visit[i]=true;
                q.push(make_pair(level,dictV[i]));
            }
        }
    }
    return 0;

}

int main(){
    int n;
    string begin, end;
    cin>>begin>>end>>n;
    vector<string> C;

    for(int i=0; i<n; i++){
        string str; cin>>str;
        C.push_back(str);
    }

    
    int result= WordHopper(begin, end, C);
    cout<<result<<endl;

    return 0;
}