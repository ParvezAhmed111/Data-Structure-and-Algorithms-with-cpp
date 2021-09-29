//Time complexity O(n)


#include<iostream>
using namespace std;

void insertionSort(int arr[], int n){

	for(int i=1;i<n;i++){
		int temp=arr[i];  //2nd element stored in temp
		int j=i-1;		//j initialised to first element
		while(arr[j]>temp && j>=0){ //comparing j=1st with arr[i]=2nd element
			arr[j+1]=arr[j]; //
			j--;
		}
		arr[j+1]=temp;
	}
}

int main(){
	int n;
	cout<<"Enter the size of array: ";
	cin>>n;
	
	int arr[n];
	
	for(int i =0; i<n; i++){
		cout<<"Enter element no "<<(i+1)<<": ";
		cin>>arr[i];
	}
	
	insertionSort(arr,n);
	
	cout<<"Sorted array is: ";
	for(int i=0;i<n;i++){
		cout<<arr[i]<<" ";
	}cout<<endl;
	
	
	
	
	return 0;
}
