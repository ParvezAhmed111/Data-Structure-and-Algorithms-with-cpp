// EXPEDI - EXPEDITION
#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main(){
    ll test_case;
    cin>>test_case;

    while(test_case--){
        int n; cin>>n;
        vector<pair<int, int>> a(n);
        for(int i = 0; i<n; i++){
            //first - distance from town
            //second- amount of fuel available
            cin>>a[i].first>>a[i].second;
        }
        int l, p; //l= initial unit of fuel,  p = initial distance from town
        cin>>l>>p;

        //update distance from the town to ---> initial distance from the truck
        for(int i=0; i<n; i++){
            a[i].first = l - a[i].first; //distance stored in first
        }

        sort(a.begin(), a.end()); // on the basis of distance

        int ans = 0;
        int currFuel = p;

        priority_queue<int, vector<int>> pq; //maxHeap created
        bool flag = 0;
        //iterate no of stops and update maxHeap --> take fuel and maintain ans; 
        for(int i=0; i<n; i++){
            if(currFuel >= l){
                break;
            }

            while(currFuel < a[i].first){
                if(pq.empty()){
                    flag = 1;
                    break;
                }
                ans++;
                currFuel += pq.top();
                pq.pop();
            }
            if(flag) break;
            pq.push(a[i].second);
        }

        if(flag){
            cout<<"-1"<<endl;
            continue;
        }

        while(!pq.empty() && currFuel < l){
            currFuel += pq.top();
            pq.pop();
            ans++;
        }

        if(currFuel < l){
            cout<<"-1"<<endl;
            continue;
        }

        cout<<ans<<endl;

    }
    return 0;
}