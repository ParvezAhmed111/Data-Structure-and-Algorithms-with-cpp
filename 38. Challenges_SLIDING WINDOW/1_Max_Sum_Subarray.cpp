#include<bits/stdc++.h>
using namespace std;

void maxSubarraySum(int arr[], int n, int k, int x){
    int sum=0, ans=0;

    for(int i=0; i<k; i++){
        sum += arr[i];
    }
    if(sum < x) ans = sum;

    for(int i=k; i< n; i++){
        sum = sum - arr[i-k] + arr[i];

        if(sum < x){
            ans = max(ans, sum);
        }
    }

    cout<<ans<<" is the maximum subarray sum (<x)"<<endl;
}

int main(){
    int arr[]= {7, 5, 4, 6, 8, 9};
    int n=6;
    int k=3;
    int x=20;
    
    maxSubarraySum(arr, n, k, x);

    return 0;
}