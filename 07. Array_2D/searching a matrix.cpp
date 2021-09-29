#include<iostream>
using namespace std;

int main(){
	int n, m;
	cin>>n>>m;
	
	int a[n][m];
	
	//taking input in 2D array
	for (int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			cin>>a[i][j];
		}
	}
	
	int x;
	cin>>x;
	
	bool flag=false;
	for (int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			if (a[i][j]==x){
				cout<<"Element "<<x<<" is found at position "<<i<<","<<j<<endl;
				flag=true;
			}
			
		}
	}
	if(flag!=true){
		cout<<"Element not found"<<endl;
	}
	
	
	
	
	//printing input in 2D array
	for (int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			cout<<a[i][j]<<" ";
		}
		cout<<endl;
	}
	
	return 0;
}
