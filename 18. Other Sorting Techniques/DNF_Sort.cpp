// Problem
// Given an array containing only 0,1 and 2. You have to sort the array in O(N) time, single pass, and O(1) space.
// Time Complexity: O(N), single pass
// Space Complexity: O(1)

#include<bits/stdc++.h>
using namespace std;

void swap(int  arr[], int i, int j){
    int temp= arr[i];
    arr[i]= arr[j];
    arr[j]= temp;
}

void dnfSort(int arr[], int n){

    int low=0;
    int mid=0;
    int high=n-1;

    while (mid<=high){
        if(arr[mid]==0){
            swap(arr,low, mid);
            low++; mid++;
        }
        else if(arr[mid]==1){
            mid++;
        }
        else{
            swap(arr,high, mid);
            high--;
        }
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