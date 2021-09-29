/*
Sum of all sub arrays
*/

#include<iostream>
#include<climits>

using namespace std;

int main(){
	int n;
	cout<<"Enter the size of array: ";
	cin>>n;
	
	int a[n];
	
	for(int i =0; i<n; i++){
		cout<<"Enter element no "<<(i+1)<<": ";
		cin>>a[i];
	}
	
	int sum=0;
	
	for (int i=0;i<n;i++){
		sum=0;
		for(int j=i;j<n;j++){
			sum=sum+a[j];
			cout<<sum<<endl;
		}
	}	
	return 0;
}
