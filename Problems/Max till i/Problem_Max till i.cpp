/*

Problem: Max till i

*/	

//Time complexity O(n)


#include<iostream>
#include<climits>

using namespace std;

int main(){
	int n;
	cout<<"Enter the size of array: ";
	cin>>n;
	
	int arr[n];
	
	for(int i =0; i<n; i++){
		cout<<"Enter element no "<<(i+1)<<": ";
		cin>>arr[i];
	}
	
	int mx=INT_MIN;
	for(int i=0;i<n;i++){
		mx=max(mx,arr[i]);
		cout<<mx<<endl;
	}
	
	return 0;
}
