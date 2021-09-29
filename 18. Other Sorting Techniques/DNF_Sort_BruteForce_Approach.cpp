// Problem
// Given an array containing only 0,1 and 2. You have to sort the array in O(N) time, single pass, and O(1) space.
// Time Complexity: O(N), single pass
// Space Complexity: O(1)

#include<bits/stdc++.h>
using namespace std;


void dnfSort(int arr[], int n){

    int i;
    int cnt0=0;
    int cnt1=1;
    int cnt2=2;

    for(i=0; i<n; i++){
        switch (arr[i]){
            case 0:
                cnt0++;
                break;
            case 1:
                cnt1++;
                break;
            case 3:
                cnt2++;
            default:
                break;
        }
    }

    i=0;
    while(cnt0>0){
        arr[i++]=0;
        cnt0--;
    }
    while (cnt1>0){
        arr[i++]=1;
        cnt1--;
    }
    while (cnt2>0){
        arr[i++]=2;
        cnt2--;
    }
  
}

int main(){

     int arr[]={1,0,2,1,0,1,2,1,2};

     dnfSort(arr, 9);

     for(int i=0; i<9; i++){
         cout<<arr[i]<<" ";
     }


     return 0;
 }