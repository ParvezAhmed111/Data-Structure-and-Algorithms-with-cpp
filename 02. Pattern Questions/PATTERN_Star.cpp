/*
Star Pattern

upper pyramid
	n=4
	rows= 1-n
	col-------> 1. spaces= 1 to n-row_no
				2. *  = 1 to 2*row_no-1

lower pyramid			
	rows= n-1
	col-------> 1. spaces= 1 to n-row_no
				2. *  = 1 to 2*row_no-1
			

      *
    * * *
  * * * * * 
* * * * * * *
* * * * * * *
  * * * * *
    * * *
      *

*/

#include<iostream>
using namespace std;

int main(){
	
	int n;
	cout<<"Enter a number: ";
	cin>>n;
	
	//loop for upper pyramid
	for(int i=1; i<=n; i++){

		//loop for spaces
		for(int j=1; j<=n-i; j++){
			cout<<"  ";
		}
		
		//loop for *
		for(int j=1; j<=2*i-1; j++){
			cout<<"* ";
		}
		cout<<endl;
	}
	
	//loop for lower pyramid 
	for(int i=n; i>=1; i--){
		
		//loop for spaces
		for(int j=1; j<=n-i; j++){
			cout<<"  ";
		}
		
		//loop for *
		for(int j=1; j<=2*i-1; j++){
			cout<<"* ";
		}
		cout<<endl;
	}
	
	return 0;
}

