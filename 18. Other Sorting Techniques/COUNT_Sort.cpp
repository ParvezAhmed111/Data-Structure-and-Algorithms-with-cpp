//  Counting Sort
//  Note: Only limited to small positive integers only.
// Time Complexity: O(N)
// Space Complexity: O(max(Arr))
#include<bits/stdc++.h>
using namespace std;

void countSort(int arr[], int n){

    //to find max element (k)
    int MAX=arr[0];
    for(int i=0; i<n; i++){
        MAX=max(MAX, arr[i]);
    }

    int count[10]={0};  //ideally count array should be of size k but here we cant because we need to dynamically allocate memory to the array
    //store count of every element from our original array
    for(int i=0; i<n; i++){
        count[arr[i]]++;
    }

    //to modify count array
    //position of every dictint element in final sorted array
    for(int i=1; i<=MAX; i++){
        count[i]+=count[i-1];
    }

    //output array where we will store finally sorted values
    //traverse from last of original array
    //1st decrement; then store arr[i] to that index of output array
    int output[n];
    for(int i=n-1; i>=0; i--){
        output[--count[arr[i]]]=arr[i];
    }

    //finally output array ko original array ma dal denge
    for(int i=0; i<n; i++){
        arr[i]=output[i];
    }

}

 int main(){

     int arr[]={1,3,2,3,4,1,6,4,3};
     countSort(arr, 9);

     for(int i=0; i<9; i++){
         cout<<arr[i]<<" ";
     }


     return 0;
 }