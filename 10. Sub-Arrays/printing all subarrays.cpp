//Time complexity= O(n^3)

#include<iostream>
#include<climits>

using namespace std;

int main(){
	int n;
	cout<<"Enter the size of array: ";
	cin>>n;
	
	int a[n];
	
	cout<<"Enter elements of array: ";
	for(int i =0; i<n; i++){
		cin>>a[i];
	}
	
	cout<<"All sub-arrays of the array are:  ";
	for (int i=0;i<n;i++){    //for starting point
		for(int j=i;j<n;j++){ //for ending point
			for(int k=i; k<=j; k++){ //to print elements b/w i and j
				cout<<a[k]<<" ";
			}
			cout<<endl;
		}
	}
	return 0;
}
