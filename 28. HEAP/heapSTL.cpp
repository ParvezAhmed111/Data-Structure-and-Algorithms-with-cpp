#include<bits/stdc++.h>
using namespace std;

int main(){

    //max heap
    priority_queue<int, vector<int>> pq;
    pq.push(2);
    pq.push(3);
    pq.push(1);

    cout<<pq.top()<<endl; //3
    pq.pop();
    cout<<pq.top()<<endl; //2
    cout<<endl;

    //min heap
    priority_queue<int, vector<int>, greater<int>> pqm;
    pqm.push(2);
    pqm.push(3);
    pqm.push(1);

    cout<<pqm.top()<<endl; //1
    pqm.pop();
    cout<<pqm.top()<<endl; //2

    


    

    return 0;
}