#include<iostream>
using namespace std;

bool ispower2(int n){
	return (n && !(n & n-1));
}

int main(){
	
	cout<<ispower2(16)<<endl; //1- true
	cout<<ispower2(14)<<endl; //0 - false

	return 0;
}

