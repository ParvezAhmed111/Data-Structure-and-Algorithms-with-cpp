#include<iostream>
using namespace std;

int main(){
	int n, m;
	cin>>n>>m;
	
	int A[n][m];
	
	//taking input in 2D array
	for (int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			cin>>A[i][j];
		}
	}
	
	//transpose of a matrix
	for (int i=0;i<n;i++){
		for(int j=i;j<m;j++){   //j=i just for swaping the half matrix i.e. the upper matrix
			//swap(A[i][j],A[j][i]
			int temp= A[i][j];
			A[i][j]= A[j][i];
			A[j][i]=temp;
		}
	}
	//printing input in 2D array
	for (int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			cout<<A[i][j]<<" ";
		}
		cout<<endl;
	}
	
	return 0;
}
