#include<iostream>
using namespace std;

int numOfOnes(int n){
	int count=0;
	while(n!=0){
		n=n & (n-1);
		count ++;
	}
	return count;
}

int main(){
	
	cout<<numOfOnes(19)<<endl;

	return 0;
}

