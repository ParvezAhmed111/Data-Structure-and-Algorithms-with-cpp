#include <bits/stdc++.h>
#include<iostream>

using namespace std;

int DecimalToBinary(int n){
	int ans=0;
	int x=1;
	while(x<=n){
		x=x*2;
	}
	x=x/2;
	
	while(x>0){
		int last_digit=n/x;
		n=n-last_digit*x;
		x=x/2;
		ans=ans*10+last_digit;
	}
	return ans;
}


int main(){
	int n;
	cin>>n;
	
	cout<<DecimalToBinary(n)<<endl;

	
	
	return 0;
}

