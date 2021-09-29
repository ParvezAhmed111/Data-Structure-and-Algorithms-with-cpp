/*
Number Pattern

n=5
rows= 1-n
col.------> 1. space= 1 to n-row_no
			2. number= 1 to row_no

    1
   1 2
  1 2 3 
 1 2 3 4 
1 2 3 4 5

*/


#include<iostream>
using namespace std;

int main(){
	
	int n;
	cout<<"Enter a number: ";
	cin>>n;
	
	for(int i=1; i<=n; i++){
		for(int j=1; j<=n-i; j++){
			cout<<" ";
		}
		for(int j=1; j<=i; j++){
			cout<<j<<" ";
		}
		cout<<endl;
	}
	
	return 0;
}
