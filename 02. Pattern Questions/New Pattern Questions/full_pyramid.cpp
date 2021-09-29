//n=5
//         1 
//       2 3 2
//     3 4 5 3 4
//   4 5 6 7 4 5 6
// 5 6 7 8 9 5 6 7 8 

#include<iostream>
using namespace std;

int main(){
	
	int n;
	cin>>n;
	
	for(int i=1; i<=n; i++){
		int j;
		for(j=1; j<=n-i; j++){
			cout<<"  ";
		}
		int k =i;
		for(; j<=n; j++){
			cout<<k++<<" ";
		}
		k=i;	
		for(;j<=n+i-1; j++){
			cout<<k++<<" ";
		}
		cout<<endl;
	}
	
	return 0;
} 
