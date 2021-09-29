#include<bits/stdc++.h>
using namespace std;

bool getBit(int n, int pos){
    return((n&(1<<pos))!=0);
}

int Different_Bits_Sum_Pairwise(int arr[], int n){
    int ans=0;
    for(int i=0; i<32; i++){
        int count=0;
        for(int j=0; j<n; j++ ){
            if(getBit(arr[j], i)){
                count++;
            }
        }
        ans+=2*count*(n-count);  //count= no of 1's //(n-count)= no of 0's
    }
    return ans;
}

int main(){
    int arr[]={1,3,5};
    int n=3;
    cout<<Different_Bits_Sum_Pairwise(arr, n)<<endl;

    return 0;
}