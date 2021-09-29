#include<iostream>
#include<cmath>
using namespace std;

int factorial(int n){
	
	int fact =1;
	for(int i=2; i<=n; i++){
		fact=fact*i;
	}
	return fact;
	
}

int main(){ 
	
	int a;
	cin>>a;
	
	cout<<int(factorial(a))<<endl;
	return 0;
}

