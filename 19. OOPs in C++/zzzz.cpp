
#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;


int main(){
    int n; cin>>n;
    vector<int> arr(n);
    
    for(auto &i: arr){
        cin>>i;
    }
    int maxi=arr[0];
    for(int i=0; i<n;i++){
        maxi=max(maxi, arr[i]);
    }
 
    vector<int> mp(maxi, 0);
    for(int i=0; i<n; i++){
        mp[arr[i]]++;
    }

    int maxInd= mp[0];
    int ans;
    for(int i=n; i>0; i--){
        if(mp[i]>maxInd){
            maxInd= mp[i];
            ans=i;
        }
    }

    cout<<maxInd;

    
    
    
    
    return 0;
}

// #include<iostream>
// using namespace std;
    
// int main(){
//     int n; cin>>n;
//     int temp=n;
//     int newNo=0;

//     while(temp!=0){
//         int lastDigit= temp%10;
//         if(lastDigit % 2 ==0) lastDigit++;
//         else lastDigit--;

//         newNo= newNo*10 + lastDigit;
//         temp= temp/10;
//     }

//     // int ans=0;
//     // while(newNo!=0){
//     //     int l= newNo%10;
//     //     ans= ans*10 + l;
//     //     newNo= newNo/10;
//     // }

//     // cout<<ans<<endl;
//     cout<<newNo<<endl;
    
//     return 0;
// }