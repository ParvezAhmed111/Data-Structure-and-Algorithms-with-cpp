#include<iostream>
using namespace std;

bool getBit(int n, int pos){
	return ((n & (1<<pos)) != 0);
}

int setBit(int n, int pos){
	return (n|(1<<pos));
}

int unique(int arr[], int n){
	
	int result=0;
	for(int i=0; i<32; i++){
		int sum=0;
		for(int j=0; j<n ;j++){	//traversing array elements
			if(getBit(arr[j], i)){	//checking if i th position bit of any element is set or not
				sum++;	//if true then we are storing "no of times the setbit occur in that position of every element"
			}
		}
		if(sum % 3 != 0){	//
			result=setBit(result, i);
		}
	}
	return result;
}

int main(){
	
	int arr[]={1,2,3,4,1,2,3,1,2,3};
	cout<<unique(arr,10)<<endl;

	return 0;
}


