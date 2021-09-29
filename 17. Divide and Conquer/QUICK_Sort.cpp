// Quick Sort- DIVIDE and CONQUER Algorithm
// Idea: Select a random pivot, put it in its correct position, and sort the left and
// right part recursively.
// Time Complexity: Avg = O(N logN), Worst Case = O(N^2)//  Merge Sort- DIVIDE and CONQUER Algorithm
//  Idea: Divide the array into two parts, sort the left part and sort the right part and merge them
//  Time Complexity: O(N logN)
//  Space Complexity: O(N) Since we need an arbitrary array as well.
 
 
 #include<iostream>
 using namespace std;

// void swap(int arr[], int i, int j){
//     int temp=arr[i];
//     arr[i]=arr[j];
//     arr[j]=temp;
// }

// int partition(int arr[], int l, int r){

//     int pivot=arr[l];   //first element as pivot
//     int i=l;
//     for(int j=l+1; j<=r; j++){
//         if(arr[j]<pivot){
//             i++;
//             swap(arr, i, j);
//         }
//     }
//     swap(arr, i, l); //pivot is the element in l

//     return i;
// }

int partition(int arr[], int l, int r){

    int pivot=arr[r];   //last element as pivot
    int i=l-1;
    for(int j=l; j<r; j++){
        if(arr[j]<pivot){
            i++;
            swap(arr[i], arr[j]);
        }
    }
    swap(arr[i+1], arr[r]); //pivot is the element in r

    return i+1;
}


void quickSort(int arr[], int l, int r){
    if(l<r){
        int pi= partition(arr, l, r);
        quickSort(arr, l, pi-1);
        quickSort(arr, pi+1, r);
    }
}

 int main(){

     int arr[]={5,6,1,3,0,2,1};
     quickSort(arr, 0, 7);

     for(int i=0; i<8; i++){
         cout<<arr[i]<<" ";
     }
     cout<<endl;


     return 0;
 }
