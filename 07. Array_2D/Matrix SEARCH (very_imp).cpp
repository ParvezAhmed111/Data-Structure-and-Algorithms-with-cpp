#include<iostream>
using namespace std;

int main(){
	int n, m;
	cin>>n>>m;
	int target;
	cin>>target;
	
	int a[n][m];
	
	//taking input in 2D array
	for (int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			cin>>a[i][j];
		}
	}
	
	//lets go to top right position
	int r=0, c=m-1;
	bool found=false;
	int row=0, col=0;
	while(r<n and c>=0){
		if(a[r][c]==target){
			found=true;
			row=r;
			col=c;
		}
		if(a[r][c]>target){
			c--;
		}
		else{
			r++;
		}
	}
	
	if(found)
		cout<<"Element found a position ("<<row<<","<<col<<")" <<endl;
	else
		cout<<"Element does not exist"<<endl;
		
	return 0;
}
