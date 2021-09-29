/*
0-1 Pattern


n=5
rows= 1-n
columns= 1 - row_no
element= if(row_no + column_no) is even---> 1
		 if(row_no + column_no) is odd----> 0 

1
0 1
1 0 1
0 1 0 1
1 0 1 0 1
*/


#include<iostream>
using namespace std;

int main(){
	
	int n;
	cin>>n;
	
	for(int i=1; i<=n; i++){
		for (int j=1; j<=i; j++){
			if ((i+j)%2==0){
				cout<<"1 ";
			}
			else{
				cout<<"0 ";
			}
		}
		cout<<endl;
	}
	
	
	return 0;
}




