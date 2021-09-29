#include<iostream>
using namespace std;

int getBit(int n, int pos){
	return ((n & (1 << pos)) != 0);	//if equals to 0 then it does not has set bit in that position
}

void unique(int arr[], int n){
	int xorsum=0;

	//XOR of every element
	for(int i=0; i<n; i++){
		xorsum=xorsum^arr[i];
	}
	int tempxor=xorsum;

	//finding position rightmost set bit
	int setbit=0;
	int pos=0;
	while(setbit!=1){
		setbit = xorsum & 1;
		pos++;
		xorsum = xorsum >> 1;
	}
	
	//finding the XOR of the elements with setbit in required position
	int newxor=0;
	for(int i=0; i<n; i++){
		if(getBit(arr[i], pos-1)){	//checking if our set bit lies in the required pos
			newxor=newxor^arr[i];	//if so then do XOR
		}
	}

	cout<<newxor<<endl;	//newxor is one of the two unique no
	cout<<(tempxor^newxor)<<endl; //second unique no
	
}

int main(){
	
	int arr[]={1,2,3,1,2,3,25,17};
	unique(arr,8);

	return 0;
}
 
