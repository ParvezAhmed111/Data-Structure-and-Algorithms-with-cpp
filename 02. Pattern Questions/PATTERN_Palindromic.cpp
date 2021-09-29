/*
Palindromic Pattern

n=5
rows= 1 to n
columns------> 1. spaces = 1 to n-row_no
			   2. numbers
			   		decreasing order-> k=row_no
			   							k--
			   							n-row_no to n
			   							
			   		increasing order-> k=2
    				   				    k+=	
    				   				    n to n+row_n-1



        1
      2 1 2
    3 2 1 2 3 
  4 3 2 1 2 3 4 
5 4 3 2 1 2 3 4 5

*/



#include<iostream>
using namespace std;

int main(){
	
	int n;
	cout<<"Enter a number: ";
	cin>>n;
	
	for(int i=1; i<=n; i++){
		int j;
		for(j=1; j<=n-i; j++){
			cout<<"  ";
		}
		int k =i;
		for(; j<=n; j++){
			cout<<k--<<" ";
		}
		k=2;
		for(;j<=n+i-1; j++){
			cout<<k++<<" ";
		}
		cout<<endl;
	}
	
	return 0;
} 
