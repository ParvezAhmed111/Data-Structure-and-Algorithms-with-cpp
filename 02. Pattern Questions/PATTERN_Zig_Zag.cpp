/*
Zig-Zag Pattern

n=9
rows= 1-3
column=  (row_no+col_no)%4= 0-----> print *
		  row_no=2 & col_no%4= 0--> print *



1     *       *
2   *   *   *   *
3 *       *       *
  1 2 3 4 5 6 7 8 9

*/



#include<iostream>
using namespace std;

int main(){
	
	int n;
	cout<<"Enter a number: ";
	cin>>n;
	
	for(int i=1; i<=3; i++){
		for(int j=1; j<=n; j++){
			if(((i+j)%4==0) || (i==2 && j%4==0)){
				cout<<"* ";
			}
			else{
				cout<<"  ";
			}
		}
		cout<<endl;
	}
	
	return 0;
}
