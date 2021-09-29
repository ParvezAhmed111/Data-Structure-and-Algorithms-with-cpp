#include<iostream>
using namespace std;

int main(){
	int n1, n2, n3;
	cin>>n1>>n2>>n3;
	
	int m1[n1][n2];
	int m2[n2][n3];
	
	//taking input of m1 matrix
	for (int i=0;i<n1;i++){
		for(int j=0;j<n2;j++){
			cin>>m1[i][j];
		}
	}
	
	//taking input of m2 matrix
	for (int i=0;i<n2;i++){
		for(int j=0;j<n3;j++){
			cin>>m2[i][j];
		}
	}
	
	//initializing ans array to 0
	int ans[n1][n3];
	for (int i=0;i<n1;i++){
		for(int j=0;j<n3;j++){
			ans[i][j]=0;
		}
	}
	
	//multliplication of m1 and m2 matrix
	for(int i=0; i<n1; i++){		 //for rows for m1 matrix (n1)
		for(int j=0; j<n3; j++){   	 // for columns of m2 matrix (n3)
			for(int k=0; k<n2; k++){ //columns of m1 and rows of m2= n2
				ans[i][j]+=m1[i][k]*m2[k][j];
			}
		}
	}
	
	//printing ans matrix
	for (int i=0;i<n1;i++){
		for(int j=0;j<n3;j++){
			cout<<ans[i][j]<<" ";
		}
		cout<<endl;
	}
	
	
	return 0;
}
