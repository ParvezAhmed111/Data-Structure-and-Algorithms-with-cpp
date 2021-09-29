//Approach 2
//Time complexity= O(n^2)


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
	
	//prefix sum of an array
	int pre[n+1]; //size is n+!
	pre[0]=0;     //0th index element is 0
	for (int i=0; i<=n; i++){
		pre[i]=pre[i-1]+a[i];
	}
	
		
	int max=INT_MIN;
	for (int i=0;i<n;i++){
		int sum=0;
		for(int j=i;j<n;j++){
			sum=pre[j]-pre[i-1]; //it wil give sum from ith to jth elemnet in O(1) time complexity
			if(sum>max){
				max=sum;
			}
		}
	}
	cout<<max<<endl;	
	return 0;
}
