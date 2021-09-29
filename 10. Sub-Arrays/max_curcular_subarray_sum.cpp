//Approach 3 
//Kadanes Algorithm
//Time complexity= O(n)


#include<iostream>
#include<climits>

using namespace std;

int kadane(int arr[], int n){
	
	int currSum=0;	
	int maxSum=INT_MIN;
	for (int i=0;i<n;i++){
		currSum=currSum+arr[i];
		if(currSum<0){
			currSum=0;
		}
		maxSum=max(maxSum, currSum);
	}
	return maxSum;
}

int main(){
	int n;
	cout<<"Enter the size of array: ";
	cin>>n;
	
	int arr[n];
	
	for(int i =0; i<n; i++){
		cin>>arr[i];
	}
	
	int wrapSum;
	int nonwrapSum;
	
	nonwrapSum=kadane(arr,n);
	
	
	int totalSum=0;
	for(int i=0;i<n;i++){
		totalSum += arr[i];//total sum of the array
		arr[i] = -arr[i];	//reversing sign of unwrapping elements to get non contributing elements 
	}
	
	wrapSum=totalSum + kadane(arr,n); //total summ of the array + sum of noncontributing elemnts
	
	cout<<max(wrapSum, nonwrapSum)<<endl;
	
	return 0;
}

