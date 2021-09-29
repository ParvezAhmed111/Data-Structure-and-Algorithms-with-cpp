//Time complexity O(n)


#include<iostream>
using namespace std;

void selectionSort(int arr[], int n){

	for (int i=0; i<n-1;i++){
		for(int j=i+1;j<n;j++){ //i j
			if(arr[j]<arr[i]){
				int temp=arr[j];
				arr[j]=arr[i];
				arr[i]=temp;
			}
		}
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
	
	selectionSort(arr,n);
	
	cout<<"Sorted array is: ";
	for(int i=0;i<n;i++){
		cout<<arr[i]<<" ";
	}cout<<endl;
	
	
	
	
	return 0;
}
