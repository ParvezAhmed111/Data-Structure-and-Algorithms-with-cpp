//Approach 1
//Time complexity= O(n^3)

#include<iostream>
#include<climits>

using namespace std;

int main(){
	int n;
	cout<<"Enter the size of array: ";
	cin>>n;
	
	int a[n];
	
	for(int i =0; i<n; i++){
		cin>>a[i];
	}
	
	int sum;
	int max=INT_MIN;
	for (int i=0;i<n;i++){    //for starting point
		for(int j=i;j<n;j++){ //for ending point
			sum=0;
			for(int k=i; k<=j; k++){ //to print elements b/w i and j
				sum=sum+a[k];
			}
			if(sum>max){
				max=sum;
			} 
		}
	}
	cout<<max<<endl;	
	return 0;
}
