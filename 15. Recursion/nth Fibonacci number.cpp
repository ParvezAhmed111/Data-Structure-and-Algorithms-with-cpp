//0,1,1,2,3,5,8,13
//fib(n)= fib(n-1) + fib(n-2)
//fib(0)=0     fib(1)=1

#include<iostream>;
using namespace std;

int fib(int n){
	
//	base condition

//	if(n==0){
//		return 0;
//	}
//	if (n==1){
//		return 1;
//	}
	
	if(n==0 || n==1){
		return n;
	}
	return fib(n-1) + fib(n-2);
	
}

int main(){
	
	int n;
	cin>>n;
	
	cout<<fib(n)<<endl;
	return 0;
}
