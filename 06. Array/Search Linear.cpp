//Time complexity O(n)


#include<iostream>
using namespace std;

int linearSearch(int arr[], int n, int key){
	for (int i=0; i<n;i++){
		if(arr[i]==key){
			cout<<key<<" is at position ";
			return i+1;
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
	
	cout<<linearSearch(arr,n,key);
	
	
	return 0;
}
