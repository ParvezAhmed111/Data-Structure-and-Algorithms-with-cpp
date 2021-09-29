//Time complexity O(n)


#include<iostream>
using namespace std;

void bubbleSort(int arr[], int n){

	int counter=1;
	while(counter<n){
		for(int i=0;i<n-counter;i++){
			if (arr[i]>arr[i+1]){
				int temp=arr[i];
				arr[i]=arr[i+1];
				arr[i+1]=temp;
			}
		}
		counter++;
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
	
	bubbleSort(arr,n);
	
	cout<<"Sorted array is: ";
	for(int i=0;i<n;i++){
		cout<<arr[i]<<" ";
	}cout<<endl;
	
	
	
	
	return 0;
}
