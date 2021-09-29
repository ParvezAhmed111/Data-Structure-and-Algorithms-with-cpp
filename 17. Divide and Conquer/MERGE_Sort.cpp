//  Merge Sort- DIVIDE and CONQUER Algorithm
//  Idea: Divide the array into two parts, sort the left part and sort the right part and merge them
//  Time Complexity: O(N logN)
//  Space Complexity: O(N) Since we need an arbitrary array as well.
 
 
 #include<iostream>
 using namespace std;

 void merge(int arr[], int l, int mid, int r){
     

     int n1= mid-l+1;
     int n2= r-mid;

    //temp arrays
     int a[n1];
     int b[n2];
    
    //storing values to array a and b
     for(int i=0; i<n1; i++){
         a[i]=arr[l+i];
     }
     for(int i=0; i<n2; i++){
         b[i]=arr[mid+1+i];
     }

     int i=0; 
     int j=0;
     int k=l;

     //case 1
     while(i<n1 && j<n2){
         if(a[i]<b[j]){
             arr[k]=a[i];
             k++; i++;
         }
         else{
             arr[k]=b[j];
             k++; j++;
         }
     }

     //case 2
     while(i<n1){
         arr[k]=a[i];
         k++; i++;
     }

     //case 3
     while(j<n2){
         arr[k]=b[j];
         k++; j++;
     }

 }

 void mergeSort(int arr[], int l, int r){

     if(l<r){
         int mid=(l+r)/2;
         mergeSort(arr, l, mid);
         mergeSort(arr, mid+1, r);

         merge(arr, l, mid, r);
     }

 }

 int main(){

     int arr[]={5,6,1,3,0,2,1};
     mergeSort(arr, 0, 7);

     for(int i=0; i<8; i++){
         cout<<arr[i]<<" ";
     }
     cout<<endl;


     return 0;
 }