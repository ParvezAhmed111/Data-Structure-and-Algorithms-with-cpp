//Time complexity O(logn base 2) which is less than O(n)
//Elements should be in sorted order
//Find mid element and compare with key

#include<iostream>
using namespace std;

int binarySearch(int arr[], int n, int key){
	int s=0;
	int e=n;
	
	while(s<=e){
		int mid=(s+e)/2;
		
		if (arr[mid]==key){
			return mid+1;
		}
		else if(arr[mid]>key){
			e=mid-1;
		}
		else{
			s=mid+1;
		}
	}
	return -1;

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
	
	int key;
	cout<<"Enter the value to search: ";
	cin>>key;
	
	cout<<binarySearch(arr,n,key);
	
	
	return 0;
}
